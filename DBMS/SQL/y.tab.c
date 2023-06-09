
/*  A Bison parser, made from yacc.y
    by GNU Bison version 1.28  */

#define YYBISON 1  /* Identify Bison output.  */

#define	CREATE	257
#define	INSERT	258
#define	INTO	259
#define	SELECT	260
#define	UPDATE	261
#define	DELETE	262
#define	SHOW	263
#define	DROP	264
#define	USE	265
#define	VALUES	266
#define	FROM	267
#define	SET	268
#define	DATABASE	269
#define	DATABASES	270
#define	TABLE	271
#define	TABLES	272
#define	WHERE	273
#define	AND	274
#define	OR	275
#define	CHAR	276
#define	INT	277
#define	FLOAT	278
#define	STRING	279
#define	ID	280
#define	OPERATOR	281
#define	UNINUMS	282

#line 1 "yacc.y"

#include"sql.h"

#define yyDEBUG 0

char UsingDatabaseName[50] = {0};

// #define DEBUG_ENABLE 1

char DatabaseName[50];
char database[64];




extern int yylex(void);
extern char* yytext;
int yyerror(char* msg);



#line 23 "yacc.y"
typedef union{
    int val_int;
    float val_float;
    double val_double;
    char* val_string;
    enum OpType* val_opType;

    struct Colume_Defination_Type* val_colume_defination_type;
    struct Colume_Defination* val_colume_defination;
    struct Colume_Defination_List* val_colume_defination_list;

    union Colume_Value* val_colume_value;
    struct Colume_Value_List* val_colume_value_list;
    struct Colume_List* val_colume_list;

    struct Choice* val_choice;
    struct Option_Choices* val_option_choices;

    struct ID_List* val_ID_list;
    struct Choice_List* val_choices_list;
} YYSTYPE;
#include <stdio.h>

#ifndef __cplusplus
#ifndef __STDC__
#define const
#endif
#endif



#define	YYFINAL		122
#define	YYFLAG		-32768
#define	YYNTBASE	34

#define YYTRANSLATE(x) ((unsigned)(x) <= 282 ? yytranslate[x] : 59)

static const char yytranslate[] = {     0,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,    30,
    31,    33,     2,    32,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,    29,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
     2,     2,     2,     2,     2,     1,     3,     4,     5,     6,
     7,     8,     9,    10,    11,    12,    13,    14,    15,    16,
    17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
    27,    28
};

#if YYDEBUG != 0
static const short yyprhs[] = {     0,
     0,     2,     5,     7,     9,    11,    13,    15,    17,    19,
    21,    23,    25,    27,    29,    31,    36,    41,    45,    49,
    57,    61,    66,    78,    87,    93,   101,   108,   114,   122,
   124,   128,   131,   133,   138,   140,   142,   146,   148,   150,
   152,   154,   156,   160,   164,   166,   170,   172,   176,   180,
   184,   186,   190
};

static const short yyrhs[] = {    35,
     0,    34,    35,     0,    36,     0,    37,     0,    38,     0,
    39,     0,    40,     0,    41,     0,    42,     0,    43,     0,
    44,     0,    45,     0,    46,     0,    47,     0,    48,     0,
     3,    15,    26,    29,     0,    10,    15,    26,    29,     0,
     9,    16,    29,     0,    11,    26,    29,     0,     3,    17,
    26,    30,    49,    31,    29,     0,     9,    18,    29,     0,
    10,    17,    26,    29,     0,     4,     5,    26,    30,    54,
    31,    12,    30,    52,    31,    29,     0,     4,     5,    26,
    12,    30,    52,    31,    29,     0,     6,    54,    13,    55,
    29,     0,     6,    54,    13,    55,    19,    56,    29,     0,
     8,    13,    26,    19,    56,    29,     0,     7,    26,    14,
    57,    29,     0,     7,    26,    14,    57,    19,    56,    29,
     0,    50,     0,    49,    32,    50,     0,    26,    51,     0,
    23,     0,    22,    30,    23,    31,     0,    24,     0,    53,
     0,    52,    32,    53,     0,    25,     0,    23,     0,    24,
     0,    33,     0,    26,     0,    54,    32,    26,     0,    30,
    54,    31,     0,    26,     0,    55,    32,    26,     0,    58,
     0,    30,    56,    31,     0,    56,    20,    56,     0,    56,
    21,    56,     0,    58,     0,    57,    32,    58,     0,    26,
    27,    53,     0
};

#endif

#if YYDEBUG != 0
static const short yyrline[] = { 0,
    80,    81,    82,    82,    84,    84,    84,    84,    85,    85,
    85,    85,    85,    86,    86,    89,    90,    91,    92,    96,
   127,   132,   137,   161,   191,   208,   283,   290,   296,   309,
   317,   331,   339,   344,   349,   358,   362,   374,   381,   388,
   401,   408,   415,   431,   438,   444,   459,   466,   470,   481,
   494,   501,   514
};
#endif


#if YYDEBUG != 0 || defined (YYERROR_VERBOSE)

static const char * const yytname[] = {   "$","error","$undefined.","CREATE",
"INSERT","INTO","SELECT","UPDATE","DELETE","SHOW","DROP","USE","VALUES","FROM",
"SET","DATABASE","DATABASES","TABLE","TABLES","WHERE","AND","OR","CHAR","INT",
"FLOAT","STRING","ID","OPERATOR","UNINUMS","';'","'('","')'","','","'*'","statements",
"statement","databaseSql","tableSql","createDatabaseSql","dropDatabaseSql","showDatabaseSql",
"useDatabaseSql","createTableSql","showTableSql","dropTableSql","insertTableSql",
"selectTableSql","deleteTableSql","updateTableSql","columes_defination_list",
"columes_defination","columes_defination_type","columes_value_list","columes_value",
"columes_list","ID_list","option_choices","choices_list","choice", NULL
};
#endif

