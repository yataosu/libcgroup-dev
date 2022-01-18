#ifndef lint
static const char yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93";
#endif

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20130304

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)

#define YYPREFIX "yy"

#define YYPURE 0

#line 17 "parse.y"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <libcgroup.h>
#include <libcgroup-internal.h>

int yylex(void);
extern int line_no;
extern char *yytext;

static void yyerror(const char *s)
{
	fprintf(stderr, "error at line number %d at %s:%s\n", line_no, yytext,
		s);
}

int yywrap(void)
{
	return 1;
}

#line 42 "parse.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union {
	char *name;
	char chr;
	int val;
	struct cgroup_dictionary *values;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 55 "parse.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define ID 257
#define MOUNT 258
#define GROUP 259
#define PERM 260
#define TASK 261
#define ADMIN 262
#define NAMESPACE 263
#define DEFAULT 264
#define TEMPLATE 265
#define YYERRCODE 256
static const short yylhs[] = {                           -1,
    0,    0,    0,    0,    0,    0,   13,   14,   10,    1,
    1,    9,    9,    9,   16,   17,   17,   17,   18,   18,
   15,   15,   15,    4,    4,    5,    5,   19,   19,   20,
   20,    8,    8,    6,    7,   22,   21,    2,    2,    3,
   12,   12,   11,
};
static const short yylen[] = {                            2,
    2,    2,    2,    2,    2,    0,    4,    4,    5,    1,
    1,    4,    5,    4,    5,    4,    5,    4,    5,    5,
    4,    5,    0,    4,    5,    4,    5,    4,    5,    4,
    5,    5,    5,    4,    4,    4,    4,    4,    5,    4,
    4,    5,    4,
};
static const short yydefred[] = {                         6,
    0,    0,    0,    0,    0,    0,    2,    1,    4,    3,
    5,    0,   10,   11,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   40,    0,
    0,    0,    0,    0,   43,    0,    7,    0,    0,    0,
    0,    0,    0,    0,    0,    9,    0,    0,    0,    0,
    0,    0,    0,    0,   15,   38,    0,    0,    0,    0,
    0,   41,    0,    0,    0,    8,    0,    0,    0,    0,
    0,   39,    0,    0,   12,   14,    0,   42,    0,    0,
    0,    0,   16,    0,    0,   18,    0,    0,    0,   13,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
   17,   21,    0,    0,    0,    0,   32,    0,    0,    0,
   33,    0,    0,    0,    0,    0,    0,   22,   24,    0,
    0,   26,    0,    0,    0,    0,    0,   19,    0,    0,
    0,   20,   25,    0,   27,    0,   28,    0,    0,   30,
    0,    0,   34,   35,   29,    0,   31,    0,   36,   37,
};
static const short yydgoto[] = {                          1,
   15,   20,    7,   80,   82,  107,  111,   51,   32,    8,
    9,   23,   10,   25,   59,   11,   40,   70,   98,  100,
  132,  128,
};
static const short yysindex[] = {                         0,
 -241, -103, -238, -102,  -94, -219,    0,    0,    0,    0,
    0, -218,    0,    0,  -91, -217, -216,  -82,  -19, -125,
 -230,  -18, -124,  -78,  -79, -229, -210,  -13,    0,  -74,
  -73, -123, -206,   -9,    0, -228,    0,  -70,  -69, -122,
   -4, -201, -200, -228,  -65,    0,    1, -198,  -62,  -61,
  -60, -200, -225,  -59,    0,    0,    4,    5, -121,  -58,
 -200,    0,    9, -188, -187,    0, -120,  -52,  -51,  -50,
 -200,    0, -184,   13,    0,    0, -119,    0,   15, -118,
   16, -117,    0, -179, -178,    0, -116,   21, -176,    0,
 -175,   22, -177, -173,   25, -174,   27, -115,   28, -114,
    0,    0,   31,   32, -165,  -30,    0,   35, -162,  -27,
    0, -160,   37, -163, -157,   40, -159,    0,    0,   44,
 -187,    0,   45, -188,   46, -151,  -16,    0,   49, -148,
  -12,    0,    0, -113,    0, -112,    0,   51, -178,    0,
   53, -179,    0,    0,    0, -111,    0, -110,    0,    0,
};
static const short yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -11,    0,    0,    0,    0,    0,    0,    0,
    0,  -11,    0,    0,    0,    0,    0,    0,    0,    0,
  -11,    0,    0,    0,    0,    0,    0,    0,    0,    0,
  -11,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
};
static const short yygindex[] = {                         0,
    0,    0,    0,   -8,   -6,    0,    0,   69,    0,    0,
    0,    0,    0,    0,  -36,    0,    0,    0,  -25,  -21,
    0,    0,
};
#define YYTABLESIZE 147
static const short yytable[] = {                         29,
   35,   46,   55,   75,   83,   90,   93,   96,  101,  114,
  117,  143,  144,  149,  150,   67,    2,    3,   13,   12,
   16,    4,    5,    6,   77,   14,   30,   38,   17,   31,
   39,   21,   49,   50,   87,   68,   69,   18,   19,   22,
   26,   27,   33,   24,   36,   37,   41,   42,   43,   44,
   47,   48,   52,   53,   56,   57,   58,   61,   63,   62,
   64,   65,   72,   71,   66,   73,   76,   78,   79,   81,
   84,   85,   88,   89,   86,   91,   94,   97,   99,  102,
  103,  104,  105,  108,  106,  109,  110,  112,  115,  118,
  119,  120,  121,  122,  123,  124,  125,  126,  127,  129,
  130,  131,  133,  135,  137,  138,  139,  140,  141,  145,
  142,  147,   60,   23,  134,  136,  148,  146,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   28,   34,   45,   54,   74,   74,   74,   92,   95,
   74,  113,  116,   95,   92,  116,  113,
};
static const short yycheck[] = {                        125,
  125,  125,  125,  125,  125,  125,  125,  125,  125,  125,
  125,  125,  125,  125,  125,   52,  258,  259,  257,  123,
  123,  263,  264,  265,   61,  264,  257,  257,  123,  260,
  260,  123,  261,  262,   71,  261,  262,  257,  257,  257,
  123,   61,   61,  260,  123,  125,  257,   61,  123,  123,
  257,   61,  123,  123,   59,  257,  257,  123,  257,   59,
  123,  123,   59,  123,  125,   61,  125,   59,  257,  257,
  123,  123,  257,   61,  125,   61,   61,  257,  257,   59,
  257,  257,   61,  257,  262,   61,  261,   61,   61,   59,
   59,  257,  123,   59,  257,  123,  257,   61,  262,  257,
   61,  261,   59,   59,   59,  257,  123,   59,  257,   59,
  123,   59,   44,  125,  121,  124,  142,  139,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,  257,  257,  257,  257,  257,  257,  257,  257,  257,
  257,  257,  257,  257,  257,  257,  257,
};
#define YYFINAL 1
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 265
#if YYDEBUG
static const char *yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"';'",0,"'='",0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ID","MOUNT",
"GROUP","PERM","TASK","ADMIN","NAMESPACE","DEFAULT","TEMPLATE",
};
static const char *yyrule[] = {
"$accept : start",
"start : start group",
"start : start mount",
"start : start default",
"start : start namespace",
"start : start template",
"start :",
"default : DEFAULT '{' default_conf '}'",
"default_conf : PERM '{' task_or_admin '}'",
"group : GROUP group_name '{' group_conf '}'",
"group_name : ID",
"group_name : DEFAULT",
"group_conf : ID '{' namevalue_conf '}'",
"group_conf : group_conf ID '{' namevalue_conf '}'",
"group_conf : PERM '{' task_or_admin '}'",
"template : TEMPLATE ID '{' template_conf '}'",
"template_conf : ID '{' namevalue_conf '}'",
"template_conf : template_conf ID '{' namevalue_conf '}'",
"template_conf : PERM '{' template_task_or_admin '}'",
"template_task_or_admin : TASK '{' template_task_namevalue_conf '}' template_admin_conf",
"template_task_or_admin : ADMIN '{' template_admin_namevalue_conf '}' template_task_conf",
"namevalue_conf : ID '=' ID ';'",
"namevalue_conf : namevalue_conf ID '=' ID ';'",
"namevalue_conf :",
"task_namevalue_conf : ID '=' ID ';'",
"task_namevalue_conf : task_namevalue_conf ID '=' ID ';'",
"admin_namevalue_conf : ID '=' ID ';'",
"admin_namevalue_conf : admin_namevalue_conf ID '=' ID ';'",
"template_task_namevalue_conf : ID '=' ID ';'",
"template_task_namevalue_conf : template_task_namevalue_conf ID '=' ID ';'",
"template_admin_namevalue_conf : ID '=' ID ';'",
"template_admin_namevalue_conf : template_admin_namevalue_conf ID '=' ID ';'",
"task_or_admin : TASK '{' task_namevalue_conf '}' admin_conf",
"task_or_admin : ADMIN '{' admin_namevalue_conf '}' task_conf",
"admin_conf : ADMIN '{' admin_namevalue_conf '}'",
"task_conf : TASK '{' task_namevalue_conf '}'",
"template_admin_conf : ADMIN '{' template_admin_namevalue_conf '}'",
"template_task_conf : TASK '{' template_task_namevalue_conf '}'",
"mountvalue_conf : ID '=' ID ';'",
"mountvalue_conf : mountvalue_conf ID '=' ID ';'",
"mount : MOUNT '{' mountvalue_conf '}'",
"namespace_conf : ID '=' ID ';'",
"namespace_conf : namespace_conf ID '=' ID ';'",
"namespace : NAMESPACE '{' namespace_conf '}'",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  500
#endif
#endif

#define YYINITSTACKSIZE 500

typedef struct {
    unsigned stacksize;
    short    *s_base;
    short    *s_mark;
    short    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    short *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return -1;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (short *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return -1;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return -1;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack)) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    yyerror("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == 0) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = 0;
            if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
            if (!yys) yys = "illegal-symbol";
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 61 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
	}
break;
case 2:
#line 65 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
	}
