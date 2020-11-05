/* A Bison parser, made by GNU Bison 3.0.4.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015 Free Software Foundation, Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.

   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.0.4"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
#line 1 "my_c.y" /* yacc.c:339  */

#include "y.tab.h"
#include "type.h"
#include <stdio.h>

extern int line_no;
extern int yylex (void);

int current_level = 0;

void yyerror(char *s);

#line 79 "y.tab.c" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif


/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    AUTO_SYM = 258,
    BREAK_SYM = 259,
    CASE_SYM = 260,
    CONTINUE_SYM = 261,
    DEFAULT_SYM = 262,
    DO_SYM = 263,
    ELSE_SYM = 264,
    ENUM_SYM = 265,
    FOR_SYM = 266,
    IF_SYM = 267,
    RETURN_SYM = 268,
    SIZEOF_SYM = 269,
    STATIC_SYM = 270,
    STRUCT_SYM = 271,
    SWITCH_SYM = 272,
    TYPEDEF_SYM = 273,
    UNION_SYM = 274,
    WHILE_SYM = 275,
    PLUSPLUS = 276,
    MINUSMINUS = 277,
    ARROW = 278,
    LSS = 279,
    GTR = 280,
    LEQ = 281,
    GEQ = 282,
    EQL = 283,
    NEQ = 284,
    AMPAMP = 285,
    BARBAR = 286,
    DOTDOTDOT = 287,
    LP = 288,
    RP = 289,
    LB = 290,
    RB = 291,
    LR = 292,
    RR = 293,
    COLON = 294,
    PERIOD = 295,
    COMMA = 296,
    EXCL = 297,
    STAR = 298,
    SLASH = 299,
    PERCENT = 300,
    AMP = 301,
    SEMICOLON = 302,
    PLUS = 303,
    MINUS = 304,
    ASSIGN = 305,
    INTEGER_CONSTANT = 306,
    FLOAT_CONSTANT = 307,
    STRING_LITERAL = 308,
    CHARACTER_CONSTANT = 309,
    IDENTIFIER = 310,
    TYPE_IDENTIFIER = 311
  };
#endif
/* Tokens.  */
#define AUTO_SYM 258
#define BREAK_SYM 259
#define CASE_SYM 260
#define CONTINUE_SYM 261
#define DEFAULT_SYM 262
#define DO_SYM 263
#define ELSE_SYM 264
#define ENUM_SYM 265
#define FOR_SYM 266
#define IF_SYM 267
#define RETURN_SYM 268
#define SIZEOF_SYM 269
#define STATIC_SYM 270
#define STRUCT_SYM 271
#define SWITCH_SYM 272
#define TYPEDEF_SYM 273
#define UNION_SYM 274
#define WHILE_SYM 275
#define PLUSPLUS 276
#define MINUSMINUS 277
#define ARROW 278
#define LSS 279
#define GTR 280
#define LEQ 281
#define GEQ 282
#define EQL 283
#define NEQ 284
#define AMPAMP 285
#define BARBAR 286
#define DOTDOTDOT 287
#define LP 288
#define RP 289
#define LB 290
#define RB 291
#define LR 292
#define RR 293
#define COLON 294
#define PERIOD 295
#define COMMA 296
#define EXCL 297
#define STAR 298
#define SLASH 299
#define PERCENT 300
#define AMP 301
#define SEMICOLON 302
#define PLUS 303
#define MINUS 304
#define ASSIGN 305
#define INTEGER_CONSTANT 306
#define FLOAT_CONSTANT 307
#define STRING_LITERAL 308
#define CHARACTER_CONSTANT 309
#define IDENTIFIER 310
#define TYPE_IDENTIFIER 311

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);



/* Copy the second part of user declarations.  */

#line 239 "y.tab.c" /* yacc.c:358  */

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif


#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   551

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  72
/* YYNRULES -- Number of rules.  */
#define YYNRULES  167
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  285

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
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
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    17,    17,    19,    20,    22,    23,    26,    26,    27,
      27,    30,    32,    33,    34,    35,    37,    38,    39,    41,
      42,    45,    46,    48,    49,    52,    53,    54,    57,    57,
      57,    58,    58,    58,    59,    61,    62,    64,    65,    67,
      69,    70,    72,    75,    75,    76,    76,    77,    79,    80,
      82,    83,    83,    86,    87,    89,    90,    93,    94,    95,
      96,    96,    97,    99,   101,   102,   105,   106,   108,   109,
     111,   112,   114,   115,   117,   118,   119,   121,   122,   123,
     124,   125,   129,   130,   132,   133,   135,   136,   138,   139,
     141,   142,   143,   144,   145,   146,   148,   149,   152,   152,
     154,   155,   158,   159,   162,   163,   164,   167,   168,   169,
     171,   172,   175,   176,   177,   180,   181,   182,   183,   184,
     185,   188,   189,   190,   191,   192,   193,   194,   196,   197,
     199,   200,   203,   204,   205,   206,   207,   208,   209,   210,
     211,   212,   214,   215,   217,   220,   221,   222,   223,   225,
     226,   227,   230,   231,   232,   233,   234,   236,   237,   238,
     241,   242,   244,   245,   248,   250,   252,   253
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "AUTO_SYM", "BREAK_SYM", "CASE_SYM",
  "CONTINUE_SYM", "DEFAULT_SYM", "DO_SYM", "ELSE_SYM", "ENUM_SYM",
  "FOR_SYM", "IF_SYM", "RETURN_SYM", "SIZEOF_SYM", "STATIC_SYM",
  "STRUCT_SYM", "SWITCH_SYM", "TYPEDEF_SYM", "UNION_SYM", "WHILE_SYM",
  "PLUSPLUS", "MINUSMINUS", "ARROW", "LSS", "GTR", "LEQ", "GEQ", "EQL",
  "NEQ", "AMPAMP", "BARBAR", "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR",
  "RR", "COLON", "PERIOD", "COMMA", "EXCL", "STAR", "SLASH", "PERCENT",
  "AMP", "SEMICOLON", "PLUS", "MINUS", "ASSIGN", "INTEGER_CONSTANT",
  "FLOAT_CONSTANT", "STRING_LITERAL", "CHARACTER_CONSTANT", "IDENTIFIER",
  "TYPE_IDENTIFIER", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "@1", "@2", "declaration",
  "declaration_specifiers", "storage_class_specifier",
  "init_declarator_list_opt", "init_declarator_list", "init_declarator",
  "type_specifier", "struct_specifier", "@3", "@4", "@5", "@6",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "struct_declarator_list", "struct_declarator", "enum_specifier", "@7",
  "@8", "enumerator_list", "enumerator", "@9", "declarator", "pointer",
  "direct_declarator", "@10", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement_list_opt", "statement_list", "statement",
  "labeled_statement", "compound_statement", "@11", "declaration_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "expression_opt", "jump_statement", "primary_expression",
  "postfix_expression", "arg_expression_list_opt", "arg_expression_list",
  "unary_expression", "cast_expression", "type_name",
  "multiplicative_expression", "additive_expression",
  "relational_expression", "equality_expression", "logical_and_expression",
  "logical_or_expression", "constant_expression", "expression",
  "assignment_expression", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311
};
# endif