static const short yyr1[] = {     0,
    34,    34,    35,    35,    36,    36,    36,    36,    37,    37,
    37,    37,    37,    37,    37,    38,    39,    40,    41,    42,
    43,    44,    45,    45,    46,    46,    47,    48,    48,    49,
    49,    50,    51,    51,    51,    52,    52,    53,    53,    53,
    54,    54,    54,    54,    55,    55,    56,    56,    56,    56,
    57,    57,    58
};

static const short yyr2[] = {     0,
     1,     2,     1,     1,     1,     1,     1,     1,     1,     1,
     1,     1,     1,     1,     1,     4,     4,     3,     3,     7,
     3,     4,    11,     8,     5,     7,     6,     5,     7,     1,
     3,     2,     1,     4,     1,     1,     3,     1,     1,     1,
     1,     1,     3,     3,     1,     3,     1,     3,     3,     3,
     1,     3,     3
};

static const short yydefact[] = {     0,
     0,     0,     0,     0,     0,     0,     0,     0,     0,     1,
     3,     4,     5,     6,     7,     8,     9,    10,    11,    12,
    13,    14,    15,     0,     0,     0,    42,     0,    41,     0,
     0,     0,     0,     0,     0,     0,     0,     2,     0,     0,
     0,     0,     0,     0,     0,     0,    18,    21,     0,     0,
    19,    16,     0,     0,     0,    44,    45,     0,    43,     0,
     0,    51,     0,    17,    22,     0,     0,    30,     0,     0,
     0,    25,     0,     0,     0,    28,     0,     0,     0,    47,
     0,    33,    35,    32,     0,     0,    39,    40,    38,     0,
    36,     0,     0,    46,    53,     0,    52,     0,     0,     0,
    27,     0,    20,    31,     0,     0,     0,    26,    29,    48,
    49,    50,     0,    24,    37,     0,    34,     0,     0,    23,
     0,     0
};

static const short yydefgoto[] = {     9,
    10,    11,    12,    13,    14,    15,    16,    17,    18,    19,
    20,    21,    22,    23,    67,    68,    84,    90,    91,    30,
    58,    79,    61,    80
};

static const short yypact[] = {    51,
    54,     5,    37,   -13,     6,    56,    58,    -2,    35,-32768,
-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,    11,    14,    23,-32768,    37,-32768,   -10,
    39,    42,    53,    59,    63,    64,    62,-32768,    65,    66,
    -7,    45,    67,    69,    71,    73,-32768,-32768,    70,    72,
-32768,-32768,    74,    68,    37,-32768,-32768,   -15,-32768,    75,
   -11,-32768,    -1,-32768,-32768,    28,    47,-32768,    41,    49,
    -1,-32768,    77,    41,    -1,-32768,    71,    -1,    -9,-32768,
    76,-32768,-32768,-32768,    78,    74,-32768,-32768,-32768,    52,
-32768,    92,     7,-32768,-32768,    27,-32768,    -5,    -1,    -1,
-32768,    82,-32768,-32768,    79,    41,    80,-32768,-32768,-32768,
-32768,-32768,    81,-32768,-32768,    41,-32768,    55,    84,-32768,
    85,-32768
};

static const short yypgoto[] = {-32768,
   100,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,-32768,
-32768,-32768,-32768,-32768,-32768,    25,-32768,     0,   -74,   -21,
-32768,   -69,-32768,   -44
};


#define	YYLAST		116


static const short yytable[] = {    95,
    62,    93,    43,    71,    54,    96,    42,    75,    98,    26,
    99,   100,    31,    72,    99,   100,    73,    76,    32,   101,
    77,    44,    55,    37,    60,   110,    99,   100,    78,   111,
   112,   115,    97,    70,   121,   108,    39,     1,     2,    40,
     3,     4,     5,     6,     7,     8,    99,   100,    41,    81,
    82,    83,    45,     1,     2,   109,     3,     4,     5,     6,
     7,     8,    27,    87,    88,    89,    28,    46,    24,    29,
    25,    33,    35,    34,    36,    56,    44,    85,    86,    92,
    44,    47,   105,   106,   122,   119,   106,    48,    49,    50,
    51,    63,    57,    52,    59,    53,    60,    69,    64,    66,
    65,    74,    94,   107,   113,   102,   103,   114,    38,   116,
   104,   117,   120,     0,     0,   118
};

static const short yycheck[] = {    74,
    45,    71,    13,    19,    12,    75,    28,    19,    78,     5,
    20,    21,    26,    29,    20,    21,    32,    29,    13,    29,
    32,    32,    30,    26,    26,    31,    20,    21,    30,    99,
   100,   106,    77,    55,     0,    29,    26,     3,     4,    26,
     6,     7,     8,     9,    10,    11,    20,    21,    26,    22,
    23,    24,    14,     3,     4,    29,     6,     7,     8,     9,
    10,    11,    26,    23,    24,    25,    30,    26,    15,    33,
    17,    16,    15,    18,    17,    31,    32,    31,    32,    31,
    32,    29,    31,    32,     0,    31,    32,    29,    26,    26,
    29,    19,    26,    29,    26,    30,    26,    30,    29,    26,
    29,    27,    26,    12,    23,    30,    29,    29,     9,    30,
    86,    31,    29,    -1,    -1,   116
};
/* -*-C-*-  Note some compilers choke on comments on `#line' lines.  */
#line 3 "/usr/local/share/bison.simple"
/* This file comes from bison-1.28.  */

/* Skeleton output parser for bison,
   Copyright (C) 1984, 1989, 1990 Free Software Foundation, Inc.

   This program is free software; you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation; either version 2, or (at your option)
   any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program; if not, write to the Free Software
   Foundation, Inc., 59 Temple Place - Suite 330,
   Boston, MA 02111-1307, USA.  */

/* As a special exception, when this file is copied by Bison into a
   Bison output file, you may use that output file without restriction.
   This special exception was added by the Free Software Foundation
   in version 1.24 of Bison.  */

/* This is the parser code that is written into each bison parser
  when the %semantic_parser declaration is not specified in the grammar.
  It was written by Richard Stallman by simplifying the hairy parser
  used when %semantic_parser is specified.  */

