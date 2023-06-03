%{
#include"sql.h"

#define yyDEBUG 0

char UsingDatabaseName[50] = {0};

// #define DEBUG_ENABLE 1

char DatabaseName[50];
char database[64];




extern int yylex(void);
extern char* yytext;
int yyerror(char* msg);


%}

%union{
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
}

%token CREATE INSERT INTO SELECT UPDATE DELETE
%token SHOW DROP USE VALUES FROM SET
%token DATABASE DATABASES TABLE TABLES
%token WHERE AND OR
%token CHAR
%token<val_int>INT 
%token<val_float>FLOAT
%token<val_string>STRING
%token<val_string> ID 


%token<val_string> OPERATOR     


%type<val_colume_defination_type> columes_defination_type
%type<val_colume_defination> columes_defination
%type<val_colume_defination_list> columes_defination_list

%type<val_colume_value_list> columes_value
%type<val_colume_value_list> columes_value_list
%type<val_colume_list> columes_list


%type<val_choice> choice
%type<val_option_choices> option_choices
%type<val_ID_list> ID_list
%type<val_choices_list> choices_list  



%left AND OR
%nonassoc UNINUMS

%%

statements: statement 
          | statements statement 
statement:  databaseSql | tableSql

databaseSql: createDatabaseSql | dropDatabaseSql | showDatabaseSql | useDatabaseSql
tableSql: createTableSql  | showTableSql | dropTableSql | insertTableSql | selectTableSql 
        | deleteTableSql  | updateTableSql
 
//1.数据库语法分析
createDatabaseSql: CREATE DATABASE ID ';'  {createDatabase($3);printf("SQL>");}
dropDatabaseSql: DROP DATABASE ID ';' {dropDatabase($3);printf("SQL>");}
showDatabaseSql: SHOW DATABASES ';' {showDatabases();printf("SQL>");}
useDatabaseSql: USE ID ';' {useDatabase($2);printf("SQL>");}


