
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
#line 3 "1707110.y"

#include<stdio.h>
# include <stdlib.h>
# include <stdarg.h>
# include <string.h>
# include <math.h>
int yylex(void);
int sym[26],store[100];
int var,check;
float degree = 3.1416/180;


/* Line 189 of yacc.c  */
#line 86 "1707110.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
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
     START = 258,
     END = 259,
     NUM = 260,
     VAR = 261,
     PRINT = 262,
     INT = 263,
     FLOAT = 264,
     CHAR = 265,
     HI = 266,
     BYE = 267,
     MAIN = 268,
     NOT = 269,
     LOG10 = 270,
     LN = 271,
     REVERSE = 272,
     SIN = 273,
     COSEC = 274,
     COS = 275,
     SEC = 276,
     TAN = 277,
     COT = 278,
     FACTORIAL = 279,
     ROOT = 280,
     SUM = 281,
     TO = 282,
     MAX = 283,
     MIN = 284,
     GCD = 285,
     LCM = 286,
     FIBONACCI = 287,
     LEAP = 288,
     PALINDROME = 289,
     MUL = 290,
     WHILE = 291,
     FOR = 292,
     MOVE = 293,
     CASE = 294,
     BREAK = 295,
     DEFAULT = 296,
     IF = 297,
     ELSE = 298,
     ELSE_IF = 299,
     INC = 300,
     DEC = 301,
     MULC = 302,
     DIVC = 303,
     POWC = 304,
     GREATER_THAN = 305,
     LESS_THAN = 306,
     IFX = 307,
     ELSE_IFX = 308
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 181 "1707110.tab.c"

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
#define YYLAST   752

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  68
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  15
/* YYNRULES -- Number of rules.  */
#define YYNRULES  90
/* YYNRULES -- Number of states.  */
#define YYNSTATES  302

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   308

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,    66,     2,     2,
      64,    65,    58,    56,    62,    57,     2,    59,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    60,    61,
      54,    63,    55,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,    67,     2,     2,     2,     2,     2,
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
      45,    46,    47,    48,    49,    50,    51,    52,    53
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     9,    10,    13,    16,    20,    22,    24,
      26,    30,    32,    34,    37,    42,    48,    50,    52,    54,
      63,    84,   105,   126,   147,   161,   175,   189,   203,   217,
     228,   239,   250,   258,   260,   262,   266,   270,   274,   278,
     282,   286,   289,   292,   295,   298,   303,   308,   310,   313,
     316,   324,   331,   345,   367,   369,   371,   375,   379,   383,
     387,   391,   395,   399,   403,   407,   411,   414,   417,   420,
     423,   427,   431,   436,   441,   444,   449,   454,   457,   460,
     463,   467,   470,   473,   476,   479,   482,   485,   488,   491,
     495
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      69,     0,    -1,    13,    60,    11,    70,    12,    -1,    -1,
      70,    74,    -1,    70,    71,    -1,    72,    73,    61,    -1,
       8,    -1,     9,    -1,    10,    -1,    73,    62,     6,    -1,
       6,    -1,    61,    -1,    81,    61,    -1,     6,    63,    81,
      61,    -1,     7,    64,    81,    65,    61,    -1,    82,    -1,
      79,    -1,    80,    -1,    42,    64,    81,    65,     3,    81,
      61,     4,    -1,    42,    64,    81,    65,     3,    79,     4,
      44,    64,    81,    65,     3,    81,    61,     4,    43,     3,
      81,    61,     4,    -1,    42,    64,    81,    65,     3,    80,
       4,    44,    64,    81,    65,     3,    81,    61,     4,    43,
       3,    81,    61,     4,    -1,    42,    64,    81,    65,     3,
      81,    61,     4,    44,    64,    81,    65,     3,    79,     4,
      43,     3,    81,    61,     4,    -1,    42,    64,    81,    65,
       3,    81,    61,     4,    44,    64,    81,    65,     3,    80,
       4,    43,     3,    81,    61,     4,    -1,    37,     5,    27,
       5,    81,     3,     6,    63,     6,    45,     5,    61,     4,
      -1,    37,     5,    27,     5,    81,     3,     6,    63,     6,
      47,     5,    61,     4,    -1,    37,     5,    27,     5,    81,
       3,     6,    63,     6,    48,     5,    61,     4,    -1,    37,
       5,    27,     5,    81,     3,     6,    63,     6,    46,     5,
      61,     4,    -1,    37,     5,    27,     5,    81,     3,     6,
      63,     6,    49,     5,    61,     4,    -1,    36,    64,    75,
      55,    75,    65,     3,    81,    61,     4,    -1,    36,    64,
      75,    54,    75,    65,     3,    81,    61,     4,    -1,    36,
      64,    75,    14,    75,    65,     3,    81,    61,     4,    -1,
      38,    64,    75,    65,     3,    76,     4,    -1,     5,    -1,
       6,    -1,    75,    56,    75,    -1,    75,    57,    75,    -1,
      75,    58,    75,    -1,    75,    59,    75,    -1,    75,    66,
      75,    -1,    75,    67,    75,    -1,    25,    75,    -1,    75,
      45,    -1,    75,    46,    -1,    24,    75,    -1,    26,    75,
      27,    75,    -1,    35,    75,    27,    75,    -1,    77,    -1,
      77,    78,    -1,    77,    77,    -1,    39,     5,    60,    81,
      61,    40,    61,    -1,    41,    60,    81,    61,    40,    61,
      -1,    42,    64,    81,    65,     3,    81,    61,     4,    43,
       3,    81,    61,     4,    -1,    42,    64,    81,    65,     3,
      81,    61,     4,    44,    64,    81,    65,     3,    81,    61,
       4,    43,     3,    81,    61,     4,    -1,     5,    -1,     6,
      -1,     6,    63,    81,    -1,    81,    56,    81,    -1,    81,
      57,    81,    -1,    81,    58,    81,    -1,    81,    59,    81,
      -1,    81,    66,    81,    -1,    81,    67,    81,    -1,    81,
      54,    81,    -1,    81,    55,    81,    -1,    64,    81,    65,
      -1,    34,    81,    -1,    17,    81,    -1,    33,    81,    -1,
      24,    81,    -1,    28,    81,    81,    -1,    29,    81,    81,
      -1,    30,    81,    62,    81,    -1,    31,    81,    62,    81,
      -1,    32,    81,    -1,    26,    81,    27,    81,    -1,    35,
      81,    27,    81,    -1,    25,    81,    -1,    81,    45,    -1,
      81,    46,    -1,    81,    14,    81,    -1,    15,    81,    -1,
      16,    81,    -1,    18,    81,    -1,    19,    81,    -1,    20,
      81,    -1,    21,    81,    -1,    22,    81,    -1,    23,    81,
      -1,    81,    50,    81,    -1,    81,    51,    81,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    28,    28,    31,    32,    33,    36,    43,    44,    45,
      48,    52,    58,    59,    61,    67,    69,    72,    75,    78,
      84,    91,    98,   105,   112,   132,   143,   154,   165,   176,
     189,   202,   227,   231,   232,   233,   234,   235,   236,   237,
     238,   239,   240,   241,   242,   247,   252,   260,   261,   264,
     265,   273,   278,   290,   297,   298,   299,   300,   301,   302,
     303,   309,   315,   316,   317,   318,   322,   333,   343,   351,
     357,   362,   367,   373,   380,   394,   400,   406,   407,   408,
     409,   413,   414,   415,   416,   417,   418,   419,   420,   421,
     426
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "START", "END", "NUM", "VAR", "PRINT",
  "INT", "FLOAT", "CHAR", "HI", "BYE", "MAIN", "NOT", "LOG10", "LN",
  "REVERSE", "SIN", "COSEC", "COS", "SEC", "TAN", "COT", "FACTORIAL",
  "ROOT", "SUM", "TO", "MAX", "MIN", "GCD", "LCM", "FIBONACCI", "LEAP",
  "PALINDROME", "MUL", "WHILE", "FOR", "MOVE", "CASE", "BREAK", "DEFAULT",
  "IF", "ELSE", "ELSE_IF", "INC", "DEC", "MULC", "DIVC", "POWC",
  "GREATER_THAN", "LESS_THAN", "IFX", "ELSE_IFX", "'<'", "'>'", "'+'",
  "'-'", "'*'", "'/'", "':'", "';'", "','", "'='", "'('", "')'", "'%'",
  "'^'", "$accept", "program", "cstatement", "cdeclare", "TYPE", "ID",
  "statement", "S_VAR", "S_stmnt", "C", "D", "ifelse", "ifelifelse", "exp",
  "s_operations", 0
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,    60,    62,    43,    45,    42,    47,
      58,    59,    44,    61,    40,    41,    37,    94
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    68,    69,    70,    70,    70,    71,    72,    72,    72,
      73,    73,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    74,    74,    74,    74,    74,    74,    74,
      74,    74,    74,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    75,    75,    75,    75,    75,    76,    76,    77,
      77,    78,    79,    80,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82,    82,    82,    82,    82,    82,    82,    82,    82,    82,
      82
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     5,     0,     2,     2,     3,     1,     1,     1,
       3,     1,     1,     2,     4,     5,     1,     1,     1,     8,
      20,    20,    20,    20,    13,    13,    13,    13,    13,    10,
      10,    10,     7,     1,     1,     3,     3,     3,     3,     3,
       3,     2,     2,     2,     2,     4,     4,     1,     2,     2,
       7,     6,    13,    21,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     2,     2,
       3,     3,     4,     4,     2,     4,     4,     2,     2,     2,
       3,     2,     2,     2,     2,     2,     2,     2,     2,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     3,     0,    54,    55,     0,
       7,     8,     9,     2,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    12,     0,
       5,     0,     4,    17,    18,     0,    16,     0,     0,    55,
      81,    82,    67,    83,    84,    85,    86,    87,    88,    69,
      77,     0,     0,     0,     0,     0,    74,    68,    66,     0,
       0,     0,     0,     0,     0,    11,     0,     0,    78,    79,
       0,     0,     0,     0,     0,     0,     0,     0,    13,     0,
       0,    56,     0,     0,     0,    70,    71,     0,     0,     0,
      33,    34,     0,     0,     0,     0,     0,     0,     0,     0,
      65,     6,     0,    80,    89,    90,    63,    64,    57,    58,
      59,    60,    61,    62,    14,     0,    56,    75,    72,    73,
      76,    44,    41,     0,     0,     0,    42,    43,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,    10,
      15,     0,     0,     0,     0,     0,    35,    36,    37,    38,
      39,    40,     0,     0,     0,    45,    46,     0,     0,     0,
       0,     0,     0,    47,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,    49,    48,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      19,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    31,    30,    29,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,    51,     0,     0,     0,     0,
       0,    24,    27,    25,    26,    28,     0,     0,     0,    52,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    20,    21,    22,    23,
       0,    53
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     2,     6,    40,    41,    76,    42,   106,   172,   185,
     186,    43,    44,   266,    46
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -164
static const yytype_int16 yypact[] =
{
      18,    -5,    58,    52,  -164,  -164,   273,  -164,     5,    -3,
    -164,  -164,  -164,  -164,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    21,    81,    31,    32,  -164,     0,
    -164,    93,  -164,  -164,  -164,    -7,  -164,     0,     0,    61,
     685,   685,   685,   685,   685,   685,   685,   685,   685,   685,
     685,   129,    64,    64,   169,   321,   685,   685,   685,   151,
     224,   100,   224,     0,   335,  -164,   -27,     0,  -164,  -164,
       0,     0,     0,     0,     0,     0,     0,     0,  -164,     0,
       0,   349,   363,     0,     0,   685,   685,     0,     0,     0,
    -164,  -164,   224,   224,   224,   224,    80,   124,   206,   377,
    -164,  -164,   126,   685,   685,   685,   109,   109,   -30,   -30,
     -21,   -21,   685,   685,  -164,    72,   685,   685,   685,   685,
     685,    44,    44,   155,   188,   224,  -164,  -164,   224,   224,
     224,   224,   224,   224,   224,   224,     0,   138,   141,  -164,
    -164,   224,   224,   274,   290,   305,   307,   307,    97,    97,
      44,    44,    50,   118,    -2,    44,    44,   156,   157,   166,
     164,   172,   167,    -9,   115,   176,   187,   391,     0,     0,
       0,   130,   132,  -164,   134,   118,  -164,     0,   153,   154,
     195,   405,   419,   433,   198,     0,     0,   447,   168,   173,
      22,   234,   235,   236,   221,   461,   475,   240,     0,     0,
     250,   192,  -164,  -164,  -164,   252,   253,   255,   281,   282,
     260,   272,     0,   489,   503,     0,     0,   256,   257,   261,
     262,   263,   264,   265,   517,   310,   311,   531,   545,   312,
     317,   323,   324,   325,  -164,  -164,   334,     0,     0,   338,
     340,  -164,  -164,  -164,  -164,  -164,    29,   559,   573,  -164,
      -2,   280,   341,   350,   354,   355,   587,     0,   326,   339,
     342,   343,   356,   601,   364,   365,   378,   381,   352,   393,
       0,     0,     0,     0,   394,     0,   615,   629,   643,   657,
       0,   395,   407,   408,   409,   671,  -164,  -164,  -164,  -164,
     410,  -164
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -164,  -164,  -164,  -164,  -164,  -164,  -164,    10,  -164,   246,
    -164,  -163,  -162,    -6,  -164
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      45,   175,   176,     7,    49,     7,    49,    77,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    86,    87,
     171,     1,   184,    74,   111,   112,    89,    90,    78,    79,
     174,    91,    92,    80,    81,    89,    90,    82,    83,    84,
      85,    86,    87,   170,    88,     3,    95,    96,     4,    89,
      90,    48,    39,     5,    39,   210,   211,   109,    47,     7,
      49,   113,   210,   261,   114,   115,   116,   117,   118,   119,
     120,   121,   108,   122,   123,    70,    71,   126,   127,   136,
     137,   128,   129,   130,   135,    72,    73,   264,   265,    75,
     140,   141,   142,   143,    82,    83,    84,    85,    86,    87,
     144,   145,   131,   132,   133,   134,    89,    90,    82,    83,
      84,    85,    86,    87,    93,   136,   137,   107,    39,   146,
      89,    90,   149,   150,   138,   139,   140,   141,   142,   143,
     162,   163,   136,   137,   164,   153,   144,   145,   154,   155,
     156,   157,   158,   159,   160,   161,    94,   171,   177,   178,
     179,   165,   166,   144,   145,    84,    85,    86,    87,   180,
     181,   183,   191,   192,   193,    89,    90,   182,    99,   187,
     188,   197,   151,    82,    83,    84,    85,    86,    87,   205,
     206,   189,   195,   194,   196,    89,    90,   198,   199,   200,
     136,   137,   223,   224,   204,    82,    83,    84,    85,    86,
      87,   140,   141,   142,   143,   152,   234,    89,    90,   237,
     238,   144,   145,    82,    83,    84,    85,    86,    87,   100,
     101,    97,   208,   136,   137,    89,    90,   209,   212,   213,
     214,   257,   258,   222,   140,   141,   142,   143,   102,   103,
     104,   136,   137,   225,   144,   145,   226,   227,   228,   105,
     229,   273,   140,   141,   142,   143,   215,   216,   217,   218,
     219,   147,   144,   145,   286,   287,   288,   289,     7,     8,
       9,    10,    11,    12,   295,    13,   230,   231,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
     232,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,   233,   247,   248,    37,   251,   239,   240,   136,
     137,   252,   241,   242,   243,   244,   245,   253,   254,   255,
     140,   141,   142,   143,    38,   136,   137,    39,   256,   167,
     144,   145,   259,   260,   267,   268,   140,   141,   142,   143,
     136,   137,   136,   137,   269,   168,   144,   145,   270,   271,
     278,   140,   141,   142,   143,   142,   143,   280,   281,   274,
     169,   144,   145,   144,   145,    82,    83,    84,    85,    86,
      87,   282,   275,    98,   283,   276,   277,    89,    90,    82,
      83,    84,    85,    86,    87,   284,   285,   290,     0,   296,
     110,    89,    90,    82,    83,    84,    85,    86,    87,   173,
     124,   297,   298,   299,   301,    89,    90,    82,    83,    84,
      85,    86,    87,     0,     0,     0,     0,     0,   125,    89,
      90,    82,    83,    84,    85,    86,    87,     0,     0,     0,
       0,     0,   148,    89,    90,    82,    83,    84,    85,    86,
      87,     0,   190,     0,     0,     0,     0,    89,    90,    82,
      83,    84,    85,    86,    87,     0,   201,     0,     0,     0,
       0,    89,    90,    82,    83,    84,    85,    86,    87,     0,
     202,     0,     0,     0,     0,    89,    90,    82,    83,    84,
      85,    86,    87,     0,   203,     0,     0,     0,     0,    89,
      90,    82,    83,    84,    85,    86,    87,     0,     0,     0,
       0,     0,   207,    89,    90,    82,    83,    84,    85,    86,
      87,     0,   220,     0,     0,     0,     0,    89,    90,    82,
      83,    84,    85,    86,    87,     0,   221,     0,     0,     0,
       0,    89,    90,    82,    83,    84,    85,    86,    87,     0,
       0,     0,     0,     0,   235,    89,    90,    82,    83,    84,
      85,    86,    87,     0,     0,     0,     0,     0,   236,    89,
      90,    82,    83,    84,    85,    86,    87,     0,   246,     0,
       0,     0,     0,    89,    90,    82,    83,    84,    85,    86,
      87,     0,   249,     0,     0,     0,     0,    89,    90,    82,
      83,    84,    85,    86,    87,     0,     0,     0,     0,     0,
     250,    89,    90,    82,    83,    84,    85,    86,    87,     0,
     262,     0,     0,     0,     0,    89,    90,    82,    83,    84,
      85,    86,    87,     0,   263,     0,     0,     0,     0,    89,
      90,    82,    83,    84,    85,    86,    87,     0,   272,     0,
       0,     0,     0,    89,    90,    82,    83,    84,    85,    86,
      87,     0,     0,     0,     0,     0,   279,    89,    90,    82,
      83,    84,    85,    86,    87,     0,   291,     0,     0,     0,
       0,    89,    90,    82,    83,    84,    85,    86,    87,     0,
     292,     0,     0,     0,     0,    89,    90,    82,    83,    84,
      85,    86,    87,     0,   293,     0,     0,     0,     0,    89,
      90,    82,    83,    84,    85,    86,    87,     0,   294,     0,
       0,     0,     0,    89,    90,    82,    83,    84,    85,    86,
      87,     0,   300,     0,     0,     0,     0,    89,    90,    82,
      83,    84,    85,    86,    87,     0,     0,     0,     0,     0,
       0,    89,    90
};

