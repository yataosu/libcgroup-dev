#!/bin/bash

# Simple test framework for libcgroup.
# Upon loading it does following:
#  - sets $TMP, where all temporary files should be stored.
#  - backs-up /etc/cgrules.conf in the $TMP
#    (so it does not interfere with tests)
#
# Function cleanup() or die() must be called to destroy this temporary
# directory and restore previous cgrules.conf!
#
# Usage:
# . ./testenv.sh
# <do some testing>
# cleanup
# exit 0

# Print an error message and exit
# Usage:
#   cgclear || die "cgclear failed"
function die()
{
	echo $*
	/root/rpmbuild/BUILD/libcgroup-0.41/libtool --mode=execute /root/rpmbuild/BUILD/libcgroup-0.41/src/tools/cgclear
	if [ -e $TMP/cgrules-backup.conf ]; then
		mv $TMP/cgrules-backup.conf /etc/cgrules.conf &>/dev/null
	else
		rm /etc/cgrules.conf &>/dev/null
	fi
	rm -rf $TMP
	unset TMP
	exit 1
}

# Clear everything that was created at loading this script, i.e.
# remove the temporary directory
# In addition, check that nothing remained mounted.
# Usage:
#   cleanup
function cleanup()
{
	RET=0
	grep -v systemd </proc/mounts >$TMP/mounts
	if grep "^cgroup" $TMP/mounts &>/dev/null; then
		echo "Error: cleanup has found mounted cgroup:"
		grep cgroup /proc/mounts
		RET=1
		cgclear
	fi
	if [ -e $TMP/cgrules-backup.conf ]; then
		mv $TMP/cgrules-backup.conf /etc/cgrules.conf &>/dev/null
	else
		rm /etc/cgrules.conf &>/dev/null
	fi
	rm -rf $TMP
	unset TMP
	[ -z $RET ] || exit $RET
}

# Copies a file to $TMP and replaces all occurrences of TMP in the file with
# value of $TMP. The function prints the name of the new file to its std.
# output.
# Usage:
#    cgconfigparser -l `prepare_config config/sample.conf`
function prepare_config()
{
	INPUT=$1
	OUTPUT=$TMP/`basename $INPUT`
	# echo -n "m4_changequote()" | m4 -P -D "TMP=$TMP" - $FILE >$OUTPUT
	sed -e "s!\bTMP\b!$TMP!g" <$INPUT >$OUTPUT || (
		echo "Error: prepare config failed!" >&2; exit 1
	)
	echo $OUTPUT
}

export TMP=`mktemp --tmpdir -d libcgroup-tmp-XXXXXXX`
# store the rules on safe place, we don't want them to mess up the tests
mv /etc/cgrules.conf $TMP/cgrules-backup.conf &>/dev/null
# tools directory
export TOOLSDIR="/root/rpmbuild/BUILD/libcgroup-0.41/libtool --mode=execute /root/rpmbuild/BUILD/libcgroup-0.41/src/tools/"
# config files directory
export CONFIGDIR="/root/rpmbuild/BUILD/libcgroup-0.41/samples"
# test directory
export TESTDIR="/root/rpmbuild/BUILD/libcgroup-0.41/tests"