#ifndef YYSTACK_USE_ALLOCA
#ifdef alloca
#define YYSTACK_USE_ALLOCA
#else /* alloca not defined */
#ifdef __GNUC__
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#else /* not GNU C.  */
#if (!defined (__STDC__) && defined (sparc)) || defined (__sparc__) || defined (__sparc) || defined (__sgi) || (defined (__sun) && defined (__i386))
#define YYSTACK_USE_ALLOCA
#include <alloca.h>
#else /* not sparc */
/* We think this test detects Watcom and Microsoft C.  */
/* This used to test MSDOS, but that is a bad idea
   since that symbol is in the user namespace.  */
#if (defined (_MSDOS) || defined (_MSDOS_)) && !defined (__TURBOC__)
#if 0 /* No need for malloc.h, which pollutes the namespace;
	 instead, just don't use alloca.  */
#include <malloc.h>
#endif
#else /* not MSDOS, or __TURBOC__ */
#if defined(_AIX)
/* I don't know what this was needed for, but it pollutes the namespace.
   So I turned it off.   rms, 2 May 1997.  */
/* #include <malloc.h>  */
 #pragma alloca
#define YYSTACK_USE_ALLOCA
#else /* not MSDOS, or __TURBOC__, or _AIX */
#if 0
#ifdef __hpux /* haible@ilog.fr says this works for HPUX 9.05 and up,
		 and on HPUX 10.  Eventually we can turn this on.  */
#define YYSTACK_USE_ALLOCA
#define alloca __builtin_alloca
#endif /* __hpux */
#endif
#endif /* not _AIX */
#endif /* not MSDOS, or __TURBOC__ */
#endif /* not sparc */
#endif /* not GNU C */
#endif /* alloca not defined */
#endif /* YYSTACK_USE_ALLOCA not defined */

#ifdef YYSTACK_USE_ALLOCA
#define YYSTACK_ALLOC alloca
#else
#define YYSTACK_ALLOC malloc
#endif

/* Note: there must be only one dollar sign in this file.
   It is replaced by the list of actions, each action
   as one case of the switch.  */

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		-2
#define YYEOF		0
#define YYACCEPT	goto yyacceptlab
#define YYABORT 	goto yyabortlab
#define YYERROR		goto yyerrlab1
/* Like YYERROR except do call yyerror.
   This remains here temporarily to ease the
   transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */
#define YYFAIL		goto yyerrlab
#define YYRECOVERING()  (!!yyerrstatus)
#define YYBACKUP(token, value) \
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    { yychar = (token), yylval = (value);			\
      yychar1 = YYTRANSLATE (yychar);				\
      YYPOPSTACK;						\
      goto yybackup;						\
    }								\
  else								\
    { yyerror ("syntax error: cannot back up"); YYERROR; }	\
while (0)

#define YYTERROR	1
#define YYERRCODE	256

#ifndef YYPURE
#define YYLEX		yylex()
#endif

#ifdef YYPURE
#ifdef YYLSP_NEEDED
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, &yylloc, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval, &yylloc)
#endif
#else /* not YYLSP_NEEDED */
#ifdef YYLEX_PARAM
#define YYLEX		yylex(&yylval, YYLEX_PARAM)
#else
#define YYLEX		yylex(&yylval)
#endif
#endif /* not YYLSP_NEEDED */
#endif

/* If nonreentrant, generate the variables here */

#ifndef YYPURE

int	yychar;			/*  the lookahead symbol		*/
YYSTYPE	yylval;			/*  the semantic value of the		*/
				/*  lookahead symbol			*/

#ifdef YYLSP_NEEDED
YYLTYPE yylloc;			/*  location data for the lookahead	*/
				/*  symbol				*/
#endif

int yynerrs;			/*  number of parse errors so far       */
#endif  /* not YYPURE */

#if YYDEBUG != 0
int yydebug;			/*  nonzero means print parse trace	*/
/* Since this is uninitialized, it does not stop multiple parsers
   from coexisting.  */
#endif

/*  YYINITDEPTH indicates the initial size of the parser's stacks	*/

#ifndef	YYINITDEPTH
#define YYINITDEPTH 200
#endif

/*  YYMAXDEPTH is the maximum size the stacks can grow to
    (effective only if the built-in stack extension method is used).  */

#if YYMAXDEPTH == 0
#undef YYMAXDEPTH
#endif

#ifndef YYMAXDEPTH
#define YYMAXDEPTH 10000
#endif

/* Define __yy_memcpy.  Note that the size argument
   should be passed with type unsigned int, because that is what the non-GCC
   definitions require.  With GCC, __builtin_memcpy takes an arg
   of type size_t, but it can handle unsigned int.  */