#define YYPACT_NINF -202

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-202)))

#define YYTABLE_NINF -52

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
     332,  -202,   -37,  -202,  -202,  -202,  -202,   -12,    25,  -202,
    -202,    79,   332,  -202,  -202,  -202,   -12,    30,    30,  -202,
      29,  -202,  -202,   -14,    77,    59,    98,    65,  -202,  -202,
    -202,   105,    83,  -202,     0,  -202,  -202,   122,   126,   130,
      77,  -202,   446,   135,   118,  -202,  -202,   -12,   432,   130,
     138,  -202,  -202,  -202,    30,   482,   496,   496,   274,   446,
     446,   446,   446,   446,  -202,  -202,  -202,  -202,  -202,   140,
    -202,   173,   127,  -202,    10,   100,   185,   128,   149,   166,
    -202,  -202,  -202,   118,   150,    31,  -202,  -202,   151,   432,
    -202,  -202,  -202,  -202,   115,    30,     1,   170,  -202,   164,
    -202,   274,  -202,   446,  -202,  -202,    62,   184,   187,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,  -202,  -202,   152,   446,
     446,   167,   446,   446,   446,   446,   446,   446,   446,   446,
     446,   446,   446,   446,   446,   446,    60,   169,  -202,   118,
    -202,    99,   115,   -12,    19,  -202,  -202,   -12,   227,   321,
     446,  -202,    -3,  -202,  -202,    95,  -202,    55,   189,   363,
     106,  -202,   446,  -202,  -202,   190,   186,  -202,   193,  -202,
    -202,  -202,  -202,  -202,    10,    10,   100,   100,   100,   100,
     185,   185,   128,   149,  -202,   446,  -202,  -202,   432,    66,
      82,  -202,  -202,  -202,  -202,   203,   446,   204,   213,   396,
     220,   221,   446,   222,   223,  -202,  -202,   219,   396,  -202,
    -202,  -202,  -202,  -202,  -202,  -202,   211,   225,   228,   229,
      95,    30,   446,  -202,  -202,  -202,  -202,  -202,   446,  -202,
    -202,  -202,  -202,   -12,  -202,  -202,   224,  -202,   396,   241,
     446,   446,   238,  -202,   446,   446,  -202,  -202,  -202,  -202,
    -202,  -202,   232,   231,  -202,  -202,   396,  -202,   235,   239,
     237,  -202,   253,   257,  -202,  -202,  -202,   446,   446,   396,
     396,   396,   260,   250,   263,  -202,  -202,   251,   446,   396,
    -202,   265,  -202,   396,  -202
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    16,    45,    17,    35,    18,    36,     0,    55,    57,
      27,     0,     2,     3,     5,     6,    19,    13,    12,    25,
      31,    26,     9,     0,    54,    47,     0,     0,    56,     1,
       4,     0,    20,    21,    23,    15,    14,    34,     0,     0,
      53,    60,    62,     0,     0,    58,    11,     0,     0,     0,
       0,    32,    98,    10,    64,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   116,   117,   119,   118,   115,     0,
     121,   132,   142,   145,   149,   152,   157,   160,   162,   166,
      63,   164,   165,     0,    50,     0,    48,    22,    23,     0,
      24,    82,     8,    29,     0,     0,    72,     0,    65,    66,
      68,     0,   140,     0,   133,   134,    72,     0,     0,   142,
     137,   136,   135,   139,   138,    59,   126,   127,     0,   128,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    46,     0,
      84,     0,     0,     0,     0,    37,   100,    19,    86,    64,
      62,    70,    74,    71,    73,    75,    61,     0,     0,    64,
      74,   144,     0,   120,   125,     0,   129,   130,     0,   124,
     167,   146,   147,   148,   150,   151,   153,   154,   155,   156,
     158,   159,   161,   163,    44,     0,    49,    83,     0,     0,
       0,    40,    42,    33,    38,     0,     0,     0,     0,     0,
       0,     0,   110,     0,     0,   102,   101,     0,    87,    88,
      90,    91,    92,    93,    94,    95,     0,     0,     0,     0,
      76,    64,    62,    67,    69,   141,   143,   123,     0,   122,
      52,    85,    30,     0,    39,   114,     0,   113,     0,     0,
     110,     0,     0,   111,     0,     0,    99,    89,   103,    79,
      77,    78,     0,     0,   131,    41,     0,    97,     0,     0,
       0,   112,     0,     0,    81,    80,    96,     0,   110,     0,
       0,     0,     0,     0,   104,   106,   107,     0,   110,     0,
     108,     0,   105,     0,   109
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -202,  -202,  -202,   288,  -202,  -202,  -202,   -82,     5,  -202,
    -202,  -202,   254,   -80,  -202,  -202,  -202,  -202,  -202,  -202,
     160,  -129,  -202,    70,  -202,  -202,  -202,   226,   165,  -202,
      -5,    -4,   -20,  -202,  -141,   -53,  -202,  -202,   148,   200,
     -66,  -140,   -81,  -202,  -202,  -202,  -105,  -202,    87,  -202,
    -202,  -202,  -202,  -202,  -201,  -202,  -202,  -202,  -202,  -202,
      58,   -35,   207,    35,    86,    37,   176,   177,  -202,   -38,
     -42,  -112
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,    15,    96,    17,
      31,    32,    33,    18,    19,    50,   142,    38,    94,    20,
     144,   145,   190,   191,    21,    43,    26,    85,    86,   137,
      22,    23,    24,    54,    69,   217,    98,    99,   100,   153,
     154,   155,    90,   141,   207,   208,   209,   210,   211,    95,
     148,   212,   213,   214,   242,   215,    70,    71,   165,   166,
      72,    73,   107,    74,    75,    76,    77,    78,    79,    80,
     216,    82
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      81,    97,    27,    40,    28,    16,    81,   167,   140,   219,
      91,    34,   220,   146,   143,   194,   108,    16,    25,     7,
     220,     7,    35,    36,   110,   111,   112,   113,   114,     2,
     149,     8,   150,     1,   149,     4,   150,    -7,     6,   259,
       2,     9,    88,     9,     8,     3,     4,    81,     5,     6,
      48,    91,     9,   123,   124,   125,     9,   193,     1,   108,
     194,   108,   143,   106,   143,     2,   206,   273,     8,   138,
       3,     4,   139,     5,     6,    10,     2,   281,   168,    29,
     170,   253,     4,   218,    37,     6,    10,   223,   171,   172,
     173,   151,   152,   218,   239,   159,   -43,   150,   184,    45,
     147,   139,   160,   247,   232,     8,   106,   231,    81,   143,
      41,    10,    42,   102,   104,   105,   254,   109,   109,   109,
     109,   109,    10,   233,    47,     2,    53,   226,   221,   234,
     222,     4,    40,   257,     6,    44,    92,   187,   192,   159,
     188,   150,    88,    81,    27,   152,    81,   230,   126,   127,
      91,   266,    46,   147,    81,   160,   132,   133,   236,   -28,
     243,   174,   175,    51,   274,   275,   276,    52,   252,   180,
     181,    10,    83,    84,   282,    93,   115,   122,   284,   134,
      81,   109,   109,   109,   109,   109,   109,   109,   109,   109,
     109,   109,   109,   109,   116,   117,   118,   135,   243,   260,
     -51,    48,   262,   263,   156,   157,   119,   164,   120,   128,
     129,   130,   131,   121,   176,   177,   178,   179,   162,   185,
     109,   163,   169,   225,   227,   272,   243,   228,   192,   229,
       1,   195,   196,   197,   198,   199,   243,     2,   200,   201,
     202,    55,     3,     4,   203,     5,     6,   204,    56,    57,
     235,   237,   238,   240,   241,   244,   245,   246,   248,   249,
      58,   258,   250,   256,    52,   251,   264,   265,   267,    59,
      60,   269,   279,    61,   205,    62,    63,     1,    64,    65,
      66,    67,    68,    10,     2,   261,   268,   270,    55,     3,
       4,   271,     5,     6,   277,    56,    57,   278,   280,   283,
      30,    87,   189,   255,   186,   224,   161,    58,   158,   136,
     182,     0,   183,     0,     0,     0,    59,    60,     0,     0,
      61,     0,    62,    63,     1,    64,    65,    66,    67,    68,
      10,     2,     0,     0,     0,     1,     3,     4,     0,     5,
       6,     0,     2,     0,     0,     0,     0,     3,     4,     0,
       5,     6,     0,     0,   149,     0,   150,     0,     0,     0,
       0,     0,     0,     0,     8,     7,     1,     0,     0,     0,
       0,     0,     0,     2,     0,     8,     9,    10,     3,     4,
       0,     5,     6,     0,     0,     0,     0,     9,    10,     0,
       0,     0,     0,     0,     0,     0,   159,     0,   150,     0,
     195,   196,   197,   198,   199,     0,     8,   200,   201,   202,
      55,     0,     0,   203,     0,     0,   204,    56,    57,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    58,
       0,     0,     0,    52,     0,     0,     0,     0,    59,    60,
       0,     0,    61,   205,    62,    63,    55,    64,    65,    66,
      67,    68,     0,    56,    57,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     0,    58,     0,    56,    57,    89,
       0,     0,     0,     0,    59,    60,     0,     0,    61,    58,
      62,    63,     0,    64,    65,    66,    67,    68,    59,    60,
       0,     0,    61,     0,    62,    63,    55,    64,    65,    66,
      67,    68,     0,    56,    57,     0,     0,     0,     0,     0,
      55,     0,     0,     0,     0,   101,     0,    56,    57,     0,
       0,     0,     0,     0,    59,    60,     0,     0,    61,   103,
      62,    63,     0,    64,    65,    66,    67,    68,    59,    60,
       0,     0,    61,     0,    62,    63,     0,    64,    65,    66,
      67,    68
};