break;
case 3:
#line 69 "parse.y"
	{
	  yyval.val = yystack.l_mark[-1].val;
	}
break;
case 4:
#line 73 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
	}
break;
case 5:
#line 77 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
	}
break;
case 6:
#line 81 "parse.y"
	{
		yyval.val = 1;
	}
break;
case 7:
#line 87 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
		if (yyval.val) {
			cgroup_config_define_default();
		}
	}
break;
case 8:
#line 97 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
	}
break;
case 9:
#line 103 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
		if (yyval.val) {
			yyval.val = cgroup_config_insert_cgroup(yystack.l_mark[-3].name);
			if (!yyval.val) {
				fprintf(stderr, "failed to insert group"
					" check size and memory");
				yyval.val = ECGOTHER;
				return yyval.val;
			}
		} else {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 10:
#line 124 "parse.y"
	{
		yyval.name = yystack.l_mark[0].name;
	}
break;
case 11:
#line 128 "parse.y"
	{
		yyval.name = yystack.l_mark[0].name;
	}
break;
case 12:
#line 134 "parse.y"
	{
		yyval.val = cgroup_config_parse_controller_options(yystack.l_mark[-3].name, yystack.l_mark[-1].values);
		cgroup_dictionary_free(yystack.l_mark[-1].values);
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 13:
#line 145 "parse.y"
	{
		yyval.val = cgroup_config_parse_controller_options(yystack.l_mark[-3].name, yystack.l_mark[-1].values);
		cgroup_dictionary_free(yystack.l_mark[-1].values);
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 14:
#line 156 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 15:
#line 168 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
		if (yyval.val) {
			yyval.val = template_config_insert_cgroup(yystack.l_mark[-3].name);
			if (!yyval.val) {
				fprintf(stderr, "parsing failed at line number %d\n",
					line_no);
				yyval.val = ECGOTHER;
				return yyval.val;
			}
		} else {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 16:
#line 190 "parse.y"
	{
		yyval.val = template_config_parse_controller_options(yystack.l_mark[-3].name, yystack.l_mark[-1].values);
		cgroup_dictionary_free(yystack.l_mark[-1].values);
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 17:
#line 201 "parse.y"
	{
		yyval.val = template_config_parse_controller_options(yystack.l_mark[-3].name, yystack.l_mark[-1].values);
		cgroup_dictionary_free(yystack.l_mark[-1].values);
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 18:
#line 212 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 19:
#line 225 "parse.y"
	{
	yyval.val = yystack.l_mark[-2].val && yystack.l_mark[0].val;
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 20:
#line 235 "parse.y"
	{
		yyval.val = yystack.l_mark[-2].val && yystack.l_mark[0].val;
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
		return yyval.val;
		}
	}
break;
case 21:
#line 249 "parse.y"
	{
		struct cgroup_dictionary *dict;
		int ret;
		ret = cgroup_dictionary_create(&dict, 0);
		if (ret == 0)
			ret = cgroup_dictionary_add(dict, yystack.l_mark[-3].name, yystack.l_mark[-1].name);
		if (ret) {
			fprintf(stderr, "parsing failed at line number %d:%s\n",
				line_no, cgroup_strerror(ret));
			yyval.values = NULL;
			cgroup_dictionary_free(dict);
			return ECGCONFIGPARSEFAIL;
		}
		yyval.values = dict;
	}
break;
case 22:
#line 265 "parse.y"
	{
		int ret = 0;
		ret = cgroup_dictionary_add(yystack.l_mark[-4].values, yystack.l_mark[-3].name, yystack.l_mark[-1].name);
		if (ret != 0) {
			fprintf(stderr, "parsing failed at line number %d: %s\n",
				line_no, cgroup_strerror(ret));
			yyval.values = NULL;
			return ECGCONFIGPARSEFAIL;
		}
		yyval.values = yystack.l_mark[-4].values;
	}
break;
case 23:
#line 277 "parse.y"
	{
		yyval.values = NULL;
	}
break;
case 24:
#line 284 "parse.y"
	{
		yyval.val = cgroup_config_group_task_perm(yystack.l_mark[-3].name, yystack.l_mark[-1].name);
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 25:
#line 294 "parse.y"
	{
		yyval.val = yystack.l_mark[-4].val && cgroup_config_group_task_perm(yystack.l_mark[-3].name, yystack.l_mark[-1].name);
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 26:
#line 307 "parse.y"
	{
		yyval.val = cgroup_config_group_admin_perm(yystack.l_mark[-3].name, yystack.l_mark[-1].name);
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 27:
#line 317 "parse.y"
	{
		yyval.val = yystack.l_mark[-4].val && cgroup_config_group_admin_perm(yystack.l_mark[-3].name, yystack.l_mark[-1].name);
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 28:
#line 330 "parse.y"
	{
		yyval.val = template_config_group_task_perm(yystack.l_mark[-3].name, yystack.l_mark[-1].name);
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 29:
#line 340 "parse.y"
	{
		yyval.val = yystack.l_mark[-4].val && template_config_group_task_perm(yystack.l_mark[-3].name, yystack.l_mark[-1].name);
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 30:
#line 353 "parse.y"
	{
		yyval.val = template_config_group_admin_perm(yystack.l_mark[-3].name, yystack.l_mark[-1].name);
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 31:
#line 363 "parse.y"
	{
		yyval.val = yystack.l_mark[-4].val && template_config_group_admin_perm(yystack.l_mark[-3].name, yystack.l_mark[-1].name);
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 32:
#line 377 "parse.y"
	{
		yyval.val = yystack.l_mark[-2].val && yystack.l_mark[0].val;
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 33:
#line 387 "parse.y"
	{
		yyval.val = yystack.l_mark[-2].val && yystack.l_mark[0].val;
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 34:
#line 399 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 35:
#line 411 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 36:
#line 423 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 37:
#line 435 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 38:
#line 448 "parse.y"
	{
		if (!cgroup_config_insert_into_mount_table(yystack.l_mark[-3].name, yystack.l_mark[-1].name)) {
			cgroup_config_cleanup_mount_table();
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
		yyval.val = 1;
	}
break;
case 39:
#line 457 "parse.y"
	{
		if (!cgroup_config_insert_into_mount_table(yystack.l_mark[-3].name, yystack.l_mark[-1].name)) {
			cgroup_config_cleanup_mount_table();
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
		yyval.val = 1;
	}
break;
case 40:
#line 468 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
case 41:
#line 481 "parse.y"
	{
		if (!cgroup_config_insert_into_namespace_table(yystack.l_mark[-3].name, yystack.l_mark[-1].name)) {
			cgroup_config_cleanup_namespace_table();
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
		yyval.val = 1;
	}
break;
case 42:
#line 490 "parse.y"
	{
		if (!cgroup_config_insert_into_namespace_table(yystack.l_mark[-3].name, yystack.l_mark[-1].name)) {
			cgroup_config_cleanup_namespace_table();
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
		yyval.val = 1;
	}
break;
case 43:
#line 501 "parse.y"
	{
		yyval.val = yystack.l_mark[-1].val;
		if (!yyval.val) {
			fprintf(stderr, "parsing failed at line number %d\n",
				line_no);
			yyval.val = ECGCONFIGPARSEFAIL;
			return yyval.val;
		}
	}
break;
#line 989 "parse.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = 0;
#if YYDEBUG
            if (yydebug)
            {
                yys = 0;
                if (yychar <= YYMAXTOKEN) yys = yyname[yychar];
                if (!yys) yys = "illegal-symbol";
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == 0) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack))
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (short) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    yyerror("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