#if __GNUC__ > 1		/* GNU C and GNU C++ define this.  */
#define __yy_memcpy(TO,FROM,COUNT)	__builtin_memcpy(TO,FROM,COUNT)
#else				/* not GNU C or C++ */
#ifndef __cplusplus

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (to, from, count)
     char *to;
     char *from;
     unsigned int count;
{
  register char *f = from;
  register char *t = to;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#else /* __cplusplus */

/* This is the most reliable way to avoid incompatibilities
   in available built-in functions on various systems.  */
static void
__yy_memcpy (char *to, char *from, unsigned int count)
{
  register char *t = to;
  register char *f = from;
  register int i = count;

  while (i-- > 0)
    *t++ = *f++;
}

#endif
#endif

#line 217 "/usr/local/share/bison.simple"

/* The user can define YYPARSE_PARAM as the name of an argument to be passed
   into yyparse.  The argument should have type void *.
   It should actually point to an object.
   Grammar actions can access the variable by casting it
   to the proper pointer type.  */

#ifdef YYPARSE_PARAM
#ifdef __cplusplus
#define YYPARSE_PARAM_ARG void *YYPARSE_PARAM
#define YYPARSE_PARAM_DECL
#else /* not __cplusplus */
#define YYPARSE_PARAM_ARG YYPARSE_PARAM
#define YYPARSE_PARAM_DECL void *YYPARSE_PARAM;
#endif /* not __cplusplus */
#else /* not YYPARSE_PARAM */
#define YYPARSE_PARAM_ARG
#define YYPARSE_PARAM_DECL
#endif /* not YYPARSE_PARAM */

/* Prevent warning if -Wstrict-prototypes.  */
#ifdef __GNUC__
#ifdef YYPARSE_PARAM
int yyparse (void *);
#else
int yyparse (void);
#endif
#endif

int
yyparse(YYPARSE_PARAM_ARG)
     YYPARSE_PARAM_DECL
{
  register int yystate;
  register int yyn;
  register short *yyssp;
  register YYSTYPE *yyvsp;
  int yyerrstatus;	/*  number of tokens to shift before error messages enabled */
  int yychar1 = 0;		/*  lookahead token as an internal (translated) token number */

  short	yyssa[YYINITDEPTH];	/*  the state stack			*/
  YYSTYPE yyvsa[YYINITDEPTH];	/*  the semantic value stack		*/

  short *yyss = yyssa;		/*  refer to the stacks thru separate pointers */
  YYSTYPE *yyvs = yyvsa;	/*  to allow yyoverflow to reallocate them elsewhere */

#ifdef YYLSP_NEEDED
  YYLTYPE yylsa[YYINITDEPTH];	/*  the location stack			*/
  YYLTYPE *yyls = yylsa;
  YYLTYPE *yylsp;

#define YYPOPSTACK   (yyvsp--, yyssp--, yylsp--)
#else
#define YYPOPSTACK   (yyvsp--, yyssp--)
#endif

  int yystacksize = YYINITDEPTH;
  int yyfree_stacks = 0;

#ifdef YYPURE
  int yychar;
  YYSTYPE yylval;
  int yynerrs;
#ifdef YYLSP_NEEDED
  YYLTYPE yylloc;
#endif
#endif

  YYSTYPE yyval;		/*  the variable used to return		*/
				/*  semantic values from the action	*/
				/*  routines				*/

  int yylen;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Starting parse\n");
#endif

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */

  yyssp = yyss - 1;
  yyvsp = yyvs;
#ifdef YYLSP_NEEDED
  yylsp = yyls;
#endif

/* Push a new state, which is found in  yystate  .  */
/* In all cases, when you get here, the value and location stacks
   have just been pushed. so pushing a state here evens the stacks.  */
yynewstate:

  *++yyssp = yystate;

  if (yyssp >= yyss + yystacksize - 1)
    {
      /* Give user a chance to reallocate the stack */
      /* Use copies of these so that the &'s don't force the real ones into memory. */
      YYSTYPE *yyvs1 = yyvs;
      short *yyss1 = yyss;
#ifdef YYLSP_NEEDED
      YYLTYPE *yyls1 = yyls;
#endif

      /* Get the current used size of the three stacks, in elements.  */
      int size = yyssp - yyss + 1;

#ifdef yyoverflow
      /* Each stack pointer address is followed by the size of
	 the data in use in that stack, in bytes.  */
#ifdef YYLSP_NEEDED
      /* This used to be a conditional around just the two extra args,
	 but that might be undefined if yyoverflow is a macro.  */
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yyls1, size * sizeof (*yylsp),
		 &yystacksize);
#else
      yyoverflow("parser stack overflow",
		 &yyss1, size * sizeof (*yyssp),
		 &yyvs1, size * sizeof (*yyvsp),
		 &yystacksize);
#endif

      yyss = yyss1; yyvs = yyvs1;
#ifdef YYLSP_NEEDED
      yyls = yyls1;
#endif
#else /* no yyoverflow */
      /* Extend the stack our own way.  */
      if (yystacksize >= YYMAXDEPTH)
	{
	  yyerror("parser stack overflow");
	  if (yyfree_stacks)
	    {
	      free (yyss);
	      free (yyvs);
#ifdef YYLSP_NEEDED
	      free (yyls);
#endif
	    }
	  return 2;
	}
      yystacksize *= 2;
      if (yystacksize > YYMAXDEPTH)
	yystacksize = YYMAXDEPTH;
#ifndef YYSTACK_USE_ALLOCA
      yyfree_stacks = 1;
#endif
      yyss = (short *) YYSTACK_ALLOC (yystacksize * sizeof (*yyssp));
      __yy_memcpy ((char *)yyss, (char *)yyss1,
		   size * (unsigned int) sizeof (*yyssp));
      yyvs = (YYSTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yyvsp));
      __yy_memcpy ((char *)yyvs, (char *)yyvs1,
		   size * (unsigned int) sizeof (*yyvsp));
#ifdef YYLSP_NEEDED
      yyls = (YYLTYPE *) YYSTACK_ALLOC (yystacksize * sizeof (*yylsp));
      __yy_memcpy ((char *)yyls, (char *)yyls1,
		   size * (unsigned int) sizeof (*yylsp));
#endif
#endif /* no yyoverflow */

      yyssp = yyss + size - 1;
      yyvsp = yyvs + size - 1;
#ifdef YYLSP_NEEDED
      yylsp = yyls + size - 1;
#endif

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Stack size increased to %d\n", yystacksize);
#endif

      if (yyssp >= yyss + yystacksize - 1)
	YYABORT;
    }

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Entering state %d\n", yystate);
#endif

  goto yybackup;
 yybackup:

/* Do appropriate processing given the current state.  */
/* Read a lookahead token if we need one and don't already have one.  */
/* yyresume: */

  /* First try to decide what to do without reference to lookahead token.  */

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* yychar is either YYEMPTY or YYEOF
     or a valid token in external form.  */

  if (yychar == YYEMPTY)
    {
#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Reading a token: ");
#endif
      yychar = YYLEX;
    }

  /* Convert token to internal form (in yychar1) for indexing tables with */

  if (yychar <= 0)		/* This means end of input. */
    {
      yychar1 = 0;
      yychar = YYEOF;		/* Don't call YYLEX any more */

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Now at end of input.\n");
#endif
    }
  else
    {
      yychar1 = YYTRANSLATE(yychar);

#if YYDEBUG != 0
      if (yydebug)
	{
	  fprintf (stderr, "Next token is %d (%s", yychar, yytname[yychar1]);
	  /* Give the individual parser a way to print the precise meaning
	     of a token, for further debugging info.  */
#ifdef YYPRINT
	  YYPRINT (stderr, yychar, yylval);
#endif
	  fprintf (stderr, ")\n");
	}
#endif
    }

  yyn += yychar1;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != yychar1)
    goto yydefault;

  yyn = yytable[yyn];

  /* yyn is what to do for this token type in this state.
     Negative => reduce, -yyn is rule number.
     Positive => shift, yyn is new state.
       New state is final state => don't bother to shift,
       just return success.
     0, or most negative number => error.  */

  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrlab;

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Shift the lookahead token.  */

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting token %d (%s), ", yychar, yytname[yychar1]);
#endif

  /* Discard the token being shifted unless it is eof.  */
  if (yychar != YYEOF)
    yychar = YYEMPTY;

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  /* count tokens shifted since error; after three, turn off error status.  */
  if (yyerrstatus) yyerrstatus--;

  yystate = yyn;
  goto yynewstate;

/* Do the default action for the current state.  */
yydefault:

  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;

/* Do a reduction.  yyn is the number of a rule to reduce with.  */
yyreduce:
  yylen = yyr2[yyn];
  if (yylen > 0)
    yyval = yyvsp[1-yylen]; /* implement default value of the action */

#if YYDEBUG != 0
  if (yydebug)
    {
      int i;

      fprintf (stderr, "Reducing via rule %d (line %d), ",
	       yyn, yyrline[yyn]);

      /* Print the symbols being reduced, and their result.  */
      for (i = yyprhs[yyn]; yyrhs[i] > 0; i++)
	fprintf (stderr, "%s ", yytname[yyrhs[i]]);
      fprintf (stderr, " -> %s\n", yytname[yyr1[yyn]]);
    }
