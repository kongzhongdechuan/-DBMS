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


extern YYSTYPE yylval;
