%option noyywrap
%option caseless

%{
#include"sql.h"
#include"y.tab.h"

int yylineno = 1;
%}

%%


CREATE {return CREATE;}
INSERT {return INSERT;}
INTO {return INTO;}
SELECT {return SELECT;}
UPDATE {return UPDATE;}
DELETE {return DELETE;}
SHOW {return SHOW;}
DROP {return DROP;}
USE {return USE;}
VALUES {return VALUES;}
FROM {return FROM;}
SET {return SET;}
DATABASE {return DATABASE;}
DATABASES {return DATABASES;}
TABLE {return TABLE;}
TABLES {return TABLES;}
WHERE {return WHERE;}
AND {return AND;}
OR {return OR;}
CHAR {return CHAR;}
INT {return INT;}
FLOAT {return FLOAT;}


[;()*,] {return *yytext;}

[><=] |
">="  |
"<="  |
"!="  {yylval.val_string = strdup(yytext); return OPERATOR;}



-?[0-9][0-9]* {yylval.val_int = atoi(yytext); return INT;}
-?(([0-9]*\.[0-9]+)([Ee][+-]?[0-9]+)?) {yylval.val_float = atof(yytext); return FLOAT;}
[a-zA-Z][a-zA-Z0-9_]*    {yylval.val_string = strdup(yytext); return ID;}

\'[^\']*\'  {yytext[yyleng-1] = 0;yylval.val_string = strdup(yytext+1); return STRING;} //去除两端 ’‘符号

[ \t]
\n 
. {return *yytext;}





%%