#endif


  switch (yyn) {

case 16:
#line 89 "yacc.y"
{createDatabase(yyvsp[-1].val_string);printf("SQL>");;
    break;}
case 17:
#line 90 "yacc.y"
{dropDatabase(yyvsp[-1].val_string);printf("SQL>");;
    break;}
case 18:
#line 91 "yacc.y"
{showDatabases();printf("SQL>");;
    break;}
case 19:
#line 92 "yacc.y"
{useDatabase(yyvsp[-1].val_string);printf("SQL>");;
    break;}
case 20:
#line 97 "yacc.y"
{

                    if(yyDEBUG)
                    {
                        struct Colume_Defination_List* sp = yyvsp[-2].val_colume_defination_list;
                        while(sp != NULL)
                        {
                            printf("%s ",sp->colume_defination->name_ID);
                            if(sp->colume_defination->colume_defination_type->type_colume == enum_INT)
                            {
                                printf("INT\n");
                            }
                            else if(sp->colume_defination->colume_defination_type->type_colume == enum_STRING)
                            {
                                printf("String\n");
                            }
                            else 
                            {
                                printf("FLOAT\n");
                            }
                            sp = sp->next_colume_defination;
                        }
                    }

                    
                    createTable(yyvsp[-4].val_string,yyvsp[-2].val_colume_defination_list);
                    printf("SQL>");
                    
                    
                ;
    break;}
case 21:
#line 128 "yacc.y"
{
                showTables();
                printf("SQL>");
            ;
    break;}
case 22:
#line 133 "yacc.y"
{
               dropTable(yyvsp[-1].val_string);
               printf("SQL>")
            ;
    break;}
case 23:
#line 137 "yacc.y"
{
                    
                    if(yyDEBUG)
                    {
                        struct Colume_List* sp = yyvsp[-6].val_colume_list;
                        while(sp!=NULL)
                        {
                            if(sp->type == enum_XING)
                            {
                                printf("%s ",sp->name_ID);
                            }
                            else if(sp->type == enum_STRING)
                            {
                                printf("%s ",sp->name_ID);
                            }
                            sp = sp->next_Colume_List;
                        }
                        printf("\n");
                    }


                    insertTable(yyvsp[-8].val_string,yyvsp[-6].val_colume_list,yyvsp[-2].val_colume_value_list);
                    printf("SQL>");
                ;
    break;}
case 24:
#line 162 "yacc.y"
{


                    if(yyDEBUG)
                    {
                        struct Colume_Value_List* sp = yyvsp[-2].val_colume_value_list;
                        while(sp != NULL)
                        {
                            switch(sp->type)
                            {
                                case enum_INT:
                                    printf("enum_INT %d\n",sp->colume_value.Colume_Value_int);
                                    break;
                                case enum_FLOAT:
                                    printf("enum_FLOAT %g\n",sp->colume_value.Colume_Value_float);
                                    break;
                                case enum_STRING:
                                    printf("enum_STRING %s\n",sp->colume_value.Colume_Value_string);
                                    break;
                            }
                            sp = sp->next_Colume_Value_List;
                        }
                        printf("\n");
                    }


                    insertTable(yyvsp[-5].val_string,NULL,yyvsp[-2].val_colume_value_list);
                    printf("SQL>");
                ;
    break;}
case 25:
#line 192 "yacc.y"
{
                    if(yyDEBUG)
                    {
                        struct ID_List* sp = yyvsp[-1].val_ID_list;
                        while(sp != NULL)
                        {
                            printf("ID_Name: %s\n",sp->name_ID);
                            sp = sp->next_ID;
                        }
                        printf("\n");
                    }

                    
                    selectTableWithNoChoice(yyvsp[-3].val_colume_list,yyvsp[-1].val_ID_list);
                    printf("SQL>");
                ;
    break;}
case 26:
#line 209 "yacc.y"
{
                
                    if(yyDEBUG)
                    {
                        struct Option_Choices* sp = yyvsp[-1].val_option_choices;
                        struct Choice* choice;
                        struct Colume_Value_List* colume_value;
                        while(sp!=NULL)
                        {
                            choice = sp->choice;

                            printf("%s ",choice->name_ID);

                            switch(choice->optype)
                            {
                                case enum_Bigger:
                                    printf("enum_Bigger ");
                                    break;
                                case enum_Less:
                                    printf("enum_Less ");
                                    break;
                                case enum_Equal:
                                    printf("enum_Equal ");
                                    break;
                                case enum_notBigger:
                                    printf("enum_notBigger ");
                                    break;
                                case enum_notLess:
                                    printf("enum_notLess ");
                                    break;
                                case enum_notEqual:
                                    printf("enum_notEqual ");
                                    break;

                            }

                            colume_value = choice->choice_colume_value_list;
                            switch(colume_value->type)
                            {
                                case enum_INT:
                                    printf("enum_INT %d  ",colume_value->colume_value.Colume_Value_int);
                                    break;
                                case enum_FLOAT:
                                    printf("enum_FLOAT %g  ",colume_value->colume_value.Colume_Value_float);
                                    break;
                                case enum_STRING:
                                    printf("enum_STRING %s  ",colume_value->colume_value.Colume_Value_string);
                                    break;
                            }

                            switch(sp->LinkType)
                            {
                                case enum_NO:
                                    printf("enum_NO\n");
                                    break;
                                case enum_AND:
                                    printf("enum_AND\n");
                                    break;
                                case enum_OR:
                                    printf("enum_OR\n");
                                    break;
                            }

                            sp = sp->next_Option_Choices;
                        }
                    }

                    selectTableWithChoice(yyvsp[-5].val_colume_list,yyvsp[-3].val_ID_list,yyvsp[-1].val_option_choices);
                    printf("SQL>");
              ;
    break;}
case 27:
#line 283 "yacc.y"
{

                    
                    deleteTable(yyvsp[-3].val_string,yyvsp[-1].val_option_choices);
                    printf("SQL>");
                ;
    break;}
case 28:
#line 291 "yacc.y"
{   
                    updateTableALL(yyvsp[-3].val_string,yyvsp[-1].val_choices_list);
                    printf("SQL>");
                    
                ;
    break;}
case 29:
#line 297 "yacc.y"
{
                
                    updateTable(yyvsp[-5].val_string,yyvsp[-3].val_choices_list,yyvsp[-1].val_option_choices);
                    printf("SQL>");
                ;
    break;}
case 30:
#line 310 "yacc.y"
{
                            yyval.val_colume_defination_list = (struct Colume_Defination_List*)malloc(sizeof(struct Colume_Defination_List));
                            yyval.val_colume_defination_list->colume_defination = yyvsp[0].val_colume_defination;
                            yyval.val_colume_defination_list->next_colume_defination = NULL;

                            
                        ;
    break;}
case 31:
#line 318 "yacc.y"
{
                          yyval.val_colume_defination_list = yyvsp[-2].val_colume_defination_list;
                          //找到最后一个位置，将$3插入在最后面
                          struct Colume_Defination_List* sp = yyval.val_colume_defination_list;
                          while(sp->next_colume_defination != NULL)
                            sp = sp->next_colume_defination;

                          sp->next_colume_defination = (struct Colume_Defination_List*)malloc(sizeof(struct Colume_Defination_List));
                          sp->next_colume_defination->colume_defination = yyvsp[0].val_colume_defination;
                          sp->next_colume_defination->next_colume_defination = NULL;

                       ;
    break;}
case 32:
#line 332 "yacc.y"
{
                        yyval.val_colume_defination = (struct Colume_Defination*)malloc(sizeof(struct Colume_Defination));
                        strcpy(yyval.val_colume_defination->name_ID,yyvsp[-1].val_string);
                        yyval.val_colume_defination->colume_defination_type= yyvsp[0].val_colume_defination_type;

                             
                    ;
    break;}
case 33:
#line 340 "yacc.y"
{
                            yyval.val_colume_defination_type = (struct Colume_Defination_Type*)malloc(sizeof(struct Colume_Defination_Type));
                            yyval.val_colume_defination_type->type_colume = enum_INT;
                        ;
    break;}
case 34:
#line 345 "yacc.y"
{
                            yyval.val_colume_defination_type = (struct Colume_Defination_Type*)malloc(sizeof(struct Colume_Defination_Type));
                            yyval.val_colume_defination_type->type_colume = enum_STRING; 
                        ;
    break;}
case 35:
#line 350 "yacc.y"
{
                            yyval.val_colume_defination_type = (struct Colume_Defination_Type*)malloc(sizeof(struct Colume_Defination_Type));
                            yyval.val_colume_defination_type->type_colume = enum_FLOAT; 
                        ;
    break;}
case 36:
#line 359 "yacc.y"
{
                    yyval.val_colume_value_list = yyvsp[0].val_colume_value_list;
                ;
    break;}
case 37:
#line 363 "yacc.y"
{
                    yyval.val_colume_value_list = yyvsp[-2].val_colume_value_list;

                    struct Colume_Value_List* sp = yyval.val_colume_value_list;
                    while(sp->next_Colume_Value_List != NULL)
                        sp = sp->next_Colume_Value_List;
                    
                    sp->next_Colume_Value_List = (struct Colume_Value_List*)malloc(sizeof(struct Colume_Value_List));
                    sp->next_Colume_Value_List = yyvsp[0].val_colume_value_list;

                ;
    break;}
case 38:
#line 375 "yacc.y"
{
                yyval.val_colume_value_list = (struct Colume_Value_List*)malloc(sizeof(struct Colume_Value_List));
                yyval.val_colume_value_list->type = enum_STRING;
                strcpy(yyval.val_colume_value_list->colume_value.Colume_Value_string,yyvsp[0].val_string);
                yyval.val_colume_value_list->next_Colume_Value_List = NULL;
            ;
    break;}
case 39:
#line 382 "yacc.y"
{
                yyval.val_colume_value_list = (struct Colume_Value_List*)malloc(sizeof(struct Colume_Value_List));
                yyval.val_colume_value_list->type = enum_INT;
                yyval.val_colume_value_list->colume_value.Colume_Value_int = yyvsp[0].val_int;
                yyval.val_colume_value_list->next_Colume_Value_List= NULL;
            ;
    break;}
case 40:
#line 389 "yacc.y"
{
                yyval.val_colume_value_list = (struct Colume_Value_List*)malloc(sizeof(struct Colume_Value_List));
                yyval.val_colume_value_list->type = enum_FLOAT;
                yyval.val_colume_value_list->colume_value.Colume_Value_float = yyvsp[0].val_float;
                yyval.val_colume_value_list->next_Colume_Value_List = NULL;
            ;
    break;}
case 41:
#line 402 "yacc.y"
{
                yyval.val_colume_list = (struct Colume_List*)malloc(sizeof(struct Colume_List));
                yyval.val_colume_list->type = enum_XING;
                strcpy(yyval.val_colume_list->name_ID,"*");
                yyval.val_colume_list->next_Colume_List = NULL;
            ;
    break;}
case 42:
#line 409 "yacc.y"
{
                yyval.val_colume_list = (struct Colume_List*)malloc(sizeof(struct Colume_List));
                yyval.val_colume_list->type = enum_STRING;
                strcpy(yyval.val_colume_list->name_ID,yyvsp[0].val_string);
                yyval.val_colume_list->next_Colume_List = NULL;
            ;
    break;}
case 43:
#line 416 "yacc.y"
{
                yyval.val_colume_list = yyvsp[-2].val_colume_list;
                
                //找到最后一个位置，将$3插入
                struct Colume_List* sp = yyval.val_colume_list;
                while(sp->next_Colume_List!=NULL)
                {
                    sp = sp->next_Colume_List;
                }

                sp->next_Colume_List = (struct Colume_List*)malloc(sizeof(struct Colume_List));
                sp->next_Colume_List->type = enum_STRING;
                strcpy(sp->next_Colume_List->name_ID,yyvsp[0].val_string);
                sp->next_Colume_List->next_Colume_List = NULL;
            ;
    break;}
case 44:
#line 431 "yacc.y"
{
                yyval.val_colume_list = yyvsp[-1].val_colume_list;
            ;
    break;}
case 45:
#line 439 "yacc.y"
{
            yyval.val_ID_list = (struct ID_List*)malloc(sizeof(struct ID_List));
            strcpy(yyval.val_ID_list->name_ID,yyvsp[0].val_string);
            yyval.val_ID_list->next_ID = NULL;
        ;
    break;}
case 46:
#line 445 "yacc.y"
{
            yyval.val_ID_list = yyvsp[-2].val_ID_list;

            struct ID_List* sp = yyval.val_ID_list;
            while(sp->next_ID != NULL)
            {
                sp = sp->next_ID;
            }

            sp->next_ID = (struct ID_List*)malloc(sizeof(struct ID_List));
            strcpy(sp->next_ID->name_ID,yyvsp[0].val_string);
            sp->next_ID->next_ID = NULL;
       ;
    break;}
case 47:
#line 460 "yacc.y"
{
                yyval.val_option_choices = (struct Option_Choices*)malloc(sizeof(struct Option_Choices));
                yyval.val_option_choices->choice = yyvsp[0].val_choice;
                yyval.val_option_choices->LinkType = enum_NO;
                yyval.val_option_choices->next_Option_Choices = NULL;
              ;
    break;}
case 48:
#line 467 "yacc.y"
{
                yyval.val_option_choices = yyvsp[-1].val_option_choices;
              ;
    break;}
case 49:
#line 471 "yacc.y"
{
                yyval.val_option_choices = yyvsp[-2].val_option_choices;
                // $$->LinkType = enum_AND;

                struct Option_Choices* sp = yyval.val_option_choices;
                while(sp->next_Option_Choices != NULL)
                    sp = sp->next_Option_Choices;
                sp->LinkType = enum_AND;
                sp->next_Option_Choices = yyvsp[0].val_option_choices;
              ;
    break;}
case 50:
#line 482 "yacc.y"
{
                yyval.val_option_choices = yyvsp[-2].val_option_choices;
                // $$->LinkType = enum_OR;

                struct Option_Choices* sp = yyval.val_option_choices;
                while(sp->next_Option_Choices != NULL)
                    sp = sp->next_Option_Choices;
                sp->LinkType = enum_OR;
                sp->next_Option_Choices = yyvsp[0].val_option_choices;
              ;
    break;}
case 51:
#line 495 "yacc.y"
{
                yyval.val_choices_list = (struct Choice_List*)malloc(sizeof(struct Choice_List));
                yyval.val_choices_list->choice = yyvsp[0].val_choice;
                yyval.val_choices_list->next_Choice = NULL;

            ;
    break;}
case 52:
#line 502 "yacc.y"
{
                yyval.val_choices_list = yyvsp[-2].val_choices_list;

                struct Choice_List* sp = yyval.val_choices_list;
                while(sp->next_Choice != NULL)
                    sp = sp->next_Choice;
                
                sp->next_Choice = (struct Choice_List*)malloc(sizeof(struct Choice_List));
                sp->next_Choice->choice = yyvsp[0].val_choice;
                sp->next_Choice->next_Choice = NULL;
            ;
    break;}
case 53:
#line 515 "yacc.y"
{
            yyval.val_choice = (struct Choice*)malloc(sizeof(struct Choice));
            strcpy(yyval.val_choice->name_ID,yyvsp[-2].val_string);
            
            if(yyDEBUG)
            {
                printf("OPERATOE: %s\n",yyvsp[-1].val_string);
            }

            if(strcmp(">",yyvsp[-1].val_string) == 0)
            yyval.val_choice->optype = enum_Bigger;
            else if(strcmp("<",yyvsp[-1].val_string) == 0)
            yyval.val_choice->optype = enum_Less;
            else if(strcmp("=",yyvsp[-1].val_string) == 0)
            yyval.val_choice->optype = enum_Equal;
            else if(strcmp("<=",yyvsp[-1].val_string) == 0)
            yyval.val_choice->optype = enum_notBigger;
            else if(strcmp(">=",yyvsp[-1].val_string) == 0)
            yyval.val_choice->optype = enum_notLess;
            else if(strcmp("!=",yyvsp[-1].val_string) == 0)
            yyval.val_choice->optype = enum_notEqual;

            yyval.val_choice->choice_colume_value_list = yyvsp[0].val_colume_value_list;

        ;
    break;}
}
   /* the action file gets copied in in place of this dollarsign */
