
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "myscanner.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

extern FILE *yyin;
extern int yylex();
extern char* yytext;
extern int yyparse();
extern int line_num;
int errorline;
int range=0;
int strlength;
int errors=0;
int trun=0;
int id_table[1024];
int uniIDs=0;
int counter;
void checklength(char* s);
void checkifUnique (char* l);
void StartsWith(char* a);
void yyerror(const char* s);


/* Line 189 of yacc.c  */
#line 98 "y.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 1
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     COLON = 258,
     COMMA = 259,
     OBRACKETS = 260,
     OBRACES = 261,
     CBRACKETS = 262,
     CBRACES = 263,
     CREATED_AT = 264,
     ID_STR = 265,
     TEXT = 266,
     USER = 267,
     ID = 268,
     NAME = 269,
     URL = 270,
     SCREEN_NAME = 271,
     LOCATION = 272,
     DESCRIPTION = 273,
     PLACE = 274,
     ENTITIES = 275,
     HASHTAGS = 276,
     URLS = 277,
     UNWOUND = 278,
     TITLE = 279,
     USER_MENTIONS = 280,
     RETWEETED_STATUS = 281,
     EXTENDED_TWEET = 282,
     TRUNCATED = 283,
     DISP_TEXT_RANGE = 284,
     FULL_TEXT = 285,
     INDICES = 286,
     TWEET = 287,
     CREATED_AT_ATTRIBUTE = 288,
     EXTENDED_ENTITIES = 289,
     BOOLEAN = 290,
     ID_STR_ATTRIBUTE = 291,
     STRING = 292,
     INT = 293
   };
#endif
/* Tokens.  */
#define COLON 258
#define COMMA 259
#define OBRACKETS 260
#define OBRACES 261
#define CBRACKETS 262
#define CBRACES 263
#define CREATED_AT 264
#define ID_STR 265
#define TEXT 266
#define USER 267
#define ID 268
#define NAME 269
#define URL 270
#define SCREEN_NAME 271
#define LOCATION 272
#define DESCRIPTION 273
#define PLACE 274
#define ENTITIES 275
#define HASHTAGS 276
#define URLS 277
#define UNWOUND 278
#define TITLE 279
#define USER_MENTIONS 280
#define RETWEETED_STATUS 281
#define EXTENDED_TWEET 282
#define TRUNCATED 283
#define DISP_TEXT_RANGE 284
#define FULL_TEXT 285
#define INDICES 286
#define TWEET 287
#define CREATED_AT_ATTRIBUTE 288
#define EXTENDED_ENTITIES 289
#define BOOLEAN 290
#define ID_STR_ATTRIBUTE 291
#define STRING 292
#define INT 293




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 26 "myscanner.y"

int num; 
char* string;