//2.表语法分析
createTableSql: CREATE TABLE ID '(' columes_defination_list ')' ';' 
                {

                    if(yyDEBUG)
                    {
                        struct Colume_Defination_List* sp = $5;
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

                    
                    createTable($3,$5);
                    printf("SQL>");
                    
                    
                }
showTableSql: SHOW TABLES ';'  
            {
                showTables();
                printf("SQL>");
            } ;
 dropTableSql: DROP TABLE ID ';'   
            {
               dropTable($3);
               printf("SQL>")
            }
insertTableSql: INSERT INTO ID '(' columes_list ')' VALUES '(' columes_value_list ')' ';'  {
                    
                    if(yyDEBUG)
                    {
                        struct Colume_List* sp = $5;
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


                    insertTable($3,$5,$9);
                    printf("SQL>");
                }
              | INSERT INTO ID VALUES '(' columes_value_list ')' ';'  
              {


                    if(yyDEBUG)
                    {
                        struct Colume_Value_List* sp = $6;
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


                    insertTable($3,NULL,$6);
                    printf("SQL>");
                }
selectTableSql: SELECT columes_list FROM ID_list ';' 
                {
                    if(yyDEBUG)
                    {
                        struct ID_List* sp = $4;
                        while(sp != NULL)
                        {
                            printf("ID_Name: %s\n",sp->name_ID);
                            sp = sp->next_ID;
                        }
                        printf("\n");
                    }

                    
                    selectTableWithNoChoice($2,$4);
                    printf("SQL>");
                }
              | SELECT columes_list FROM ID_list WHERE option_choices ';' 
              {
                
                    if(yyDEBUG)
                    {
                        struct Option_Choices* sp = $6;
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

                    selectTableWithChoice($2,$4,$6);
                    printf("SQL>");
              }




deleteTableSql: DELETE FROM ID WHERE option_choices ';'  {

                    
                    deleteTable($3,$5);
                    printf("SQL>");
                }

updateTableSql: UPDATE ID SET choices_list ';'
                {   
                    updateTableALL($2,$4);
                    printf("SQL>");
                    
                }
                |
                 UPDATE ID SET choices_list WHERE option_choices ';'  {
                
                    updateTable($2,$4,$6);
                    printf("SQL>");
                } 






//3.使用到的语法
columes_defination_list: columes_defination 
                        {
                            $$ = (struct Colume_Defination_List*)malloc(sizeof(struct Colume_Defination_List));
                            $$->colume_defination = $1;
                            $$->next_colume_defination = NULL;

                            
                        }
                       | columes_defination_list ',' columes_defination 
                       {
                          $$ = $1;
                          //找到最后一个位置，将$3插入在最后面
                          struct Colume_Defination_List* sp = $$;
                          while(sp->next_colume_defination != NULL)
                            sp = sp->next_colume_defination;

                          sp->next_colume_defination = (struct Colume_Defination_List*)malloc(sizeof(struct Colume_Defination_List));
                          sp->next_colume_defination->colume_defination = $3;
                          sp->next_colume_defination->next_colume_defination = NULL;

                       }

columes_defination: ID columes_defination_type 
                    {
                        $$ = (struct Colume_Defination*)malloc(sizeof(struct Colume_Defination));
                        strcpy($$->name_ID,$1);
                        $$->colume_defination_type= $2;

                             
                    }
columes_defination_type: INT 
                        {
                            $$ = (struct Colume_Defination_Type*)malloc(sizeof(struct Colume_Defination_Type));
                            $$->type_colume = enum_INT;
                        }
                        | CHAR '(' INT ')' 
                        {
                            $$ = (struct Colume_Defination_Type*)malloc(sizeof(struct Colume_Defination_Type));
                            $$->type_colume = enum_STRING; 
                        }
                        | FLOAT 
                        {
                            $$ = (struct Colume_Defination_Type*)malloc(sizeof(struct Colume_Defination_Type));
                            $$->type_colume = enum_FLOAT; 
                        }




columes_value_list:columes_value 
                {
                    $$ = $1;
                }
                  | columes_value_list ',' columes_value 
                {
                    $$ = $1;

                    struct Colume_Value_List* sp = $$;
                    while(sp->next_Colume_Value_List != NULL)
                        sp = sp->next_Colume_Value_List;
                    
                    sp->next_Colume_Value_List = (struct Colume_Value_List*)malloc(sizeof(struct Colume_Value_List));
                    sp->next_Colume_Value_List = $3;

                }
columes_value: STRING
            {
                $$ = (struct Colume_Value_List*)malloc(sizeof(struct Colume_Value_List));
                $$->type = enum_STRING;
                strcpy($$->colume_value.Colume_Value_string,$1);
                $$->next_Colume_Value_List = NULL;
            } 
             | INT 
            {
                $$ = (struct Colume_Value_List*)malloc(sizeof(struct Colume_Value_List));
                $$->type = enum_INT;
                $$->colume_value.Colume_Value_int = $1;
                $$->next_Colume_Value_List= NULL;
            }
             | FLOAT 
            {
                $$ = (struct Colume_Value_List*)malloc(sizeof(struct Colume_Value_List));
                $$->type = enum_FLOAT;
                $$->colume_value.Colume_Value_float = $1;
                $$->next_Colume_Value_List = NULL;
            }






columes_list: '*' 
            {
                $$ = (struct Colume_List*)malloc(sizeof(struct Colume_List));
                $$->type = enum_XING;
                strcpy($$->name_ID,"*");
                $$->next_Colume_List = NULL;
            }
            | ID 
            {
                $$ = (struct Colume_List*)malloc(sizeof(struct Colume_List));
                $$->type = enum_STRING;
                strcpy($$->name_ID,$1);
                $$->next_Colume_List = NULL;
            }
            | columes_list ',' ID 
            {
                $$ = $1;
                
                //找到最后一个位置，将$3插入
                struct Colume_List* sp = $$;
                while(sp->next_Colume_List!=NULL)
                {
                    sp = sp->next_Colume_List;
                }

                sp->next_Colume_List = (struct Colume_List*)malloc(sizeof(struct Colume_List));
                sp->next_Colume_List->type = enum_STRING;
                strcpy(sp->next_Colume_List->name_ID,$3);
                sp->next_Colume_List->next_Colume_List = NULL;
            }
            | '(' columes_list ')' %prec UNINUMS {
                $$ = $2;
            }




ID_list: ID 
        {
            $$ = (struct ID_List*)malloc(sizeof(struct ID_List));
            strcpy($$->name_ID,$1);
            $$->next_ID = NULL;
        }
       | ID_list ',' ID
       {
            $$ = $1;

            struct ID_List* sp = $$;
            while(sp->next_ID != NULL)
            {
                sp = sp->next_ID;
            }

            sp->next_ID = (struct ID_List*)malloc(sizeof(struct ID_List));
            strcpy(sp->next_ID->name_ID,$3);
            sp->next_ID->next_ID = NULL;
       }

option_choices: choice
              {
                $$ = (struct Option_Choices*)malloc(sizeof(struct Option_Choices));
                $$->choice = $1;
                $$->LinkType = enum_NO;
                $$->next_Option_Choices = NULL;
              }
              | '(' option_choices ')' %prec UNINUMS
              {
                $$ = $2;
              }
              | option_choices AND option_choices
              {
                $$ = $1;
                // $$->LinkType = enum_AND;

                struct Option_Choices* sp = $$;
                while(sp->next_Option_Choices != NULL)
                    sp = sp->next_Option_Choices;
                sp->LinkType = enum_AND;
                sp->next_Option_Choices = $3;
              }
              | option_choices OR option_choices
              {
                $$ = $1;
                // $$->LinkType = enum_OR;

                struct Option_Choices* sp = $$;
                while(sp->next_Option_Choices != NULL)
                    sp = sp->next_Option_Choices;
                sp->LinkType = enum_OR;
                sp->next_Option_Choices = $3;
              }


choices_list: choice
            {
                $$ = (struct Choice_List*)malloc(sizeof(struct Choice_List));
                $$->choice = $1;
                $$->next_Choice = NULL;

            }
            | choices_list ',' choice 
            {
                $$ = $1;

                struct Choice_List* sp = $$;
                while(sp->next_Choice != NULL)
                    sp = sp->next_Choice;
                
                sp->next_Choice = (struct Choice_List*)malloc(sizeof(struct Choice_List));
                sp->next_Choice->choice = $3;
                sp->next_Choice->next_Choice = NULL;
            }

choice: ID OPERATOR columes_value 
        {
            $$ = (struct Choice*)malloc(sizeof(struct Choice));
            strcpy($$->name_ID,$1);
            
            if(yyDEBUG)
            {
                printf("OPERATOE: %s\n",$2);
            }

            if(strcmp(">",$2) == 0)
            $$->optype = enum_Bigger;
            else if(strcmp("<",$2) == 0)
            $$->optype = enum_Less;
            else if(strcmp("=",$2) == 0)
            $$->optype = enum_Equal;
            else if(strcmp("<=",$2) == 0)
            $$->optype = enum_notBigger;
            else if(strcmp(">=",$2) == 0)
            $$->optype = enum_notLess;
            else if(strcmp("!=",$2) == 0)
            $$->optype = enum_notEqual;

            $$->choice_colume_value_list = $3;

        }


%%

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