static const yytype_int16 yycheck[] =
{
      42,    54,     7,    23,     8,     0,    48,   119,    89,   150,
      48,    16,   152,    95,    94,   144,    58,    12,    55,    33,
     160,    33,    17,    18,    59,    60,    61,    62,    63,    10,
      33,    43,    35,     3,    33,    16,    35,    37,    19,   240,
      10,    55,    47,    55,    43,    15,    16,    89,    18,    19,
      50,    89,    55,    43,    44,    45,    55,    38,     3,   101,
     189,   103,   142,    58,   144,    10,   148,   268,    43,    38,
      15,    16,    41,    18,    19,    56,    10,   278,   120,     0,
     122,   222,    16,   149,    55,    19,    56,    32,   123,   124,
     125,    96,    96,   159,   199,    33,    37,    35,    38,    34,
      95,    41,   106,   208,    38,    43,   101,   188,   150,   189,
      33,    56,    35,    55,    56,    57,   228,    59,    60,    61,
      62,    63,    56,    41,    41,    10,    39,   162,    33,    47,
      35,    16,   152,   238,    19,    37,    49,    38,   143,    33,
      41,    35,   147,   185,   149,   149,   188,   185,    48,    49,
     188,   256,    47,   148,   196,   159,    28,    29,   196,    37,
     202,   126,   127,    37,   269,   270,   271,    37,   221,   132,
     133,    56,    37,    55,   279,    37,    36,    50,   283,    30,
     222,   123,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,    21,    22,    23,    31,   240,   241,
      50,    50,   244,   245,    34,    41,    33,    55,    35,    24,
      25,    26,    27,    40,   128,   129,   130,   131,    34,    50,
     162,    34,    55,    34,    34,   267,   268,    41,   233,    36,
       3,     4,     5,     6,     7,     8,   278,    10,    11,    12,
      13,    14,    15,    16,    17,    18,    19,    20,    21,    22,
      47,    47,    39,    33,    33,    33,    33,    38,    47,    34,
      33,    20,    34,    39,    37,    36,    34,    36,    33,    42,
      43,    34,     9,    46,    47,    48,    49,     3,    51,    52,
      53,    54,    55,    56,    10,    47,    47,    34,    14,    15,
      16,    34,    18,    19,    34,    21,    22,    47,    47,    34,
      12,    47,   142,   233,   139,   157,   106,    33,   101,    83,
     134,    -1,   135,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    -1,    48,    49,     3,    51,    52,    53,    54,    55,
      56,    10,    -1,    -1,    -1,     3,    15,    16,    -1,    18,
      19,    -1,    10,    -1,    -1,    -1,    -1,    15,    16,    -1,
      18,    19,    -1,    -1,    33,    -1,    35,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    43,    33,     3,    -1,    -1,    -1,
      -1,    -1,    -1,    10,    -1,    43,    55,    56,    15,    16,
      -1,    18,    19,    -1,    -1,    -1,    -1,    55,    56,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    33,    -1,    35,    -1,
       4,     5,     6,     7,     8,    -1,    43,    11,    12,    13,
      14,    -1,    -1,    17,    -1,    -1,    20,    21,    22,    56,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    33,
      -1,    -1,    -1,    37,    -1,    -1,    -1,    -1,    42,    43,
      -1,    -1,    46,    47,    48,    49,    14,    51,    52,    53,
      54,    55,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    33,    -1,    21,    22,    37,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    33,
      48,    49,    -1,    51,    52,    53,    54,    55,    42,    43,
      -1,    -1,    46,    -1,    48,    49,    14,    51,    52,    53,
      54,    55,    -1,    21,    22,    -1,    -1,    -1,    -1,    -1,
      14,    -1,    -1,    -1,    -1,    33,    -1,    21,    22,    -1,
      -1,    -1,    -1,    -1,    42,    43,    -1,    -1,    46,    33,
      48,    49,    -1,    51,    52,    53,    54,    55,    42,    43,
      -1,    -1,    46,    -1,    48,    49,    -1,    51,    52,    53,
      54,    55
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    10,    15,    16,    18,    19,    33,    43,    55,
      56,    58,    59,    60,    61,    64,    65,    66,    70,    71,
      76,    81,    87,    88,    89,    55,    83,    87,    88,     0,
      60,    67,    68,    69,    87,    65,    65,    55,    74,    63,
      89,    33,    35,    82,    37,    34,    47,    41,    50,    62,
      72,    37,    37,   105,    90,    14,    21,    22,    33,    42,
      43,    46,    48,    49,    51,    52,    53,    54,    55,    91,
     113,   114,   117,   118,   120,   121,   122,   123,   124,   125,
     126,   127,   128,    37,    55,    84,    85,    69,    87,    37,
      99,   126,   105,    37,    75,   106,    65,    92,    93,    94,
      95,    33,   117,    33,   117,   117,    65,   119,   127,   117,
     118,   118,   118,   118,   118,    36,    21,    22,    23,    33,
      35,    40,    50,    43,    44,    45,    48,    49,    24,    25,
      26,    27,    28,    29,    30,    31,    84,    86,    38,    41,
      99,   100,    73,    70,    77,    78,    64,    65,   107,    33,
      35,    87,    88,    96,    97,    98,    34,    41,   119,    33,
      88,    96,    34,    34,    55,   115,   116,   128,   127,    55,
     127,   118,   118,   118,   120,   120,   121,   121,   121,   121,
     122,   122,   123,   124,    38,    50,    85,    38,    41,    77,
      79,    80,    87,    38,    78,     4,     5,     6,     7,     8,
      11,    12,    13,    17,    20,    47,    64,   101,   102,   103,
     104,   105,   108,   109,   110,   112,   127,    92,    97,    91,
      98,    33,    35,    32,    95,    34,   118,    34,    41,    36,
     126,    99,    38,    41,    47,    47,   126,    47,    39,   103,
      33,    33,   111,   127,    33,    33,    38,   103,    47,    34,
      34,    36,    92,    91,   128,    80,    39,   103,    20,   111,
     127,    47,   127,   127,    34,    36,   103,    33,    47,    34,
      34,    34,   127,   111,   103,   103,   103,    34,    47,     9,
      47,   111,   103,    34,   103
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    62,    61,    63,
      61,    64,    65,    65,    65,    65,    66,    66,    66,    67,
      67,    68,    68,    69,    69,    70,    70,    70,    72,    73,
      71,    74,    75,    71,    71,    76,    76,    77,    77,    78,
      79,    79,    80,    82,    81,    83,    81,    81,    84,    84,
      85,    86,    85,    87,    87,    88,    88,    89,    89,    89,
      90,    89,    91,    91,    92,    92,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    97,    98,    98,    98,
      98,    98,    99,    99,   100,   100,   101,   101,   102,   102,
     103,   103,   103,   103,   103,   103,   104,   104,   106,   105,
     107,   107,   108,   108,   109,   109,   109,   110,   110,   110,
     111,   111,   112,   112,   112,   113,   113,   113,   113,   113,
     113,   114,   114,   114,   114,   114,   114,   114,   115,   115,
     116,   116,   117,   117,   117,   117,   117,   117,   117,   117,
     117,   117,   118,   118,   119,   120,   120,   120,   120,   121,
     121,   121,   122,   122,   122,   122,   122,   123,   123,   123,
     124,   124,   125,   125,   126,   127,   128,   128
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     3,     1,     1,     2,     2,     1,     1,     1,     0,
       1,     1,     3,     1,     3,     1,     1,     1,     0,     0,
       7,     0,     0,     6,     2,     1,     1,     1,     2,     3,
       1,     3,     1,     0,     6,     0,     5,     2,     1,     3,
       1,     0,     4,     2,     1,     1,     2,     1,     3,     4,
       0,     5,     0,     1,     0,     1,     1,     3,     1,     3,
       2,     2,     0,     1,     1,     1,     2,     3,     3,     3,
       4,     4,     1,     3,     1,     3,     0,     1,     1,     2,
       1,     1,     1,     1,     1,     1,     4,     3,     0,     5,
       1,     2,     1,     2,     5,     7,     5,     5,     7,     9,
       0,     1,     3,     2,     2,     1,     1,     1,     1,     1,
       3,     1,     4,     4,     3,     3,     2,     2,     0,     1,
       1,     3,     1,     2,     2,     2,     2,     2,     2,     2,
       2,     4,     1,     4,     2,     1,     3,     3,     3,     1,
       3,     3,     1,     3,     3,     3,     3,     1,     3,     3,
       1,     3,     1,     3,     1,     1,     1,     3
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif


#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
static YYSIZE_T
yystrlen (const char *yystr)
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
static char *
yystpcpy (char *yydest, const char *yysrc)
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
      char const *yyp = yystr;

      for (;;)
        switch (*++yyp)
          {
          case '\'':
          case ',':
            goto do_not_strip_quotes;

          case '\\':
            if (*++yyp != '\\')
              goto do_not_strip_quotes;
            /* Fall through.  */
          default:
            if (yyres)
              yyres[yyn] = *yyp;
            yyn++;
            break;

          case '"':
            if (yyres)
              yyres[yyn] = '\0';
            return yyn;
          }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        YYSTYPE *yyvs1 = yyvs;
        yytype_int16 *yyss1 = yyss;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * sizeof (*yyssp),
                    &yyvs1, yysize * sizeof (*yyvsp),
                    &yystacksize);

        yyss = yyss1;
        yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yytype_int16 *yyss1 = yyss;
        union yyalloc *yyptr =
          (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
                  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yytable_value_is_error (yyn))
        goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:
#line 17 "my_c.y" /* yacc.c:1646  */
    {root = makeNode(N_PROGRAM, NIL, (yyvsp[0]), NIL); checkForwardReference();}
#line 1600 "y.tab.c" /* yacc.c:1646  */
    break;

  case 3:
#line 19 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1606 "y.tab.c" /* yacc.c:1646  */
    break;

  case 4:
#line 20 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-1]), (yyvsp[0]));}
#line 1612 "y.tab.c" /* yacc.c:1646  */
    break;

  case 5:
#line 22 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1618 "y.tab.c" /* yacc.c:1646  */
    break;

  case 6:
#line 23 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1624 "y.tab.c" /* yacc.c:1646  */
    break;

  case 7:
#line 26 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setFunctionDeclaratorSpecifier((yyvsp[0]), (yyvsp[-1]));}
#line 1630 "y.tab.c" /* yacc.c:1646  */
    break;

  case 8:
#line 26 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setFunctionDeclaratorBody((yyvsp[-1]), (yyvsp[0]));}
#line 1636 "y.tab.c" /* yacc.c:1646  */
    break;

  case 9:
#line 27 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setFunctionDeclaratorSpecifier((yyvsp[0]), makeSpecifier(int_type, 0));}
#line 1642 "y.tab.c" /* yacc.c:1646  */
    break;

  case 10:
#line 27 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setFunctionDeclaratorBody((yyvsp[-1]), (yyvsp[0]));}
#line 1648 "y.tab.c" /* yacc.c:1646  */
    break;

  case 11:
#line 30 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorListSpecifier((yyvsp[-1]), (yyvsp[-2]));}
#line 1654 "y.tab.c" /* yacc.c:1646  */
    break;

  case 12:
#line 32 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeSpecifier((yyvsp[0]), 0);}
#line 1660 "y.tab.c" /* yacc.c:1646  */
    break;

  case 13:
#line 33 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeSpecifier(0, (yyvsp[0]));}
#line 1666 "y.tab.c" /* yacc.c:1646  */
    break;

  case 14:
#line 34 "my_c.y" /* yacc.c:1646  */
    {(yyval) = updateSpecifier((yyvsp[0]), (yyvsp[-1]), 0);}
#line 1672 "y.tab.c" /* yacc.c:1646  */
    break;

  case 15:
#line 35 "my_c.y" /* yacc.c:1646  */
    {(yyval) = updateSpecifier((yyvsp[0]), 0, (yyvsp[-1]));}
#line 1678 "y.tab.c" /* yacc.c:1646  */
    break;

  case 16:
#line 37 "my_c.y" /* yacc.c:1646  */
    {(yyval) = S_AUTO;}
#line 1684 "y.tab.c" /* yacc.c:1646  */
    break;

  case 17:
#line 38 "my_c.y" /* yacc.c:1646  */
    {(yyval) = S_STATIC;}
#line 1690 "y.tab.c" /* yacc.c:1646  */
    break;

  case 18:
#line 39 "my_c.y" /* yacc.c:1646  */
    {(yyval) = S_TYPEDEF;}
#line 1696 "y.tab.c" /* yacc.c:1646  */
    break;

  case 19:
#line 41 "my_c.y" /* yacc.c:1646  */
    {(yyval) = NIL;}
#line 1702 "y.tab.c" /* yacc.c:1646  */
    break;

  case 20:
#line 42 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1708 "y.tab.c" /* yacc.c:1646  */
    break;

  case 21:
#line 45 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1714 "y.tab.c" /* yacc.c:1646  */
    break;

  case 22:
#line 46 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-2]), (yyvsp[0]));}
#line 1720 "y.tab.c" /* yacc.c:1646  */
    break;

  case 23:
#line 48 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1726 "y.tab.c" /* yacc.c:1646  */
    break;

  case 24:
#line 49 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorInit((yyvsp[-2]), (yyvsp[0]));}
#line 1732 "y.tab.c" /* yacc.c:1646  */
    break;

  case 25:
#line 52 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1738 "y.tab.c" /* yacc.c:1646  */
    break;

  case 26:
#line 53 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1744 "y.tab.c" /* yacc.c:1646  */
    break;

  case 27:
#line 54 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1750 "y.tab.c" /* yacc.c:1646  */
    break;

  case 28:
#line 57 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeStructOrEnumIdentifier((yyvsp[-1]), (yyvsp[0]), ID_STRUCT);}
#line 1756 "y.tab.c" /* yacc.c:1646  */
    break;

  case 29:
#line 57 "my_c.y" /* yacc.c:1646  */
    {(yyval) = current_id; ++current_level;}
#line 1762 "y.tab.c" /* yacc.c:1646  */
    break;

  case 30:
#line 57 "my_c.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval) = setTypeField((yyvsp[-4]), (yyvsp[-1])); --current_level; current_id = (yyvsp[-2]);}
#line 1768 "y.tab.c" /* yacc.c:1646  */
    break;

  case 31:
#line 58 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeType((yyvsp[0]));}
#line 1774 "y.tab.c" /* yacc.c:1646  */
    break;

  case 32:
#line 58 "my_c.y" /* yacc.c:1646  */
    {(yyval) = current_id; ++current_level;}
#line 1780 "y.tab.c" /* yacc.c:1646  */
    break;

  case 33:
#line 58 "my_c.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval) = setTypeField((yyvsp[-4]), (yyvsp[-1])); --current_level; current_id = (yyvsp[-2]);}
#line 1786 "y.tab.c" /* yacc.c:1646  */
    break;

  case 34:
#line 59 "my_c.y" /* yacc.c:1646  */
    {(yyval) = getTypeOfStructOrEnumRefIdentifier((yyvsp[-1]), (yyvsp[0]), ID_STRUCT);}
#line 1792 "y.tab.c" /* yacc.c:1646  */
    break;

  case 35:
#line 61 "my_c.y" /* yacc.c:1646  */
    {(yyval) = T_STRUCT;}
#line 1798 "y.tab.c" /* yacc.c:1646  */
    break;

  case 36:
#line 62 "my_c.y" /* yacc.c:1646  */
    {(yyval) = T_UNION;}
#line 1804 "y.tab.c" /* yacc.c:1646  */
    break;

  case 37:
#line 64 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1810 "y.tab.c" /* yacc.c:1646  */
    break;

  case 38:
#line 65 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-1]), (yyvsp[0]));}
#line 1816 "y.tab.c" /* yacc.c:1646  */
    break;

  case 39:
#line 67 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setStructDeclaratorListSpecifier((yyvsp[-1]), (yyvsp[-2]));}
#line 1822 "y.tab.c" /* yacc.c:1646  */
    break;

  case 40:
#line 69 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1828 "y.tab.c" /* yacc.c:1646  */
    break;

  case 41:
#line 70 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-2]), (yyvsp[0]));}
#line 1834 "y.tab.c" /* yacc.c:1646  */
    break;

  case 42:
#line 72 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1840 "y.tab.c" /* yacc.c:1646  */
    break;

  case 43:
#line 75 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeStructOrEnumIdentifier(T_ENUM, (yyvsp[0]), ID_ENUM);}
#line 1846 "y.tab.c" /* yacc.c:1646  */
    break;

  case 44:
#line 75 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeField((yyvsp[-3]), (yyvsp[-1]));}
#line 1852 "y.tab.c" /* yacc.c:1646  */
    break;

  case 45:
#line 76 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeType(T_ENUM);}
#line 1858 "y.tab.c" /* yacc.c:1646  */
    break;

  case 46:
#line 76 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeField((yyvsp[-3]), (yyvsp[-1]));}
#line 1864 "y.tab.c" /* yacc.c:1646  */
    break;

  case 47:
#line 77 "my_c.y" /* yacc.c:1646  */
    {(yyval) = getTypeOfStructOrEnumRefIdentifier(T_ENUM, (yyvsp[0]), ID_ENUM);}
#line 1870 "y.tab.c" /* yacc.c:1646  */
    break;

  case 48:
#line 79 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1876 "y.tab.c" /* yacc.c:1646  */
    break;

  case 49:
#line 80 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-2]), (yyvsp[0]));}
#line 1882 "y.tab.c" /* yacc.c:1646  */
    break;

  case 50:
#line 82 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorKind(makeIdentifier((yyvsp[0])), ID_ENUM_LITERAL);}
#line 1888 "y.tab.c" /* yacc.c:1646  */
    break;

  case 51:
#line 83 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorKind(makeIdentifier((yyvsp[0])), ID_ENUM_LITERAL);}
#line 1894 "y.tab.c" /* yacc.c:1646  */
    break;

  case 52:
#line 83 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorInit((yyvsp[-2]), (yyvsp[0]));}
#line 1900 "y.tab.c" /* yacc.c:1646  */
    break;

  case 53:
#line 86 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorElementType((yyvsp[0]), (yyvsp[-1]));}
#line 1906 "y.tab.c" /* yacc.c:1646  */
    break;

  case 54:
#line 87 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1912 "y.tab.c" /* yacc.c:1646  */
    break;

  case 55:
#line 89 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeType(T_POINTER);}
#line 1918 "y.tab.c" /* yacc.c:1646  */
    break;

  case 56:
#line 90 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeElementType((yyvsp[0]), makeType(T_POINTER));}
#line 1924 "y.tab.c" /* yacc.c:1646  */
    break;

  case 57:
#line 93 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeIdentifier((yyvsp[0]));}
#line 1930 "y.tab.c" /* yacc.c:1646  */
    break;

  case 58:
#line 94 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 1936 "y.tab.c" /* yacc.c:1646  */
    break;

  case 59:
#line 95 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setDeclaratorElementType((yyvsp[-3]), setTypeExpr(makeType(T_ARRAY), (yyvsp[-1])));}
#line 1942 "y.tab.c" /* yacc.c:1646  */
    break;

  case 60:
#line 96 "my_c.y" /* yacc.c:1646  */
    {(yyval) = current_id; ++current_level;}
#line 1948 "y.tab.c" /* yacc.c:1646  */
    break;

  case 61:
#line 96 "my_c.y" /* yacc.c:1646  */
    {checkForwardReference(); --current_level; current_id = (yyvsp[-2]); (yyval) = setDeclaratorElementType((yyvsp[-4]), setTypeField(makeType(T_FUNC), (yyvsp[-1])));}
#line 1954 "y.tab.c" /* yacc.c:1646  */
    break;

  case 64:
#line 101 "my_c.y" /* yacc.c:1646  */
    {(yyval) = NIL;}
#line 1960 "y.tab.c" /* yacc.c:1646  */
    break;

  case 65:
#line 102 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1966 "y.tab.c" /* yacc.c:1646  */
    break;

  case 66:
#line 105 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1972 "y.tab.c" /* yacc.c:1646  */
    break;

  case 67:
#line 106 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-2]), setDeclaratorKind(makeDummyIdentifier(), ID_PARM));}
#line 1978 "y.tab.c" /* yacc.c:1646  */
    break;

  case 68:
#line 108 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 1984 "y.tab.c" /* yacc.c:1646  */
    break;

  case 69:
#line 109 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-2]), (yyvsp[0]));}
#line 1990 "y.tab.c" /* yacc.c:1646  */
    break;

  case 70:
#line 111 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setParameterDeclaratorSpecifier((yyvsp[0]), (yyvsp[-1]));}
#line 1996 "y.tab.c" /* yacc.c:1646  */
    break;

  case 71:
#line 112 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setParameterDeclaratorSpecifier(setDeclaratorType(makeDummyIdentifier(), (yyvsp[0])), (yyvsp[-1]));}
#line 2002 "y.tab.c" /* yacc.c:1646  */
    break;

  case 72:
#line 114 "my_c.y" /* yacc.c:1646  */
    {(yyval) = NIL}
#line 2008 "y.tab.c" /* yacc.c:1646  */
    break;

  case 73:
#line 115 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0])}
#line 2014 "y.tab.c" /* yacc.c:1646  */
    break;

  case 74:
#line 117 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeType(T_POINTER);}
#line 2020 "y.tab.c" /* yacc.c:1646  */
    break;

  case 75:
#line 118 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2026 "y.tab.c" /* yacc.c:1646  */
    break;

  case 76:
#line 119 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeElementType((yyvsp[0]), makeType(T_POINTER));}
#line 2032 "y.tab.c" /* yacc.c:1646  */
    break;

  case 77:
#line 121 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2038 "y.tab.c" /* yacc.c:1646  */
    break;

  case 78:
#line 122 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeExpr(makeType(T_ARRAY), (yyvsp[-1]));}
#line 2044 "y.tab.c" /* yacc.c:1646  */
    break;

  case 79:
#line 123 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeExpr(makeType(T_FUNC), (yyvsp[-1]));}
#line 2050 "y.tab.c" /* yacc.c:1646  */
    break;

  case 80:
#line 124 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeElementType((yyvsp[-3]), setTypeExpr(makeType(T_ARRAY), (yyvsp[-1])));}
#line 2056 "y.tab.c" /* yacc.c:1646  */
    break;

  case 81:
#line 125 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeElementType((yyvsp[-3]), setTypeExpr(makeType(T_FUNC), (yyvsp[-1])));}
#line 2062 "y.tab.c" /* yacc.c:1646  */
    break;

  case 82:
#line 129 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_INIT_LIST_ONE, 0, (yyvsp[0]), 0);}
#line 2068 "y.tab.c" /* yacc.c:1646  */
    break;

  case 83:
#line 130 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2074 "y.tab.c" /* yacc.c:1646  */
    break;

  case 84:
#line 132 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_INIT_LIST, (yyvsp[0]), 0, makeNode(N_INIT_LIST_NIL, 0, 0, 0));}
#line 2080 "y.tab.c" /* yacc.c:1646  */
    break;

  case 85:
#line 133 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNodeList(N_INIT_LIST, (yyvsp[-2]), (yyvsp[0]));}
#line 2086 "y.tab.c" /* yacc.c:1646  */
    break;

  case 86:
#line 135 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL);}
#line 2092 "y.tab.c" /* yacc.c:1646  */
    break;

  case 87:
#line 136 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2098 "y.tab.c" /* yacc.c:1646  */
    break;

  case 88:
#line 138 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_LIST, (yyvsp[0]), NIL, makeNode(N_STMT_LIST_NIL, NIL, NIL, NIL));}
#line 2104 "y.tab.c" /* yacc.c:1646  */
    break;

  case 89:
#line 139 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNodeList(N_STMT_LIST, (yyvsp[-1]), (yyvsp[0]));}
#line 2110 "y.tab.c" /* yacc.c:1646  */
    break;

  case 90:
#line 141 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2116 "y.tab.c" /* yacc.c:1646  */
    break;

  case 91:
#line 142 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2122 "y.tab.c" /* yacc.c:1646  */
    break;

  case 92:
#line 143 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2128 "y.tab.c" /* yacc.c:1646  */
    break;

  case 93:
#line 144 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2134 "y.tab.c" /* yacc.c:1646  */
    break;

  case 94:
#line 145 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2140 "y.tab.c" /* yacc.c:1646  */
    break;

  case 95:
#line 146 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2146 "y.tab.c" /* yacc.c:1646  */
    break;

  case 96:
#line 148 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_LABLE_CASE, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2152 "y.tab.c" /* yacc.c:1646  */
    break;

  case 97:
#line 149 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_LABLE_DEFAULT, NIL, (yyvsp[0]), NIL);}
#line 2158 "y.tab.c" /* yacc.c:1646  */
    break;

  case 98:
#line 152 "my_c.y" /* yacc.c:1646  */
    {(yyval) = current_id; ++current_level;}
#line 2164 "y.tab.c" /* yacc.c:1646  */
    break;

  case 99:
#line 152 "my_c.y" /* yacc.c:1646  */
    {checkForwardReference(); (yyval) = makeNode(N_STMT_COMPOUND, (yyvsp[-2]), NIL, (yyvsp[-1])); --current_level; current_id = (yyvsp[-3]);}
#line 2170 "y.tab.c" /* yacc.c:1646  */
    break;

  case 100:
#line 154 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2176 "y.tab.c" /* yacc.c:1646  */
    break;

  case 101:
#line 155 "my_c.y" /* yacc.c:1646  */
    {(yyval) = linkDeclaratorList((yyvsp[-1]), (yyvsp[0]));}
#line 2182 "y.tab.c" /* yacc.c:1646  */
    break;

  case 102:
#line 158 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_EMPTY, NIL, NIL, NIL);}
#line 2188 "y.tab.c" /* yacc.c:1646  */
    break;

  case 103:
#line 159 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNODE(N_STMT_EXPRESSION, NIL, (yyvsp[-1]), NIL);}
#line 2194 "y.tab.c" /* yacc.c:1646  */
    break;

  case 104:
#line 162 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_IF, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2200 "y.tab.c" /* yacc.c:1646  */
    break;

  case 105:
#line 163 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_IF_ELSE, (yyvsp[-4]), (yyvsp[-2]), (yyvsp[0]));}
#line 2206 "y.tab.c" /* yacc.c:1646  */
    break;

  case 106:
#line 164 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_SWITCH, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2212 "y.tab.c" /* yacc.c:1646  */
    break;

  case 107:
#line 167 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_WHILE, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2218 "y.tab.c" /* yacc.c:1646  */
    break;

  case 108:
#line 168 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_DO, (yyvsp[-5]), NIL, (yyvsp[-2]));}
#line 2224 "y.tab.c" /* yacc.c:1646  */
    break;

  case 109:
#line 169 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_FOR, (yyvsp[-6]), NIL, (yyvsp[-4]));}
#line 2230 "y.tab.c" /* yacc.c:1646  */
    break;

  case 110:
#line 171 "my_c.y" /* yacc.c:1646  */
    {(yyval) = NIL;}
#line 2236 "y.tab.c" /* yacc.c:1646  */
    break;

  case 111:
#line 172 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2242 "y.tab.c" /* yacc.c:1646  */
    break;

  case 112:
#line 175 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_RETURN, NIL, (yyvsp[-1]), NIL);}
#line 2248 "y.tab.c" /* yacc.c:1646  */
    break;

  case 113:
#line 176 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_CONTINUE, NIL, NIL, NIL);}
#line 2254 "y.tab.c" /* yacc.c:1646  */
    break;

  case 114:
#line 177 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_STMT_BREAK, NIL, NIL, NIL);}
#line 2260 "y.tab.c" /* yacc.c:1646  */
    break;

  case 115:
#line 180 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_IDENT, NIL, getIdentifierDeclared((yyvsp[0])), NIL);}
#line 2266 "y.tab.c" /* yacc.c:1646  */
    break;

  case 116:
#line 181 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_INT_CONST, NIL, (yyvsp[0]), NIL);}
#line 2272 "y.tab.c" /* yacc.c:1646  */
    break;

  case 117:
#line 182 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_FLOAT_CONST, NIL, (yyvsp[0]), NIL);}
#line 2278 "y.tab.c" /* yacc.c:1646  */
    break;

  case 118:
#line 183 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_CHAR_CONST, NIL, (yyvsp[0]), NIL);}
#line 2284 "y.tab.c" /* yacc.c:1646  */
    break;

  case 119:
#line 184 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_STRING_LITERAL, NIL, (yyvsp[0]), NIL);}
#line 2290 "y.tab.c" /* yacc.c:1646  */
    break;

  case 120:
#line 185 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[-1]);}
#line 2296 "y.tab.c" /* yacc.c:1646  */
    break;

  case 121:
#line 188 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2302 "y.tab.c" /* yacc.c:1646  */
    break;

  case 122:
#line 189 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_ARRAY, (yyvsp[-3]), NIL, (yyvsp[-1]));}
#line 2308 "y.tab.c" /* yacc.c:1646  */
    break;

  case 123:
#line 190 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_FUNCTION_CALL, (yyvsp[-3]), NIL, (yyvsp[-1]));}
#line 2314 "y.tab.c" /* yacc.c:1646  */
    break;

  case 124:
#line 191 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_STRUCT, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2320 "y.tab.c" /* yacc.c:1646  */
    break;

  case 125:
#line 192 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_ARROW, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2326 "y.tab.c" /* yacc.c:1646  */
    break;

  case 126:
#line 193 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_POST_INC, NIL, (yyvsp[-1]), NIL);}
#line 2332 "y.tab.c" /* yacc.c:1646  */
    break;

  case 127:
#line 194 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_POST_DEC, NIL, (yyvsp[-1]), NIL);}
#line 2338 "y.tab.c" /* yacc.c:1646  */
    break;

  case 128:
#line 196 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL);}
#line 2344 "y.tab.c" /* yacc.c:1646  */
    break;

  case 129:
#line 197 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2350 "y.tab.c" /* yacc.c:1646  */
    break;

  case 130:
#line 199 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_ARG_LIST, (yyvsp[0]), NIL, makeNode(N_ARG_LIST_NIL, NIL, NIL, NIL));}
#line 2356 "y.tab.c" /* yacc.c:1646  */
    break;

  case 131:
#line 200 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNodeList(N_ARG_LIST, (yyvsp[-2]), (yyvsp[0]));}
#line 2362 "y.tab.c" /* yacc.c:1646  */
    break;

  case 132:
#line 203 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2368 "y.tab.c" /* yacc.c:1646  */
    break;

  case 133:
#line 204 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_PRE_INC, NIL, (yyvsp[0]), NIL);}
#line 2374 "y.tab.c" /* yacc.c:1646  */
    break;

  case 134:
#line 205 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_PRE_DEC, NIL, (yyvsp[0]), NIL);}
#line 2380 "y.tab.c" /* yacc.c:1646  */
    break;

  case 135:
#line 206 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_AMP, NIL, (yyvsp[0]), NIL);}
#line 2386 "y.tab.c" /* yacc.c:1646  */
    break;

  case 136:
#line 207 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_STAR, NIL, (yyvsp[0]), NIL);}
#line 2392 "y.tab.c" /* yacc.c:1646  */
    break;

  case 137:
#line 208 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_NOT, NIL, (yyvsp[0]), NIL);}
#line 2398 "y.tab.c" /* yacc.c:1646  */
    break;

  case 138:
#line 209 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_MINUS, NIL, (yyvsp[0]), NIL);}
#line 2404 "y.tab.c" /* yacc.c:1646  */
    break;

  case 139:
#line 210 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_PLUS, NIL, (yyvsp[0]), NIL);}
#line 2410 "y.tab.c" /* yacc.c:1646  */
    break;

  case 140:
#line 211 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_SIZE_EXP, NIL, (yyvsp[0]), NIL);}
#line 2416 "y.tab.c" /* yacc.c:1646  */
    break;

  case 141:
#line 212 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_SIZE_TYPE, NIL, (yyvsp[-1]), NIL);}
#line 2422 "y.tab.c" /* yacc.c:1646  */
    break;

  case 142:
#line 214 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2428 "y.tab.c" /* yacc.c:1646  */
    break;

  case 143:
#line 215 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_CAST, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2434 "y.tab.c" /* yacc.c:1646  */
    break;

  case 144:
#line 217 "my_c.y" /* yacc.c:1646  */
    {(yyval) = setTypeNameSpecifier((yyvsp[0]), (yyvsp[-1]));}