/* Line 214 of yacc.c  */
#line 216 "y.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 228 "y.tab.c"

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
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
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
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
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
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
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
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
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

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   189

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  39
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  143
/* YYNRULES -- Number of rules.  */
#define YYNRULES  175
/* YYNRULES -- Number of states.  */
#define YYNSTATES  309

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     4,     9,    11,    13,    14,    19,    21,
      23,    25,    27,    29,    31,    33,    34,    35,    41,    42,
      43,    49,    50,    51,    57,    58,    59,    60,    69,    70,
      75,    76,    77,    83,    84,    85,    91,    92,    93,    99,
     100,   101,   107,   108,   109,   115,   116,   117,   123,   124,
     125,   131,   132,   133,   134,   142,   143,   144,   145,   154,
     155,   160,   161,   162,   168,   169,   170,   171,   180,   181,
     182,   183,   192,   193,   198,   199,   200,   201,   202,   203,
     204,   205,   206,   207,   208,   209,   210,   236,   237,   238,
     239,   248,   249,   254,   255,   256,   257,   265,   266,   267,
     268,   269,   270,   283,   284,   285,   286,   294,   295,   296,
     297,   298,   299,   300,   301,   318,   319,   320,   321,   322,
     323,   324,   338,   339,   344,   345,   346,   347,   356,   357,
     362,   363,   364,   370,   371,   372,   373,   374,   375,   376,
     390,   391,   392,   393,   402,   403,   404,   405,   413,   414,
     415,   416,   424,   425,   430,   431,   432,   438,   439,   440,
     441,   442,   443,   444,   458,   459,   460,   461,   469,   470,
     471,   472,   480,   481,   482,   483
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      40,     0,    -1,    -1,     5,    41,    42,     7,    -1,    43,
      -1,   139,    -1,    -1,    43,     4,    44,    43,    -1,    45,
      -1,    48,    -1,    51,    -1,    78,    -1,    54,    -1,    74,
      -1,   107,    -1,    -1,    -1,     9,    46,     3,    47,    33,
      -1,    -1,    -1,    10,    49,     3,    50,    36,    -1,    -1,
      -1,    11,    52,     3,    53,    37,    -1,    -1,    -1,    -1,
      12,    55,     3,    56,     5,    57,    58,     7,    -1,    -1,
      58,     4,    59,    58,    -1,    -1,    -1,    13,    60,     3,
      61,    38,    -1,    -1,    -1,    14,    62,     3,    63,    37,
      -1,    -1,    -1,    16,    64,     3,    65,    37,    -1,    -1,
      -1,    17,    66,     3,    67,    37,    -1,    -1,    -1,    15,
      68,     3,    69,    37,    -1,    -1,    -1,    18,    70,     3,
      71,    37,    -1,    -1,    -1,    10,    72,     3,    73,    36,
      -1,    -1,    -1,    -1,    19,    75,     3,    76,     5,    77,
       7,    -1,    -1,    -1,    -1,    27,    79,     3,    80,     5,
      81,    82,     7,    -1,    -1,    82,     4,    83,    82,    -1,
      -1,    -1,    30,    84,     3,    85,    37,    -1,    -1,    -1,
      -1,    20,    86,     3,    87,     5,    88,    89,     7,    -1,
      -1,    -1,    -1,    21,    90,     3,    91,     6,    92,    93,
       8,    -1,    -1,    93,     4,    94,    93,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
       5,    95,    11,    96,     3,    97,    37,    98,     4,    99,
      31,   100,     3,   101,     6,   102,    38,   103,     4,   104,
      38,   105,     8,   106,     7,    -1,    -1,    -1,    -1,    20,
     108,     3,   109,     5,   110,   111,     7,    -1,    -1,   111,
       4,   112,   111,    -1,    -1,    -1,    -1,    21,   113,     3,
     114,     6,   115,     8,    -1,    -1,    -1,    -1,    -1,    -1,
      22,   116,     3,   117,     6,   118,     5,   119,   124,     7,
     120,     8,    -1,    -1,    -1,    -1,    25,   121,     3,   122,
       6,   123,     8,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    15,   125,     3,   126,    37,   127,     4,   128,    23,
     129,     3,   130,     5,   131,   132,     7,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    15,   133,     3,   134,    37,   135,
       4,   136,    24,   137,     3,   138,    37,    -1,    -1,   139,
       4,   140,   139,    -1,    -1,    -1,    -1,    32,   141,     3,
     142,     5,   143,   144,     7,    -1,    -1,   144,     4,   145,
     144,    -1,    -1,    -1,    11,   146,     3,   147,    37,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    12,   148,     3,   149,
       5,   150,    16,   151,     3,   152,    37,   153,     7,    -1,
      -1,    -1,    -1,    26,   154,     3,   155,     5,   156,   163,
       7,    -1,    -1,    -1,    -1,    20,   157,     3,   158,     5,
     159,     7,    -1,    -1,    -1,    -1,    34,   160,     3,   161,
       5,   162,     7,    -1,    -1,   163,     4,   164,   163,    -1,
      -1,    -1,    11,   165,     3,   166,    37,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    12,   167,     3,   168,     5,   169,
      16,   170,     3,   171,    37,   172,     7,    -1,    -1,    -1,
      -1,    19,   173,     3,   174,     5,   175,     7,    -1,    -1,
      -1,    -1,    20,   176,     3,   177,     5,   178,     7,    -1,
      -1,    -1,    -1,    34,   179,     3,   180,     5,   181,     7,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    52,    52,    52,    55,    56,    59,    59,    60,    61,
      62,    63,    64,    65,    66,    72,    72,    72,    75,    75,
      75,    78,    78,    78,    82,    82,    82,    82,    84,    84,
      85,    85,    85,    86,    86,    86,    87,    87,    87,    88,
      88,    88,    89,    89,    89,    90,    90,    90,    91,    91,
      91,    94,    94,    94,    94,    98,    98,    98,    98,   100,
     100,   101,   101,   101,   102,   102,   102,   102,   105,   105,
     105,   105,   107,   107,   108,   108,   108,   108,   108,   108,
     108,   108,   108,   108,   108,   108,   108,   114,   114,   114,
     114,   116,   116,   117,   117,   117,   117,   118,   118,   118,
     118,   118,   118,   119,   119,   119,   119,   122,   122,   122,
     122,   122,   122,   122,   122,   125,   125,   125,   125,   125,
     125,   125,   127,   127,   128,   128,   128,   128,   132,   132,
     133,   133,   133,   134,   134,   134,   134,   134,   134,   134,
     135,   135,   135,   135,   136,   136,   136,   136,   137,   137,
     137,   137,   140,   140,   141,   141,   141,   142,   142,   142,
     142,   142,   142,   142,   143,   143,   143,   143,   144,   144,
     144,   144,   145,   145,   145,   145
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "COLON", "COMMA", "OBRACKETS", "OBRACES",
  "CBRACKETS", "CBRACES", "CREATED_AT", "ID_STR", "TEXT", "USER", "ID",
  "NAME", "URL", "SCREEN_NAME", "LOCATION", "DESCRIPTION", "PLACE",
  "ENTITIES", "HASHTAGS", "URLS", "UNWOUND", "TITLE", "USER_MENTIONS",
  "RETWEETED_STATUS", "EXTENDED_TWEET", "TRUNCATED", "DISP_TEXT_RANGE",
  "FULL_TEXT", "INDICES", "TWEET", "CREATED_AT_ATTRIBUTE",
  "EXTENDED_ENTITIES", "BOOLEAN", "ID_STR_ATTRIBUTE", "STRING", "INT",
  "$accept", "jsonfile", "$@1", "ruleRESTART", "ruleSTART", "$@2",
  "ruleCreate", "$@3", "$@4", "ruleID_STR", "$@5", "$@6", "ruleText",
  "$@7", "$@8", "ruleUser", "$@9", "$@10", "$@11", "rule3", "$@12", "$@13",
  "$@14", "$@15", "$@16", "$@17", "$@18", "$@19", "$@20", "$@21", "$@22",
  "$@23", "$@24", "$@25", "$@26", "rulePlace", "$@27", "$@28", "$@29",
  "ruleET", "$@30", "$@31", "$@32", "ruleET1", "$@33", "$@34", "$@35",
  "$@36", "$@37", "$@38", "ruleHA", "$@39", "$@40", "$@41", "ruleHA1",
  "$@42", "$@43", "$@44", "$@45", "$@46", "$@47", "$@48", "$@49", "$@50",
  "$@51", "$@52", "$@53", "$@54", "ruleEntities", "$@55", "$@56", "$@57",
  "rule4", "$@58", "$@59", "$@60", "$@61", "$@62", "$@63", "$@64", "$@65",
  "$@66", "$@67", "$@68", "$@69", "rule5", "$@70", "$@71", "$@72", "$@73",
  "$@74", "$@75", "$@76", "rule6", "$@77", "$@78", "$@79", "$@80", "$@81",
  "$@82", "ruleRETWEET", "$@83", "$@84", "$@85", "$@86", "ruleTW", "$@87",
  "$@88", "$@89", "$@90", "$@91", "$@92", "$@93", "$@94", "$@95", "$@96",
  "$@97", "$@98", "$@99", "$@100", "$@101", "$@102", "$@103", "$@104",
  "ruleRS", "$@105", "$@106", "$@107", "$@108", "$@109", "$@110", "$@111",
  "$@112", "$@113", "$@114", "$@115", "$@116", "$@117", "$@118", "$@119",
  "$@120", "$@121", "$@122", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    39,    41,    40,    42,    42,    44,    43,    43,    43,
      43,    43,    43,    43,    43,    46,    47,    45,    49,    50,
      48,    52,    53,    51,    55,    56,    57,    54,    59,    58,
      60,    61,    58,    62,    63,    58,    64,    65,    58,    66,
      67,    58,    68,    69,    58,    70,    71,    58,    72,    73,
      58,    75,    76,    77,    74,    79,    80,    81,    78,    83,
      82,    84,    85,    82,    86,    87,    88,    82,    90,    91,
      92,    89,    94,    93,    95,    96,    97,    98,    99,   100,
     101,   102,   103,   104,   105,   106,    93,   108,   109,   110,
     107,   112,   111,   113,   114,   115,   111,   116,   117,   118,
     119,   120,   111,   121,   122,   123,   111,   125,   126,   127,
     128,   129,   130,   131,   124,   133,   134,   135,   136,   137,
     138,   132,   140,   139,   141,   142,   143,   139,   145,   144,
     146,   147,   144,   148,   149,   150,   151,   152,   153,   144,
     154,   155,   156,   144,   157,   158,   159,   144,   160,   161,
     162,   144,   164,   163,   165,   166,   163,   167,   168,   169,
     170,   171,   172,   163,   173,   174,   175,   163,   176,   177,
     178,   163,   179,   180,   181,   163
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     0,     4,     1,     1,     0,     4,     1,     1,
       1,     1,     1,     1,     1,     0,     0,     5,     0,     0,
       5,     0,     0,     5,     0,     0,     0,     8,     0,     4,
       0,     0,     5,     0,     0,     5,     0,     0,     5,     0,
       0,     5,     0,     0,     5,     0,     0,     5,     0,     0,
       5,     0,     0,     0,     7,     0,     0,     0,     8,     0,
       4,     0,     0,     5,     0,     0,     0,     8,     0,     0,
       0,     8,     0,     4,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    25,     0,     0,     0,
       8,     0,     4,     0,     0,     0,     7,     0,     0,     0,
       0,     0,    12,     0,     0,     0,     7,     0,     0,     0,
       0,     0,     0,     0,    16,     0,     0,     0,     0,     0,
       0,    13,     0,     4,     0,     0,     0,     8,     0,     4,
       0,     0,     5,     0,     0,     0,     0,     0,     0,    13,
       0,     0,     0,     8,     0,     0,     0,     7,     0,     0,
       0,     7,     0,     4,     0,     0,     5,     0,     0,     0,
       0,     0,     0,    13,     0,     0,     0,     7,     0,     0,
       0,     7,     0,     0,     0,     7
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     2,     0,     0,     1,    15,    18,    21,    24,    51,
      87,    55,   124,     0,     4,     8,     9,    10,    12,    13,
      11,    14,     5,     0,     0,     0,     0,     0,     0,     0,
       0,     3,     6,   122,    16,    19,    22,    25,    52,    88,
      56,   125,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     7,   123,    17,    20,    23,    26,    53,    89,
      57,   126,     0,     0,     0,     0,     0,    48,    30,    33,
      42,    36,    39,    45,     0,    54,    93,    97,   103,     0,
      64,    61,     0,   130,   133,   144,   140,   148,     0,     0,
       0,     0,     0,     0,     0,     0,    28,    27,     0,     0,
       0,    91,    90,     0,     0,    59,    58,     0,     0,     0,
       0,     0,   128,   127,    49,    31,    34,    43,    37,    40,
      46,     0,    94,    98,   104,     0,    65,    62,     0,   131,
     134,   145,   141,   149,     0,     0,     0,     0,     0,     0,
       0,     0,    29,     0,     0,     0,    92,     0,     0,    60,
       0,     0,     0,     0,     0,   129,    50,    32,    35,    44,
      38,    41,    47,    95,    99,   105,    66,    63,   132,   135,
     146,   142,   150,     0,     0,     0,     0,     0,     0,     0,
       0,    96,   100,   106,    68,     0,   136,   147,   154,   157,
     164,   168,   172,     0,   151,     0,     0,    67,     0,     0,
       0,     0,     0,     0,   152,   143,   107,     0,    69,   137,
     155,   158,   165,   169,   173,     0,     0,   101,     0,     0,
       0,     0,     0,     0,     0,   153,   108,     0,    70,   138,
     156,   159,   166,   170,   174,     0,   102,     0,     0,     0,
       0,     0,     0,   109,    74,     0,   139,   160,   167,   171,
     175,     0,     0,    72,    71,     0,   110,    75,     0,   161,
       0,     0,    73,     0,   111,    76,   162,     0,     0,     0,
     112,    77,   163,     0,     0,   113,    78,     0,     0,   115,
       0,    79,     0,   114,     0,   116,    80,     0,     0,   117,
      81,     0,     0,   118,    82,     0,     0,   119,    83,     0,
       0,   120,    84,     0,     0,   121,    85,     0,    86
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     3,    13,    14,    42,    15,    23,    44,    16,
      24,    45,    17,    25,    46,    18,    26,    47,    62,    74,
     121,    90,   136,    91,   137,    93,   139,    94,   140,    92,
     138,    95,   141,    89,   135,    19,    27,    48,    63,    20,
      29,    50,    65,    82,   128,   104,   148,   103,   147,   176,
     185,   196,   218,   237,   245,   258,   252,   261,   268,   274,
     278,   284,   288,   292,   296,   300,   304,   307,    21,    28,
      49,    64,    79,   125,    98,   143,   173,    99,   144,   174,
     195,   227,   100,   145,   175,   207,   216,   235,   251,   260,
     267,   273,   277,   280,   282,   287,   291,   295,   299,   303,
      22,    43,    30,    51,    66,    88,   134,   107,   150,   108,
     151,   177,   198,   219,   238,   110,   153,   179,   109,   152,
     178,   111,   154,   180,   193,   215,   199,   220,   200,   221,
     239,   255,   263,   269,   201,   222,   240,   202,   223,   241,
     203,   224,   242
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -147
static const yytype_int16 yypact[] =
{
       3,  -147,     9,    -9,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,    10,    12,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,    22,    25,    32,    33,    34,    54,    57,    58,
      59,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,    21,    31,    35,   -11,    27,    60,    61,    62,
      64,    65,    12,    22,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,    29,    66,    -1,    -8,    -7,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,    45,  -147,  -147,  -147,  -147,    46,
    -147,  -147,    47,  -147,  -147,  -147,  -147,  -147,    51,    68,
      69,    71,    72,    73,    74,    75,  -147,  -147,    76,    77,
      78,  -147,  -147,    79,    80,  -147,  -147,    81,    82,    83,
      84,    85,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,    29,  -147,  -147,  -147,    -1,  -147,  -147,    -8,  -147,
    -147,  -147,  -147,  -147,    -7,    53,    55,    63,    67,    70,
      86,    87,    88,    89,    90,    91,    94,    96,    92,    95,
      93,    97,    98,   100,   101,   104,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,   102,   106,   105,    99,   103,   107,    -5,
     108,  -147,  -147,  -147,  -147,   109,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,    52,  -147,   110,   114,  -147,   115,   118,
     119,   123,   124,   125,  -147,  -147,  -147,   126,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,    -5,   128,  -147,   129,   111,
     112,   127,   131,   132,   133,   130,  -147,   134,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,   113,  -147,   135,   136,   137,
     138,   139,   140,  -147,  -147,    30,  -147,  -147,  -147,  -147,
    -147,   147,   141,  -147,  -147,   151,  -147,  -147,   135,  -147,
     116,   152,   153,   121,  -147,  -147,  -147,   156,   142,   149,
    -147,  -147,  -147,   155,   157,  -147,  -147,   148,   143,  -147,
     158,  -147,   159,  -147,   161,  -147,  -147,   144,   160,  -147,
    -147,   163,    56,  -147,  -147,   117,   164,  -147,  -147,   166,
     145,  -147,  -147,   150,   162,  -147,  -147,   165,  -147
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -147,  -147,  -147,  -147,    48,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,   -30,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,   -19,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -146,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,    19,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
     146,  -147,  -147,  -147,  -147,    37,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,   -42,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,  -147,
    -147,  -147,  -147
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
       5,     6,     7,     8,    83,    84,   188,   189,     1,     4,
       9,    10,    80,    85,   190,   191,    32,    31,    11,    86,
      76,    77,    81,    12,    78,    55,    33,    87,    34,   192,
       5,     6,     7,     8,   253,    35,    36,    37,   254,    67,
       9,    10,    68,    69,    70,    71,    72,    73,    11,    96,
     101,   105,    97,   102,   106,   112,   204,    38,   113,   205,
      39,    40,    41,    12,    56,    57,    58,    59,    54,    60,
      61,   114,   115,    75,   116,   117,   118,   119,   120,   122,
     123,   124,   126,   127,   129,   130,   131,   132,   133,   156,
      52,   142,    96,   157,   294,   163,   164,   165,   101,   105,
     158,   166,   169,   170,   159,   171,   172,   160,   112,   149,
     181,   182,   262,   183,   187,   194,   197,   208,   209,   186,
     184,   210,   211,   161,   162,   206,   212,   213,   214,   167,
     168,   226,   231,   217,   204,   228,   232,   233,   234,   264,
     244,   297,   236,   246,   146,   248,   249,   250,   229,   230,
     243,   256,   257,   247,   259,   265,   272,   253,   266,   270,
     275,   276,   285,   279,   286,   283,   290,   293,   298,   301,
     306,   155,   308,   225,   281,     0,     0,     0,     0,   271,
       0,   289,     0,   302,     0,     0,     0,   305,     0,    53
};