#line 543 "/usr/local/share/bison.simple"

  yyvsp -= yylen;
  yyssp -= yylen;
#ifdef YYLSP_NEEDED
  yylsp -= yylen;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

  *++yyvsp = yyval;

#ifdef YYLSP_NEEDED
  yylsp++;
  if (yylen == 0)
    {
      yylsp->first_line = yylloc.first_line;
      yylsp->first_column = yylloc.first_column;
      yylsp->last_line = (yylsp-1)->last_line;
      yylsp->last_column = (yylsp-1)->last_column;
      yylsp->text = 0;
    }
  else
    {
      yylsp->last_line = (yylsp+yylen-1)->last_line;
      yylsp->last_column = (yylsp+yylen-1)->last_column;
    }
#endif

  /* Now "shift" the result of the reduction.
     Determine what state that goes to,
     based on the state we popped back to
     and the rule number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTBASE] + *yyssp;
  if (yystate >= 0 && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTBASE];

  goto yynewstate;

yyerrlab:   /* here on detecting error */

  if (! yyerrstatus)
    /* If not already recovering from an error, report this error.  */
    {
      ++yynerrs;

#ifdef YYERROR_VERBOSE
      yyn = yypact[yystate];

      if (yyn > YYFLAG && yyn < YYLAST)
	{
	  int size = 0;
	  char *msg;
	  int x, count;

	  count = 0;
	  /* Start X at -yyn if nec to avoid negative indexes in yycheck.  */
	  for (x = (yyn < 0 ? -yyn : 0);
	       x < (sizeof(yytname) / sizeof(char *)); x++)
	    if (yycheck[x + yyn] == x)
	      size += strlen(yytname[x]) + 15, count++;
	  msg = (char *) malloc(size + 15);
	  if (msg != 0)
	    {
	      strcpy(msg, "parse error");

	      if (count < 5)
		{
		  count = 0;
		  for (x = (yyn < 0 ? -yyn : 0);
		       x < (sizeof(yytname) / sizeof(char *)); x++)
		    if (yycheck[x + yyn] == x)
		      {
			strcat(msg, count == 0 ? ", expecting `" : " or `");
			strcat(msg, yytname[x]);
			strcat(msg, "'");
			count++;
		      }
		}
	      yyerror(msg);
	      free(msg);
	    }
	  else
	    yyerror ("parse error; also virtual memory exceeded");
	}
      else
#endif /* YYERROR_VERBOSE */
	yyerror("parse error");
    }

  goto yyerrlab1;