#line 2440 "y.tab.c" /* yacc.c:1646  */
    break;

  case 145:
#line 220 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2446 "y.tab.c" /* yacc.c:1646  */
    break;

  case 146:
#line 221 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_MUL, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2452 "y.tab.c" /* yacc.c:1646  */
    break;

  case 147:
#line 222 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_DIV, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2458 "y.tab.c" /* yacc.c:1646  */
    break;

  case 148:
#line 223 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_MOD, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2464 "y.tab.c" /* yacc.c:1646  */
    break;

  case 149:
#line 225 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2470 "y.tab.c" /* yacc.c:1646  */
    break;

  case 150:
#line 226 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_ADD, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2476 "y.tab.c" /* yacc.c:1646  */
    break;

  case 151:
#line 227 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_SUB, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2482 "y.tab.c" /* yacc.c:1646  */
    break;

  case 152:
#line 230 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2488 "y.tab.c" /* yacc.c:1646  */
    break;

  case 153:
#line 231 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_LSS, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2494 "y.tab.c" /* yacc.c:1646  */
    break;

  case 154:
#line 232 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_GTR, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2500 "y.tab.c" /* yacc.c:1646  */
    break;

  case 155:
#line 233 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_LEQ, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2506 "y.tab.c" /* yacc.c:1646  */
    break;

  case 156:
#line 234 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_GEQ, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2512 "y.tab.c" /* yacc.c:1646  */
    break;

  case 157:
#line 236 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2518 "y.tab.c" /* yacc.c:1646  */
    break;

  case 158:
#line 237 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_EQL, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2524 "y.tab.c" /* yacc.c:1646  */
    break;

  case 159:
#line 238 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_NEQ, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2530 "y.tab.c" /* yacc.c:1646  */
    break;

  case 160:
#line 241 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2536 "y.tab.c" /* yacc.c:1646  */
    break;

  case 161:
#line 242 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_AND, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2542 "y.tab.c" /* yacc.c:1646  */
    break;

  case 162:
#line 244 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2548 "y.tab.c" /* yacc.c:1646  */
    break;

  case 163:
#line 245 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_OR, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2554 "y.tab.c" /* yacc.c:1646  */
    break;

  case 164:
#line 248 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2560 "y.tab.c" /* yacc.c:1646  */
    break;

  case 165:
#line 250 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2566 "y.tab.c" /* yacc.c:1646  */
    break;

  case 166:
#line 252 "my_c.y" /* yacc.c:1646  */
    {(yyval) = (yyvsp[0]);}
#line 2572 "y.tab.c" /* yacc.c:1646  */
    break;

  case 167:
#line 253 "my_c.y" /* yacc.c:1646  */
    {(yyval) = makeNode(N_EXP_ASSIGN, (yyvsp[-2]), NIL, (yyvsp[0]));}
#line 2578 "y.tab.c" /* yacc.c:1646  */
    break;


#line 2582 "y.tab.c" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }



  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
         error, discard it.  */

      if (yychar <= YYEOF)
        {
          /* Return failure if at end of input.  */
          if (yychar == YYEOF)
            YYABORT;
        }
      else
        {
          yydestruct ("Error: discarding",
                      yytoken, &yylval);
          yychar = YYEMPTY;
        }
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  /* Do not reclaim the symbols of the rule whose action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYTERROR;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
            {
              yyn = yytable[yyn];
              if (0 < yyn)
                break;
            }
        }

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
        YYABORT;


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined yyoverflow || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[*yyssp], yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  return yyresult;
}
#line 255 "my_c.y" /* yacc.c:1906  */

extern char *yytext;
void yyerror(char *s) { printf("line %d %s near %s \n", line_no, s, yytext); }

void initialize() {
	// primitive data types
	int_type=setTypeAndKindOfDeclarator(
	makeType(T_ENUM),ID_TYPE,makeIdentifier("int"));
	float_type=setTypeAndKindOfDeclarator(
	makeType(T_ENUM),ID_TYPE,makeIdentifier("float"));
	char_type= setTypeAndKindOfDeclarator(
	makeType(T_ENUM),ID_TYPE,makeIdentifier("char"));
	void_type=setTypeAndKindOfDeclarator(
	makeType(T_VOID),ID_TYPE,makeIdentifier("void"));
	string_type=setTypeElementType(makeType(T_POINTER),char_type);
	int_type->size=4; int_type->check=TRUE;
	float_type->size=4; float_type->check=TRUE;
	char_type->size=1; char_type->check=TRUE;
	void_type->size=0; void_type->check=TRUE;
	string_type->size=4; string_type->check=TRUE;
	// printf(char *, ...) library function
	setDeclaratorTypeAndKind(
	makeIdentifier("printf"),
	setTypeField(
	setTypeElementType(makeType(T_FUNC),void_type),
	linkDeclaratorList(
	setDeclaratorTypeAndKind(makeDummyIdentifier(),string_type,ID_PARM),
	setDeclaratorKind(makeDummyIdentifier(),ID_PARM))),
	ID_FUNC);
	// scanf(char *, ...) library function
	setDeclaratorTypeAndKind(
	makeIdentifier("scanf"),
	setTypeField(
	setTypeElementType(makeType(T_FUNC),void_type),
	linkDeclaratorList(
	setDeclaratorTypeAndKind(makeDummyIdentifier(),string_type,ID_PARM),
	setDeclaratorKind(makeDummyIdentifier(),ID_PARM))),
	ID_FUNC);
	// malloc(int) library function
	setDeclaratorTypeAndKind(
	makeIdentifier("malloc"),
	setTypeField(
	setTypeElementType(makeType(T_FUNC),string_type),
	setDeclaratorTypeAndKind(makeDummyIdentifier(),int_type,ID_PARM)),
	ID_FUNC);
}

void syntax_error(int i,char *s) {
	syntax_err++;
	printf("line %d: syntax error: ", line_no);
	switch (i) {
		case 11: printf("illegal referencing struct or union identifier %s",s);
		break;
		case 12: printf("redeclaration of identifier %s",s); break;
		case 13: printf("undefined identifier %s",s); break;
		case 14: printf("illegal type specifier in formal parameter"); break;
		case 20: printf("illegal storage class in type specifiers"); break;
		case 21: printf("illegal function declarator"); break;
		case 22: printf("conflicting parm type in prototype function %s",s);
		break;
		case 23: printf("empty parameter name"); break;
		case 24: printf("illegal declaration specifiers"); break;
		case 25: printf("illegal function specifiers"); break;
		case 26: printf("illegal or conflicting return type in function %s",s);
		break;
		case 31: printf("undefined type for identifier %s",s); break;
		case 32: printf("incomplete forward reference for identifier %s",s);
		break;
		default: printf("unknown"); break;
	}
	if (strlen(yytext)==0)
		printf(" at end\n");
	else
		printf(" near %s\n", yytext);
}

void main(int argc, char *argv[]) { //적당히 고쳐서 사용하세요
	if ((yyin=fopen(argv[argc-1],"r"))==NULL){
		printf("can not open input file: %s\n",argv[argc-1]);
		exit(1);
	}
	initialize();
	yyparse();
	if (!syntax_err)
		print_ast(root);
}