static const yytype_int16 yycheck[] =
{
       6,   164,   164,     5,     6,     5,     6,    14,    14,    15,
      16,    17,    18,    19,    20,    21,    22,    23,    24,    25,
      26,    27,    28,    29,    30,    31,    32,    33,    58,    59,
      39,    13,    41,    39,    61,    62,    66,    67,    45,    46,
      42,    47,    48,    50,    51,    66,    67,    54,    55,    56,
      57,    58,    59,     3,    61,    60,    62,    63,     0,    66,
      67,    64,    64,    11,    64,    43,    44,    73,    63,     5,
       6,    77,    43,    44,    80,    81,    82,    83,    84,    85,
      86,    87,    72,    89,    90,    64,     5,    93,    94,    45,
      46,    97,    98,    99,    14,    64,    64,   260,   260,     6,
      56,    57,    58,    59,    54,    55,    56,    57,    58,    59,
      66,    67,   102,   103,   104,   105,    66,    67,    54,    55,
      56,    57,    58,    59,    63,    45,    46,    27,    64,     5,
      66,    67,     6,    61,    54,    55,    56,    57,    58,    59,
     146,     3,    45,    46,     3,   135,    66,    67,   138,   139,
     140,   141,   142,   143,   144,   145,    27,    39,   164,     3,
       3,   151,   152,    66,    67,    56,    57,    58,    59,     3,
       6,     4,   178,   179,   180,    66,    67,     5,    27,    64,
       4,   187,    27,    54,    55,    56,    57,    58,    59,   195,
     196,     4,    60,    63,    60,    66,    67,    44,    44,     4,
      45,    46,   208,   209,     6,    54,    55,    56,    57,    58,
      59,    56,    57,    58,    59,    27,   222,    66,    67,   225,
     226,    66,    67,    54,    55,    56,    57,    58,    59,     5,
       6,    62,    64,    45,    46,    66,    67,    64,     4,     4,
       4,   247,   248,     3,    56,    57,    58,    59,    24,    25,
      26,    45,    46,     3,    66,    67,    64,     5,     5,    35,
       5,   267,    56,    57,    58,    59,    45,    46,    47,    48,
      49,    65,    66,    67,   280,   281,   282,   283,     5,     6,
       7,     8,     9,    10,   290,    12,     5,     5,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      40,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    40,     3,     3,    42,     4,    61,    61,    45,
      46,     4,    61,    61,    61,    61,    61,     4,     4,     4,
      56,    57,    58,    59,    61,    45,    46,    64,     4,    65,
      66,    67,     4,     3,    64,     4,    56,    57,    58,    59,
      45,    46,    45,    46,     4,    65,    66,    67,     4,     4,
       4,    56,    57,    58,    59,    58,    59,     3,     3,    43,
      65,    66,    67,    66,    67,    54,    55,    56,    57,    58,
      59,     3,    43,    62,     3,    43,    43,    66,    67,    54,
      55,    56,    57,    58,    59,    43,     3,     3,    -1,     4,
      65,    66,    67,    54,    55,    56,    57,    58,    59,   163,
      61,     4,     4,     4,     4,    66,    67,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    54,    55,    56,    57,    58,
      59,    -1,    61,    -1,    -1,    -1,    -1,    66,    67,    54,
      55,    56,    57,    58,    59,    -1,    61,    -1,    -1,    -1,
      -1,    66,    67,    54,    55,    56,    57,    58,    59,    -1,
      61,    -1,    -1,    -1,    -1,    66,    67,    54,    55,    56,
      57,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,
      67,    54,    55,    56,    57,    58,    59,    -1,    -1,    -1,
      -1,    -1,    65,    66,    67,    54,    55,    56,    57,    58,
      59,    -1,    61,    -1,    -1,    -1,    -1,    66,    67,    54,
      55,    56,    57,    58,    59,    -1,    61,    -1,    -1,    -1,
      -1,    66,    67,    54,    55,    56,    57,    58,    59,    -1,
      -1,    -1,    -1,    -1,    65,    66,    67,    54,    55,    56,
      57,    58,    59,    -1,    -1,    -1,    -1,    -1,    65,    66,
      67,    54,    55,    56,    57,    58,    59,    -1,    61,    -1,
      -1,    -1,    -1,    66,    67,    54,    55,    56,    57,    58,
      59,    -1,    61,    -1,    -1,    -1,    -1,    66,    67,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      65,    66,    67,    54,    55,    56,    57,    58,    59,    -1,
      61,    -1,    -1,    -1,    -1,    66,    67,    54,    55,    56,
      57,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,
      67,    54,    55,    56,    57,    58,    59,    -1,    61,    -1,
      -1,    -1,    -1,    66,    67,    54,    55,    56,    57,    58,
      59,    -1,    -1,    -1,    -1,    -1,    65,    66,    67,    54,
      55,    56,    57,    58,    59,    -1,    61,    -1,    -1,    -1,
      -1,    66,    67,    54,    55,    56,    57,    58,    59,    -1,
      61,    -1,    -1,    -1,    -1,    66,    67,    54,    55,    56,
      57,    58,    59,    -1,    61,    -1,    -1,    -1,    -1,    66,
      67,    54,    55,    56,    57,    58,    59,    -1,    61,    -1,
      -1,    -1,    -1,    66,    67,    54,    55,    56,    57,    58,
      59,    -1,    61,    -1,    -1,    -1,    -1,    66,    67,    54,
      55,    56,    57,    58,    59,    -1,    -1,    -1,    -1,    -1,
      -1,    66,    67
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    69,    60,     0,    11,    70,     5,     6,     7,
       8,     9,    10,    12,    15,    16,    17,    18,    19,    20,
      21,    22,    23,    24,    25,    26,    28,    29,    30,    31,
      32,    33,    34,    35,    36,    37,    38,    42,    61,    64,
      71,    72,    74,    79,    80,    81,    82,    63,    64,     6,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    81,    81,    81,    81,    81,    81,
      64,     5,    64,    64,    81,     6,    73,    14,    45,    46,
      50,    51,    54,    55,    56,    57,    58,    59,    61,    66,
      67,    81,    81,    63,    27,    81,    81,    62,    62,    27,
       5,     6,    24,    25,    26,    35,    75,    27,    75,    81,
      65,    61,    62,    81,    81,    81,    81,    81,    81,    81,
      81,    81,    81,    81,    61,    65,    81,    81,    81,    81,
      81,    75,    75,    75,    75,    14,    45,    46,    54,    55,
      56,    57,    58,    59,    66,    67,     5,    65,    65,     6,
      61,    27,    27,    75,    75,    75,    75,    75,    75,    75,
      75,    75,    81,     3,     3,    75,    75,    65,    65,    65,
       3,    39,    76,    77,    42,    79,    80,    81,     3,     3,
       3,     6,     5,     4,    41,    77,    78,    64,     4,     4,
      61,    81,    81,    81,    63,    60,    60,    81,    44,    44,
       4,    61,    61,    61,     6,    81,    81,    65,    64,    64,
      43,    44,     4,     4,     4,    45,    46,    47,    48,    49,
      61,    61,     3,    81,    81,     3,    64,     5,     5,     5,
       5,     5,    40,    40,    81,    65,    65,    81,    81,    61,
      61,    61,    61,    61,    61,    61,    61,     3,     3,    61,
      65,     4,     4,     4,     4,     4,     4,    81,    81,     4,
       3,    44,    61,    61,    79,    80,    81,    64,     4,     4,
       4,     4,    61,    81,    43,    43,    43,    43,     4,    65,
       3,     3,     3,     3,    43,     3,    81,    81,    81,    81,
       3,    61,    61,    61,    61,    81,     4,     4,     4,     4,
      61,     4
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
#line 28 "1707110.y"
    { printf("\nWOOOHHOOOOOO \nOperation Successful \n"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 36 "1707110.y"
    { 
	if((yyvsp[(1) - (3)])==1) printf("Valid declare for Int type\n"); 
	else if((yyvsp[(1) - (3)])==2)	printf("Valid declare for Float type\n");
	else			printf("Valid declare for Char type\n");
	;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 43 "1707110.y"
    { (yyval) = 1; ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 44 "1707110.y"
    { (yyval) = 2; ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 48 "1707110.y"
    {
		if(store[(yyvsp[(3) - (3)])]==1)	printf("%c variable is already declared \n",(yyvsp[(3) - (3)]));
		else				store[(yyvsp[(3) - (3)])]=1;
	;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 52 "1707110.y"
    { 
		if(store[(yyvsp[(1) - (1)])]==1)	printf("%c variable is already declared \n",(yyvsp[(1) - (1)]));
		else				store[(yyvsp[(1) - (1)])]=1;
	;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 59 "1707110.y"
    { printf("Value of Operation: %d\n", (yyvsp[(1) - (2)])); (yyval)=(yyvsp[(1) - (2)]); var=(yyval); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 61 "1707110.y"
    { 
		sym[(yyvsp[(1) - (4)])] = (yyvsp[(3) - (4)]); 
		printf("Value of the variable: %d\t\n",(yyvsp[(3) - (4)]));
		(yyval)=(yyvsp[(3) - (4)]);
	;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 67 "1707110.y"
    { printf("Value is : %d\n",(yyvsp[(3) - (5)]),(yyvsp[(3) - (5)])); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 78 "1707110.y"
    {
		if((yyvsp[(3) - (8)]))				printf("Value of expression in JODI: %d\n",(yyvsp[(6) - (8)]));
		else				printf("Condition is not true in JODI block\n");
		;}
    break;

  case 20:

/* Line 1455 of yacc.c  */
#line 84 "1707110.y"
    {
		if((yyvsp[(3) - (20)]))				printf("");
		else if((yyvsp[(11) - (20)]))		printf("Value of expression in NAHOY_JODI : %d\n",(yyvsp[(14) - (20)]));
		else				printf("Value of expression in NAHOY : %d\n",(yyvsp[(18) - (20)]));
	;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 91 "1707110.y"
    {
		if((yyvsp[(3) - (20)]))				printf(""); 
		else if((yyvsp[(11) - (20)]))		printf("Value of expression in NAHOY_JODI : %d\n",(yyvsp[(14) - (20)]));
		else				printf("Value of expression in NAHOY : %d\n",(yyvsp[(18) - (20)]));
	;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 98 "1707110.y"
    {
		if((yyvsp[(3) - (20)]))				printf("Value of expression in JODI : %d\n",(yyvsp[(6) - (20)]));
		else if((yyvsp[(11) - (20)]))		printf("");
		else				printf("Value of expression in NAHOY : %d\n",(yyvsp[(18) - (20)]));
	;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 105 "1707110.y"
    {
		if((yyvsp[(3) - (20)]))				printf("Value of expression in JODI : %d\n",(yyvsp[(6) - (20)]));
		else if((yyvsp[(11) - (20)]))		printf("");
		else				printf("Value of expression in NAHOY : %d\n",(yyvsp[(18) - (20)]));
	;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 112 "1707110.y"
    {
		int i,j=(yyvsp[(5) - (13)]),first=(yyvsp[(2) - (13)]),last=(yyvsp[(4) - (13)]);
		printf("\n");
		if(first<last){
			for(i=(yyvsp[(2) - (13)]);i<=(yyvsp[(4) - (13)]);i++) {
			j = j+(yyvsp[(11) - (13)]);
			printf("For Loop statement for %d : %d\n",i,j);
			}
		}
		else{
			for(i=(yyvsp[(4) - (13)]);i<=(yyvsp[(2) - (13)]);i++) {
			j = j+(yyvsp[(11) - (13)]);
			printf("For Loop statement for %d : %d\n",i,j);
			}
		}
		
		printf("FOR LOOP DONE FOR PLUS\n");
	;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 132 "1707110.y"
    {
		int i,j=(yyvsp[(5) - (13)]);
		printf("\n");
		for(i=(yyvsp[(2) - (13)]);i<=(yyvsp[(4) - (13)]);i++) {
			j = j*(yyvsp[(11) - (13)]);
			printf("For Loop statement for %d : %d\n",i,j);
		}
		printf("FOR LOOP DONE MULTIPLICATION\n");
	;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 143 "1707110.y"
    {
		int i,j=(yyvsp[(5) - (13)]);
		printf("\n");
		for(i=(yyvsp[(2) - (13)]);i<=(yyvsp[(4) - (13)]);i++) {
			j = j/(yyvsp[(11) - (13)]);
			printf("For Loop statement for %d : %d\n",i,j);
		}
		printf("FOR LOOP DONE DIVISION\n");
	;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 154 "1707110.y"
    {
		int i,j=(yyvsp[(5) - (13)]);
		printf("\n");
		for(i=(yyvsp[(2) - (13)]);i<=(yyvsp[(4) - (13)]);i++) {
			j = j-(yyvsp[(11) - (13)]);
			printf("For Loop statement for %d : %d\n",i,j);
		}
		printf("FOR LOOP DONE FOR MINUS\n");
	;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 165 "1707110.y"
    {
		int i,j=(yyvsp[(5) - (13)]);
		printf("\n");
		for(i=(yyvsp[(2) - (13)]);i<=(yyvsp[(4) - (13)]);i++) {
			j = pow(j,(yyvsp[(11) - (13)]));
			printf("For Loop statement for %d : %d\n",i,j);
		}
		printf("FOR LOOP DONE FOR POWER\n");
	;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 176 "1707110.y"
    { 
		if((yyvsp[(3) - (10)])>(yyvsp[(5) - (10)])){
			printf("While condition is true for greater than sign.\nWHILE loop no :\n");
			int last=(yyvsp[(5) - (10)]);
			while((yyvsp[(3) - (10)])>last){
				printf("%d\n",last);
				last++;
			}
			printf("WHILE LOOP DONE DONE DONE\nResult is %d\n\n",(yyvsp[(8) - (10)]));
		}
	;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 189 "1707110.y"
    { 
		if((yyvsp[(3) - (10)])<(yyvsp[(5) - (10)])){
			printf("While condition is true for less than sign.\nWHILE loop no :\n");
			int first=(yyvsp[(3) - (10)]);
			while(first<(yyvsp[(5) - (10)])){
				printf("%d\n",first);
				first++;
			}
			printf("WHILE LOOP DONE DONE DONE\nResult is %d\n\n",(yyvsp[(8) - (10)]));
		}
	;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 202 "1707110.y"
    { 
		if((yyvsp[(3) - (10)])!=(yyvsp[(5) - (10)])){
			printf("While condition is true for not sign.\n");
			if((yyvsp[(3) - (10)])>(yyvsp[(5) - (10)])){
				printf("FIRST one is greater than the SECOND.\nWHILE loop no :\n");
				int last=(yyvsp[(5) - (10)]);
				while((yyvsp[(3) - (10)])>last){
					printf("%d\n",last);
					last++;
				}
				printf("WHILE LOOP DONE DONE DONE\nResult is %d\n\n",(yyvsp[(8) - (10)]));
			}
			else{
				printf("SECOND one is greater than the FIRST.\nWHILE loop no :\n");
				int first=(yyvsp[(3) - (10)]);
				while(first<(yyvsp[(5) - (10)])){
					printf("%d\n",first);
					first++;
				}
				printf("WHILE LOOP DONE DONE DONE\nResult is %d\n\n",(yyvsp[(8) - (10)]));
			}
		}
	;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 227 "1707110.y"
    { printf("SWITCH LOOP DONE DONE DONE\n\n"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 231 "1707110.y"
    { var = (yyvsp[(1) - (1)]); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 232 "1707110.y"
    { (yyval) = sym[(yyvsp[(1) - (1)])]; var = (yyval); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 233 "1707110.y"
    { var = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 234 "1707110.y"
    { var = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 235 "1707110.y"
    { var = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 236 "1707110.y"
    { if((yyvsp[(3) - (3)]))	var = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]); else	var = 0; ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 237 "1707110.y"
    { if((yyvsp[(3) - (3)]))	var = (yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]); else	var = 0; ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 238 "1707110.y"
    { var = pow((yyvsp[(1) - (3)]) , (yyvsp[(3) - (3)])); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 239 "1707110.y"
    { (yyval) = sqrt((yyvsp[(2) - (2)])); var = (yyval); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 240 "1707110.y"
    { var = (yyvsp[(1) - (2)]) + 1; ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 241 "1707110.y"
    { var = (yyvsp[(1) - (2)]) - 1; ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 242 "1707110.y"
    {
			int start_from=1,i=1;
			for(i=1;i<=(yyvsp[(2) - (2)]);i++) start_from = start_from*i;
			var = start_from; 
			;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 247 "1707110.y"
    {
			int i,initially = 0;
			for(i=(yyvsp[(2) - (4)]);i<=(yyvsp[(4) - (4)]);i++) initially = initially + i;
			var=initially;
			;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 252 "1707110.y"
    {
			int i, initially = 1;
			for(i=(yyvsp[(2) - (4)]);i<=(yyvsp[(4) - (4)]);i++) initially = initially * i;
			var=initially;
			;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 265 "1707110.y"
    {
			if(var == (yyvsp[(2) - (7)])){
			printf("\nCASE no : %d and the Output is : %d\n",(yyvsp[(2) - (7)]),(yyvsp[(4) - (7)]));
			check=1;
			}
	;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 273 "1707110.y"
    {
			if(check!=1)	printf("\nDefault value is : %d\n",(yyvsp[(3) - (6)]));
	;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 278 "1707110.y"
    {
			if((yyvsp[(3) - (13)])){
				printf("Value of expression in JODI: %d\n",(yyvsp[(6) - (13)]));
				(yyval) = (yyvsp[(6) - (13)]);
			}
			else{
				printf("Value of expression in NAHOY: %d\n",(yyvsp[(11) - (13)]));
				(yyval) = (yyvsp[(11) - (13)]);
			}
	;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 290 "1707110.y"
    {
				if((yyvsp[(3) - (21)]))			printf("Value of expression in JODI : %d\n",(yyvsp[(6) - (21)]));
				else if((yyvsp[(11) - (21)]))	printf("Value of expression in NAHOY_JODI : %d\n",(yyvsp[(14) - (21)]));
				else			printf("Value of expression in NAHOY : %d\n",(yyvsp[(19) - (21)]));
	;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 298 "1707110.y"
    { (yyval) = sym[(yyvsp[(1) - (1)])]; ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 299 "1707110.y"
    { (yyval) = (yyvsp[(3) - (3)]); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 300 "1707110.y"
    { (yyval) = (yyvsp[(1) - (3)]) + (yyvsp[(3) - (3)]); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 301 "1707110.y"
    { (yyval) = (yyvsp[(1) - (3)]) - (yyvsp[(3) - (3)]); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 302 "1707110.y"
    { (yyval) = (yyvsp[(1) - (3)]) * (yyvsp[(3) - (3)]); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 303 "1707110.y"
    {
		if((yyvsp[(3) - (3)])) (yyval) = (yyvsp[(1) - (3)]) / (yyvsp[(3) - (3)]);
  		else{
     			(yyval) = 0;
     			printf("Divided by 0\t"); }
    	;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 309 "1707110.y"
    { 
		if((yyvsp[(3) - (3)])) (yyval) = (yyvsp[(1) - (3)]) % (yyvsp[(3) - (3)]);
		else{
			(yyval) = 0;
			printf("Mod by zero\t"); } 	
		;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 315 "1707110.y"
    { (yyval) = pow((yyvsp[(1) - (3)]) , (yyvsp[(3) - (3)])); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 316 "1707110.y"
    { (yyval) = (yyvsp[(1) - (3)]) < (yyvsp[(3) - (3)]); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 317 "1707110.y"
    { (yyval) = (yyvsp[(1) - (3)]) > (yyvsp[(3) - (3)]); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 318 "1707110.y"
    { (yyval) = (yyvsp[(2) - (3)]); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 322 "1707110.y"
    {
		int flip = 0,reminder,n=(yyvsp[(2) - (2)]);
		while ((yyvsp[(2) - (2)])>0) {
			reminder = (yyvsp[(2) - (2)]) % 10;
			flip = (flip * 10)+reminder;
			(yyvsp[(2) - (2)]) = (yyvsp[(2) - (2)]) / 10;
		}
		if (n == flip)		printf("%d is a palindrome number.\n", n);
		else				printf("%d is not a palindrome number.\n", n);
	;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 333 "1707110.y"
    {
		int r=0;
		while((yyvsp[(2) - (2)])!=0){
			r = r * 10;
			r = r + (yyvsp[(2) - (2)])%10;
			(yyvsp[(2) - (2)]) = (yyvsp[(2) - (2)])/10;
		}
		printf("Reverse of the number = %d\n", r);
	;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 343 "1707110.y"
    {
		int year=(yyvsp[(2) - (2)]);
		if((yyvsp[(2) - (2)])%400 == 0)			printf("%d is a LEAP YEAR.\n",(yyvsp[(2) - (2)]));
		else if((yyvsp[(2) - (2)])%100 == 0)	printf("%d is not a LEAP YEAR.\n",(yyvsp[(2) - (2)]));
		else if((yyvsp[(2) - (2)])%4 == 0)		printf("%d is a LEAP YEAR.\n",(yyvsp[(2) - (2)]));
		else					printf("%d is not a LEAP YEAR.\n",(yyvsp[(2) - (2)]));
	;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 351 "1707110.y"
    {
		int start_from=1,i=1;
		for(i=1;i<=(yyvsp[(2) - (2)]);i++)		start_from = start_from*i;
		(yyval) = start_from;
		printf("Factorial of %d : %d\n",(yyvsp[(2) - (2)]),(yyval));
	;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 357 "1707110.y"
    {
		if((yyvsp[(2) - (3)])>(yyvsp[(3) - (3)]))	(yyval) = (yyvsp[(2) - (3)]);
		else		(yyval) = (yyvsp[(3) - (3)]);
		printf("Maximum between %d and %d : %d\n",(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]),(yyval));
	;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 362 "1707110.y"
    {
		if((yyvsp[(2) - (3)])<(yyvsp[(3) - (3)]))	(yyval) = (yyvsp[(2) - (3)]);
		else		(yyval) = (yyvsp[(3) - (3)]);
		printf("Minimum between %d and %d : %d\n",(yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]),(yyval));
	;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 367 "1707110.y"
    {
		int i,gcd;
		for(i=1;i<=(yyvsp[(2) - (4)]);++i)
			if((yyvsp[(2) - (4)])%i==0 && (yyvsp[(4) - (4)])%i==0)	gcd = i;
		printf("G.C.D of %d and %d : %d\n", (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]), gcd);
	;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 373 "1707110.y"
    {
		int i,gcd,lcm;
		for(i=1;i<=(yyvsp[(2) - (4)]) && i<=(yyvsp[(4) - (4)]);++i)
			if((yyvsp[(2) - (4)])%i==0 && (yyvsp[(4) - (4)])%i==0)	gcd = i;
		lcm = ((yyvsp[(2) - (4)])*(yyvsp[(4) - (4)]))/gcd;
		printf("L.C.M of %d and %d : %d\n", (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]), lcm);
	;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 380 "1707110.y"
    {
		int i,t1=0,t2=1,n;
		n = (yyvsp[(2) - (2)])-2;
		int nextTerm = t1+t2;
		printf("Fibonacci Series : %d %d ",t1,t2);
		for(i=1;i<=n;++i){
			printf("%d ",nextTerm);
			t1 = t2;
			t2 = nextTerm;
			nextTerm = t1+t2;
		}
		printf("\n");
		(yyval) = (yyvsp[(2) - (2)]);
	;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 394 "1707110.y"
    {
		int i,initially = 0;
		for(i=(yyvsp[(2) - (4)]);i<=(yyvsp[(4) - (4)]);i++)		initially = initially + i;
		(yyval)=initially;
		printf("Summation of %d to %d : %d\n", (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]),(yyval));
	;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 400 "1707110.y"
    {
		int i,initially = 1;
		for(i=(yyvsp[(2) - (4)]);i<=(yyvsp[(4) - (4)]);i++)		initially = initially * i;
		(yyval)=initially;
		printf("Multiplication of %d to %d : %d\n", (yyvsp[(2) - (4)]), (yyvsp[(4) - (4)]),(yyval));
	;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 406 "1707110.y"
    { printf("Square root of %d = %d\n",(yyvsp[(2) - (2)]),sqrt((yyvsp[(2) - (2)]))); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 407 "1707110.y"
    { printf("Increment of %d = %d\n",(yyvsp[(1) - (2)]),(yyvsp[(1) - (2)])+1); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 408 "1707110.y"
    { printf("Decrement of %d = %d\n",(yyvsp[(1) - (2)]),(yyvsp[(1) - (2)])-1); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 409 "1707110.y"
    { 
		if((yyvsp[(1) - (3)])==(yyvsp[(3) - (3)]))		printf("%d is equals to %d	So the statement is wrong\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])); 
		else			printf("%d is not equals to %d	So the statement is true\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)])) 
	;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 413 "1707110.y"
    { printf("Value of Log10(%d) : %lf\n",(yyvsp[(2) - (2)]),log10((yyvsp[(2) - (2)]))); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 414 "1707110.y"
    { printf("Value of Ln(%d) : %lf\n",(yyvsp[(2) - (2)]),log((yyvsp[(2) - (2)]))); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 415 "1707110.y"
    { printf("Value of sin(%d) : %lf\n",(yyvsp[(2) - (2)]),sin((yyvsp[(2) - (2)])*degree)); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 416 "1707110.y"
    { printf("Value of cosec(%d) : %lf\n",(yyvsp[(2) - (2)]),1/sin((yyvsp[(2) - (2)])*degree)); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 417 "1707110.y"
    { printf("Value of cos(%d) : %lf\n",(yyvsp[(2) - (2)]),cos((yyvsp[(2) - (2)])*degree)); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 418 "1707110.y"
    { printf("Value of sec(%d) : %lf\n",(yyvsp[(2) - (2)]),1/cos((yyvsp[(2) - (2)])*degree)); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 419 "1707110.y"
    { printf("Value of tan(%d) : %lf\n",(yyvsp[(2) - (2)]),tan((yyvsp[(2) - (2)])*degree)); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 420 "1707110.y"
    { printf("Value of cot(%d) : %lf\n",(yyvsp[(2) - (2)]),1/tan((yyvsp[(2) - (2)])*degree)); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 421 "1707110.y"
    {
		if((yyvsp[(1) - (3)])>(yyvsp[(3) - (3)]))	printf("%d is greater than %d	So the statement is true.\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
		else	printf("%d is not greater than %d	So the statement is wrong.\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
	
	;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 426 "1707110.y"
    {
		if((yyvsp[(1) - (3)])<(yyvsp[(3) - (3)]))	printf("%d is less than %d So the statement is true.\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
		else	printf("%d is not less than %d So the statement is wrong.\n",(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));
	;}
    break;



/* Line 1455 of yacc.c  */
#line 2490 "1707110.tab.c"
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
#line 431 "1707110.y"


yyerror(char *s){
	printf( "%s\n", s);
}