yyerrlab1:   /* here on error raised explicitly by an action */

  if (yyerrstatus == 3)
    {
      /* if just tried and failed to reuse lookahead token after an error, discard it.  */

      /* return failure if at end of input */
      if (yychar == YYEOF)
	YYABORT;

#if YYDEBUG != 0
      if (yydebug)
	fprintf(stderr, "Discarding token %d (%s).\n", yychar, yytname[yychar1]);
#endif

      yychar = YYEMPTY;
    }

  /* Else will try to reuse lookahead token
     after shifting the error token.  */

  yyerrstatus = 3;		/* Each real token shifted decrements this */

  goto yyerrhandle;

yyerrdefault:  /* current state does not do anything special for the error token. */

#if 0
  /* This is wrong; only states that explicitly want error tokens
     should shift them.  */
  yyn = yydefact[yystate];  /* If its default is to accept any token, ok.  Otherwise pop it.*/
  if (yyn) goto yydefault;
#endif

yyerrpop:   /* pop the current state because it cannot handle the error token */

  if (yyssp == yyss) YYABORT;
  yyvsp--;
  yystate = *--yyssp;
#ifdef YYLSP_NEEDED
  yylsp--;
#endif

#if YYDEBUG != 0
  if (yydebug)
    {
      short *ssp1 = yyss - 1;
      fprintf (stderr, "Error: state stack now");
      while (ssp1 != yyssp)
	fprintf (stderr, " %d", *++ssp1);
      fprintf (stderr, "\n");
    }
#endif

yyerrhandle:

  yyn = yypact[yystate];
  if (yyn == YYFLAG)
    goto yyerrdefault;

  yyn += YYTERROR;
  if (yyn < 0 || yyn > YYLAST || yycheck[yyn] != YYTERROR)
    goto yyerrdefault;

  yyn = yytable[yyn];
  if (yyn < 0)
    {
      if (yyn == YYFLAG)
	goto yyerrpop;
      yyn = -yyn;
      goto yyreduce;
    }
  else if (yyn == 0)
    goto yyerrpop;

  if (yyn == YYFINAL)
    YYACCEPT;

#if YYDEBUG != 0
  if (yydebug)
    fprintf(stderr, "Shifting error token, ");
#endif

  *++yyvsp = yylval;
#ifdef YYLSP_NEEDED
  *++yylsp = yylloc;
#endif

  yystate = yyn;
  goto yynewstate;

 yyacceptlab:
  /* YYACCEPT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 0;

 yyabortlab:
  /* YYABORT comes here.  */
  if (yyfree_stacks)
    {
      free (yyss);
      free (yyvs);
#ifdef YYLSP_NEEDED
      free (yyls);
#endif
    }
  return 1;
}
#line 542 "yacc.y"


int main()
{
    printf("SQL>");
    while(1)
    {
        yyparse();
    }
}

int yyerror(char* msg)
{
    printf("Error: %s at '%s' \n",msg,yytext);
    printf("SQL>");
}