static const yytype_int16 yycheck[] =
{
       9,    10,    11,    12,    11,    12,    11,    12,     5,     0,
      19,    20,    20,    20,    19,    20,     4,     7,    27,    26,
      21,    22,    30,    32,    25,    36,     4,    34,     3,    34,
       9,    10,    11,    12,     4,     3,     3,     3,     8,    10,
      19,    20,    13,    14,    15,    16,    17,    18,    27,     4,
       4,     4,     7,     7,     7,     4,     4,     3,     7,     7,
       3,     3,     3,    32,    37,     5,     5,     5,    33,     5,
       5,     3,     3,     7,     3,     3,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     3,     3,     3,    36,
      42,   121,     4,    38,    38,     6,     6,     6,     4,     4,
      37,     5,     5,     5,    37,     5,     5,    37,     4,   128,
       8,     5,   258,     8,     7,     7,     7,     3,     3,    16,
      21,     3,     3,    37,    37,    15,     3,     3,     3,    37,
      37,     3,     5,     7,     4,     6,     5,     5,     5,    23,
       5,    24,     8,     7,   125,     7,     7,     7,    37,    37,
      37,     4,    11,    16,     3,     3,     7,     4,    37,     3,
       5,     4,     3,    15,     3,     7,     6,     4,     4,     3,
       8,   134,     7,   215,    31,    -1,    -1,    -1,    -1,    37,
      -1,    37,    -1,    38,    -1,    -1,    -1,    37,    -1,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     5,    40,    41,     0,     9,    10,    11,    12,    19,
      20,    27,    32,    42,    43,    45,    48,    51,    54,    74,
      78,   107,   139,    46,    49,    52,    55,    75,   108,    79,
     141,     7,     4,     4,     3,     3,     3,     3,     3,     3,
       3,     3,    44,   140,    47,    50,    53,    56,    76,   109,
      80,   142,    43,   139,    33,    36,    37,     5,     5,     5,
       5,     5,    57,    77,   110,    81,   143,    10,    13,    14,
      15,    16,    17,    18,    58,     7,    21,    22,    25,   111,
      20,    30,    82,    11,    12,    20,    26,    34,   144,    72,
      60,    62,    68,    64,    66,    70,     4,     7,   113,   116,
     121,     4,     7,    86,    84,     4,     7,   146,   148,   157,
     154,   160,     4,     7,     3,     3,     3,     3,     3,     3,
       3,    59,     3,     3,     3,   112,     3,     3,    83,     3,
       3,     3,     3,     3,   145,    73,    61,    63,    69,    65,
      67,    71,    58,   114,   117,   122,   111,    87,    85,    82,
     147,   149,   158,   155,   161,   144,    36,    38,    37,    37,
      37,    37,    37,     6,     6,     6,     5,    37,    37,     5,
       5,     5,     5,   115,   118,   123,    88,   150,   159,   156,
     162,     8,     5,     8,    21,    89,    16,     7,    11,    12,
      19,    20,    34,   163,     7,   119,    90,     7,   151,   165,
     167,   173,   176,   179,     4,     7,    15,   124,     3,     3,
       3,     3,     3,     3,     3,   164,   125,     7,    91,   152,
     166,   168,   174,   177,   180,   163,     3,   120,     6,    37,
      37,     5,     5,     5,     5,   126,     8,    92,   153,   169,
     175,   178,   181,    37,     5,    93,     7,    16,     7,     7,
       7,   127,    95,     4,     8,   170,     4,    11,    94,     3,
     128,    96,    93,   171,    23,     3,    37,   129,    97,   172,
       3,    37,     7,   130,    98,     5,     4,   131,    99,    15,
     132,    31,   133,     7,   100,     3,     3,   134,   101,    37,
       6,   135,   102,     4,    38,   136,   103,    24,     4,   137,
     104,     3,    38,   138,   105,    37,     8,   106,     7
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yyrule)
    YYSTYPE *yyvsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, Rule); \
} while (YYID (0))

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
#ifndef	YYINITDEPTH
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
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
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
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

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
#else
static void
yydestruct (yymsg, yytype, yyvaluep)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
#endif
{
  YYUSE (yyvaluep);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.

       Refer to the stacks thru separate pointers, to allow yyoverflow
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
  int yytoken;
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

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;

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
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
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
      if (yyn == 0 || yyn == YYTABLE_NINF)
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
  *++yyvsp = yylval;

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
     `$$ = $1'.

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

/* Line 1455 of yacc.c  */
#line 52 "myscanner.y"
    {printf("{\n");}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 52 "myscanner.y"
    {printf("}\n");}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 59 "myscanner.y"
    {printf(",\n");}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 72 "myscanner.y"
    {printf("\t\"created_at\"");}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 72 "myscanner.y"
    {printf(":");}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 72 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 75 "myscanner.y"
    {printf("\t\"id_str\"");}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 75 "myscanner.y"
    {printf(":");}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 75 "myscanner.y"
    {checkifUnique(yytext); printf("\%s",yytext);}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 78 "myscanner.y"
    {printf("\t\"text\"");}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 78 "myscanner.y"
    {printf(":");}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 78 "myscanner.y"
    {checklength(yytext); printf("\%s",yytext);}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 82 "myscanner.y"
    {printf("\t\"user\"");}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 82 "myscanner.y"
    {printf(":");}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 82 "myscanner.y"
    {printf("{\n");}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 82 "myscanner.y"
    {printf("\n\t}");}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 84 "myscanner.y"
    {printf(",\n");}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 85 "myscanner.y"
    {printf("\t\t\"id\"");}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 85 "myscanner.y"
    {printf(":");}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 85 "myscanner.y"
    {checkifUnique(yytext); printf("\%s",yytext);}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 86 "myscanner.y"
    {printf("\t\t\"name\"");}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 86 "myscanner.y"
    {printf(":");}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 86 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 87 "myscanner.y"
    {printf("\t\t\"screen_name\"");}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 87 "myscanner.y"
    {printf(":");}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 87 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 88 "myscanner.y"
    {printf("\t\t\"location\"");}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 88 "myscanner.y"
    {printf(":");}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 88 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 89 "myscanner.y"
    {printf("\t\t\"url\"");}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 89 "myscanner.y"
    {printf(":");}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 89 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 90 "myscanner.y"
    {printf("\t\t\"description\"");}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 90 "myscanner.y"
    {printf(":");}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 90 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 91 "myscanner.y"
    {printf("\t\t\"id_str\"");}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 91 "myscanner.y"
    {printf(":");}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 91 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 94 "myscanner.y"
    {printf("\t\"place\"");}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 94 "myscanner.y"
    {printf(":");}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 94 "myscanner.y"
    {printf("{\n");}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 94 "myscanner.y"
    {printf("\t}");}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 98 "myscanner.y"
    {printf("\t\"extended_tweet\"");}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 98 "myscanner.y"
    {printf(":\n\t");}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 98 "myscanner.y"
    {printf("{\n");}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 98 "myscanner.y"
    {printf("\n\t}");}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 100 "myscanner.y"
    {printf(",\n");}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 101 "myscanner.y"
    {printf("\t\t\"full_text\"");}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 101 "myscanner.y"
    {printf(":");}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 101 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 102 "myscanner.y"
    {printf("\t\t\"entities\"");}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 102 "myscanner.y"
    {printf(":");}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 102 "myscanner.y"
    {printf("\n\t\t\t{\n");}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 102 "myscanner.y"
    {printf("\t\t\t}");}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 105 "myscanner.y"
    {printf("\t\t\t\"hashtags\"");}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 105 "myscanner.y"
    {printf(":\n");}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 105 "myscanner.y"
    {printf("\t\t\t\t[");}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 105 "myscanner.y"
    {printf("\n\t\t\t\t]\n");}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 107 "myscanner.y"
    {printf(",\n");}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 108 "myscanner.y"
    {printf("\n\t\t\t\t\t{\n");}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 108 "myscanner.y"
    {printf("\t\t\t\t\t\"text\"");}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 108 "myscanner.y"
    {printf(":");}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 108 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 108 "myscanner.y"
    {printf(",\n");}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 108 "myscanner.y"
    {printf("\t\t\t\t\t\"indices\"");}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 108 "myscanner.y"
    {printf(":");}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 108 "myscanner.y"
    {printf("[");}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 108 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 108 "myscanner.y"
    {printf(",");}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 108 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 108 "myscanner.y"
    {printf("]");}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 108 "myscanner.y"
    {printf("\n\t\t\t\t\t}");}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 114 "myscanner.y"
    {printf("\t\"entities\"");}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 114 "myscanner.y"
    {printf(":\n\t");}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 114 "myscanner.y"
    {printf("{\n");}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 114 "myscanner.y"
    {printf("\n\t}\n");}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 116 "myscanner.y"
    {printf(",\n");}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 117 "myscanner.y"
    {printf("\t\t\"hashtags\"");}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 117 "myscanner.y"
    {printf(":");}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 117 "myscanner.y"
    {printf("[");}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 117 "myscanner.y"
    {printf("]");}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 118 "myscanner.y"
    {printf("\t\t\"urls\"");}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 118 "myscanner.y"
    {printf(":");}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 118 "myscanner.y"
    {printf("[\n");}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 118 "myscanner.y"
    {printf("\t\t\t{\n");}
    break;

  case 101:

/* Line 1455 of yacc.c  */
#line 118 "myscanner.y"
    {printf("\t\t\t}\n");}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 118 "myscanner.y"
    {printf("\t\t]");}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 119 "myscanner.y"
    {printf("\t\t\"user_mentions\"");}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 119 "myscanner.y"
    {printf(":");}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 119 "myscanner.y"
    {printf("[");}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 119 "myscanner.y"
    {printf("]");}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 122 "myscanner.y"
    {printf("\t\t\t\"url\"");}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 122 "myscanner.y"
    {printf(":");}
    break;

  case 109:

/* Line 1455 of yacc.c  */
#line 122 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 110:

/* Line 1455 of yacc.c  */
#line 122 "myscanner.y"
    {printf(",\n");}
    break;

  case 111:

/* Line 1455 of yacc.c  */
#line 122 "myscanner.y"
    {printf("\t\t\t\"unwound\"");}
    break;

  case 112:

/* Line 1455 of yacc.c  */
#line 122 "myscanner.y"
    {printf(":");}
    break;

  case 113:

/* Line 1455 of yacc.c  */
#line 122 "myscanner.y"
    {printf("{\n");}
    break;

  case 114:

/* Line 1455 of yacc.c  */
#line 122 "myscanner.y"
    {printf("\n\t\t\t\t}\n");}
    break;

  case 115:

/* Line 1455 of yacc.c  */
#line 125 "myscanner.y"
    {printf("\t\t\t\t\"urls\"");}
    break;

  case 116:

/* Line 1455 of yacc.c  */
#line 125 "myscanner.y"
    {printf(":");}
    break;

  case 117:

/* Line 1455 of yacc.c  */
#line 125 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 118:

/* Line 1455 of yacc.c  */
#line 125 "myscanner.y"
    {printf(",\n");}
    break;

  case 119:

/* Line 1455 of yacc.c  */
#line 125 "myscanner.y"
    {printf("\t\t\t\t\"title\"");}
    break;

  case 120:

/* Line 1455 of yacc.c  */
#line 125 "myscanner.y"
    {printf(":");}
    break;

  case 121:

/* Line 1455 of yacc.c  */
#line 125 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 122:

/* Line 1455 of yacc.c  */
#line 127 "myscanner.y"
    {printf(",\n");}
    break;

  case 124:

/* Line 1455 of yacc.c  */
#line 128 "myscanner.y"
    {printf("\t\"tweet\"");}
    break;

  case 125:

/* Line 1455 of yacc.c  */
#line 128 "myscanner.y"
    {printf(":\n\t");}
    break;

  case 126:

/* Line 1455 of yacc.c  */
#line 128 "myscanner.y"
    {printf("{\n");}
    break;

  case 127:

/* Line 1455 of yacc.c  */
#line 128 "myscanner.y"
    {printf("\t}\n");}
    break;

  case 128:

/* Line 1455 of yacc.c  */
#line 132 "myscanner.y"
    {printf(",\n");}
    break;

  case 130:

/* Line 1455 of yacc.c  */
#line 133 "myscanner.y"
    {printf("\t\t\"text\"");}
    break;

  case 131:

/* Line 1455 of yacc.c  */
#line 133 "myscanner.y"
    {printf(":");}
    break;

  case 132:

/* Line 1455 of yacc.c  */
#line 133 "myscanner.y"
    {StartsWith(yytext); printf("\%s",yytext);}
    break;

  case 133:

/* Line 1455 of yacc.c  */
#line 134 "myscanner.y"
    {printf("\t\t\"user\"");}
    break;

  case 134:

/* Line 1455 of yacc.c  */
#line 134 "myscanner.y"
    {printf(":\n\t\t");}
    break;

  case 135:

/* Line 1455 of yacc.c  */
#line 134 "myscanner.y"
    {printf("{\n");}
    break;

  case 136:

/* Line 1455 of yacc.c  */
#line 134 "myscanner.y"
    {printf("\t\t\t\"screen_name\"");}
    break;

  case 137:

/* Line 1455 of yacc.c  */
#line 134 "myscanner.y"
    {printf(":");}
    break;

  case 138:

/* Line 1455 of yacc.c  */
#line 134 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 139:

/* Line 1455 of yacc.c  */
#line 134 "myscanner.y"
    {printf("\n\t\t}");}
    break;

  case 140:

/* Line 1455 of yacc.c  */
#line 135 "myscanner.y"
    {printf("\t\t\"retweeted_status\"");}
    break;

  case 141:

/* Line 1455 of yacc.c  */
#line 135 "myscanner.y"
    {printf(":\n\t\t");}
    break;

  case 142:

/* Line 1455 of yacc.c  */
#line 135 "myscanner.y"
    {printf("{\n");}
    break;

  case 143:

/* Line 1455 of yacc.c  */
#line 135 "myscanner.y"
    {printf("\t\t}");}
    break;

  case 144:

/* Line 1455 of yacc.c  */
#line 136 "myscanner.y"
    {printf("\t\t\"entities\"");}
    break;

  case 145:

/* Line 1455 of yacc.c  */
#line 136 "myscanner.y"
    {printf(":\n\t\t");}
    break;

  case 146:

/* Line 1455 of yacc.c  */
#line 136 "myscanner.y"
    {printf("{\n");}
    break;

  case 147:

/* Line 1455 of yacc.c  */
#line 136 "myscanner.y"
    {printf("\t\t}");}
    break;

  case 148:

/* Line 1455 of yacc.c  */
#line 137 "myscanner.y"
    {printf("\t\t\"extended_entities\"");}
    break;

  case 149:

/* Line 1455 of yacc.c  */
#line 137 "myscanner.y"
    {printf(":\n\t\t");}
    break;

  case 150:

/* Line 1455 of yacc.c  */
#line 137 "myscanner.y"
    {printf("{\n");}
    break;

  case 151:

/* Line 1455 of yacc.c  */
#line 137 "myscanner.y"
    {printf("\t\t}\n");}
    break;

  case 152:

/* Line 1455 of yacc.c  */
#line 140 "myscanner.y"
    {printf(",\n");}
    break;

  case 154:

/* Line 1455 of yacc.c  */
#line 141 "myscanner.y"
    {printf("\t\t\t\"text\"");}
    break;

  case 155:

/* Line 1455 of yacc.c  */
#line 141 "myscanner.y"
    {printf(":");}
    break;

  case 156:

/* Line 1455 of yacc.c  */
#line 141 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 157:

/* Line 1455 of yacc.c  */
#line 142 "myscanner.y"
    {printf("\t\t\t\"user\"");}
    break;

  case 158:

/* Line 1455 of yacc.c  */
#line 142 "myscanner.y"
    {printf(":\n\t\t\t");}
    break;

  case 159:

/* Line 1455 of yacc.c  */
#line 142 "myscanner.y"
    {printf("{\n");}
    break;

  case 160:

/* Line 1455 of yacc.c  */
#line 142 "myscanner.y"
    {printf("\t\t\t\t\"screen_name\"");}
    break;

  case 161:

/* Line 1455 of yacc.c  */
#line 142 "myscanner.y"
    {printf(":");}
    break;

  case 162:

/* Line 1455 of yacc.c  */
#line 142 "myscanner.y"
    {printf("\%s",yytext);}
    break;

  case 163:

/* Line 1455 of yacc.c  */
#line 142 "myscanner.y"
    {printf("\n\t\t\t}");}
    break;

  case 164:

/* Line 1455 of yacc.c  */
#line 143 "myscanner.y"
    {printf("\t\t\t\"place\"");}
    break;

  case 165:

/* Line 1455 of yacc.c  */
#line 143 "myscanner.y"
    {printf(":\n\t\t\t");}
    break;

  case 166:

/* Line 1455 of yacc.c  */
#line 143 "myscanner.y"
    {printf("{\n");}
    break;

  case 167:

/* Line 1455 of yacc.c  */
#line 143 "myscanner.y"
    {printf("\t\t\t}");}
    break;

  case 168:

/* Line 1455 of yacc.c  */
#line 144 "myscanner.y"
    {printf("\t\t\t\"entities\"");}
    break;

  case 169:

/* Line 1455 of yacc.c  */
#line 144 "myscanner.y"
    {printf(":\n\t\t\t");}
    break;

  case 170:

/* Line 1455 of yacc.c  */
#line 144 "myscanner.y"
    {printf("{\n");}
    break;

  case 171:

/* Line 1455 of yacc.c  */
#line 144 "myscanner.y"
    {printf("\t\t\t}");}
    break;

  case 172:

/* Line 1455 of yacc.c  */
#line 145 "myscanner.y"
    {printf("\t\t\t\"extended_entities\"");}
    break;

  case 173:

/* Line 1455 of yacc.c  */
#line 145 "myscanner.y"
    {printf(":\n\t\t\t");}
    break;

  case 174:

/* Line 1455 of yacc.c  */
#line 145 "myscanner.y"
    {printf("{\n");}
    break;

  case 175:

/* Line 1455 of yacc.c  */
#line 145 "myscanner.y"
    {printf("\t\t\t}\n");}
    break;



/* Line 1455 of yacc.c  */
#line 2805 "y.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
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

  /* Do not reclaim the symbols of the rule which action triggered
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
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
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

  *++yyvsp = yylval;


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

#if !defined(yyoverflow) || YYERROR_VERBOSE
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
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval);
  /* Do not reclaim the symbols of the rule which action triggered
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
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 149 "myscanner.y"


void checklength (char* s)
{
	if(strlen(s)>140)
	{
		errors++;
		errorline=line_num;
	}
}

void checkifUnique (char* l)
{
	for(counter = 0; counter < uniIDs; counter++)
	{
		if(atoi(l) == id_table[counter])
		{
			errors++;
			printf("\nError in line %i,the id is not unique\n", line_num);
			exit(EXIT_FAILURE);
		}
	}
	id_table[uniIDs] = atoi(l); //prosoxh 8esh Pinaka 0
	uniIDs++;

}

void StartsWith(char* a)
{
	char* b= "\"RT @";
	if(strncmp(a, b, 5) != 0)
	{
		printf("\nError in line %i,the text does not have the right form (RT @).\n", line_num);
		exit(EXIT_FAILURE);		
	}
}
	

int main (int argc, char **argv) {
	FILE *jfile = fopen(argv[1], "r");
	yyin = jfile;
	yyparse();

	if(errors!=0 && trun ==0)
	{
		printf("\nError in line %i ,the length of the text is over 140 characters\n", errorline);
		exit(EXIT_FAILURE);}
	else
	{
		return 0;
	}
	}

void yyerror (const char *s) {fprintf (stderr, "%s\n", s);} 

