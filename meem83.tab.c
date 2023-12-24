
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
#line 1 "meem83.y"

#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <string.h>
#include <math.h>
void yyerror();
int yylex();
struct {
float tfloat;
int tint;
char *tstr;
}store[900];
int yylex(void);
int indexx=0;


/* Line 189 of yacc.c  */
#line 91 "meem83.tab.c"

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
     INT = 258,
     CHAR = 259,
     FLOAT = 260,
     Fun = 261,
     LB = 262,
     st = 263,
     et = 264,
     RB = 265,
     LP = 266,
     RP = 267,
     CM = 268,
     SM = 269,
     MAIN_FUNCTION = 270,
     ASSIGN = 271,
     PLUS = 272,
     MINUS = 273,
     MULT = 274,
     DIV = 275,
     GT = 276,
     LT = 277,
     Loop = 278,
     SWITCH = 279,
     CASE = 280,
     DEFAULT = 281,
     SHOW = 282,
     CC = 283,
     IF = 284,
     ELSE = 285,
     eo = 286,
     Multiply = 287,
     SUM = 288,
     IEC = 289,
     Prime = 290,
     powerf = 291,
     division = 292,
     YEAR = 293,
     FACTORIAL = 294,
     trigo = 295,
     sine = 296,
     cose = 297,
     tane = 298,
     incre = 299,
     decre = 300,
     lteq = 301,
     gteq = 302,
     and = 303,
     or = 304,
     equal = 305,
     notequal = 306,
     VARIABLE = 307,
     PNFLOAT = 308,
     PNINT = 309
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE
{

/* Line 214 of yacc.c  */
#line 19 "meem83.y"

int iv;
float fv;
char *sv;



/* Line 214 of yacc.c  */
#line 189 "meem83.tab.c"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 201 "meem83.tab.c"

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
#define YYLAST   1385

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  55
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  14
/* YYNRULES -- Number of rules.  */
#define YYNRULES  80
/* YYNRULES -- Number of states.  */
#define YYNSTATES  311

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   309

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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,    10,    11,    14,    18,    21,    25,    27,
      29,    31,    35,    37,    39,    43,    47,    51,    53,    57,
      61,    63,    66,    69,    99,   137,   183,   203,   209,   217,
     225,   234,   256,   270,   273,   279,   287,   293,   299,   307,
     313,   319,   325,   339,   355,   369,   374,   379,   384,   386,
     390,   394,   398,   402,   406,   410,   414,   417,   420,   424,
     428,   432,   436,   440,   444,   446,   448,   452,   456,   460,
     464,   468,   472,   476,   479,   482,   486,   490,   494,   498,
     502
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      56,     0,    -1,    15,     8,     9,     7,    57,    10,    -1,
      -1,    57,    58,    -1,    57,    62,    14,    -1,    57,    64,
      -1,    59,    60,    14,    -1,     3,    -1,     5,    -1,     4,
      -1,    60,    13,    61,    -1,    61,    -1,    52,    -1,    52,
      16,    53,    -1,    52,    16,    54,    -1,    62,    13,    63,
      -1,    63,    -1,    52,    16,    53,    -1,    52,    16,    54,
      -1,    14,    -1,    68,    14,    -1,    67,    14,    -1,    24,
      11,    68,    12,     7,    25,    68,    28,    27,    11,    68,
      12,    14,    25,    68,    28,    27,    11,    68,    12,    14,
      26,    28,    27,    11,    68,    12,    14,    10,    -1,    24,
      11,    68,    12,     7,    25,    68,    28,    27,    11,    68,
      12,    14,    25,    68,    28,    27,    11,    68,    12,    14,
      25,    68,    28,    27,    11,    68,    12,    14,    26,    28,
      27,    11,    68,    12,    14,    10,    -1,    24,    11,    68,
      12,     7,    25,    68,    28,    27,    11,    68,    12,    14,
      25,    68,    28,    27,    11,    68,    12,    14,    25,    68,
      28,    27,    11,    68,    12,    14,    25,    68,    28,    27,
      11,    68,    12,    14,    26,    28,    27,    11,    68,    12,
      14,    10,    -1,     6,    52,    11,    12,     7,    29,    11,
      68,    12,     7,    68,    14,    10,    30,     7,    68,    14,
      10,    10,    -1,    31,     8,    68,     9,    14,    -1,    32,
       8,    68,    13,    68,     9,    14,    -1,    33,     8,    68,
      13,    68,     9,    14,    -1,    29,    11,    68,    12,     7,
      68,    14,    10,    -1,    29,    11,    68,    12,     7,    29,
      11,    68,    12,     7,    68,    14,    10,    30,     7,    68,
      14,    10,    68,    14,    10,    -1,    29,    11,    68,    12,
       7,    68,    14,    10,    30,     7,    68,    14,    10,    -1,
      23,    65,    -1,    35,     8,    68,     9,    14,    -1,    36,
       8,    68,    13,    68,     9,    14,    -1,    39,     8,    68,
       9,    14,    -1,    38,     8,    68,     9,    14,    -1,    37,
       8,    68,    13,    68,     9,    14,    -1,    27,    11,    68,
      12,    14,    -1,    27,    11,    67,    12,    14,    -1,    40,
       8,    66,     9,    14,    -1,    11,    68,    13,    68,    12,
       7,    68,    16,    68,    19,    68,    14,    10,    -1,    11,
      68,    13,    68,    12,     7,    29,    11,    68,    12,     7,
      68,    14,    10,    10,    -1,    11,    68,    13,    68,    12,
       7,    68,    16,    68,    17,    68,    14,    10,    -1,    41,
      11,    68,    12,    -1,    42,    11,    68,    12,    -1,    43,
      11,    68,    12,    -1,    53,    -1,    67,    17,    67,    -1,
      67,    18,    67,    -1,    67,    19,    67,    -1,    67,    20,
      67,    -1,    67,    22,    67,    -1,    67,    21,    67,    -1,
      11,    67,    12,    -1,    67,    44,    -1,    67,    45,    -1,
      67,    46,    67,    -1,    67,    47,    67,    -1,    67,    49,
      67,    -1,    67,    48,    67,    -1,    67,    50,    67,    -1,
      67,    51,    67,    -1,    54,    -1,    52,    -1,    68,    17,
      68,    -1,    68,    18,    68,    -1,    68,    19,    68,    -1,
      68,    20,    68,    -1,    68,    22,    68,    -1,    68,    21,
      68,    -1,    11,    68,    12,    -1,    68,    44,    -1,    68,
      45,    -1,    68,    46,    68,    -1,    68,    47,    68,    -1,
      68,    49,    68,    -1,    68,    48,    68,    -1,    68,    50,
      68,    -1,    68,    51,    68,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    41,    41,    44,    45,    46,    47,    50,    53,    54,
      55,    58,    59,    62,    80,    99,   122,   123,   127,   145,
     165,   166,   168,   170,   184,   201,   223,   238,   253,   266,
     279,   290,   295,   309,   310,   331,   339,   351,   361,   376,
     377,   378,   383,   400,   405,   425,   431,   437,   446,   450,
     451,   452,   453,   463,   464,   465,   466,   467,   468,   469,
     470,   471,   472,   473,   475,   481,   496,   497,   498,   499,
     509,   510,   511,   512,   513,   514,   515,   516,   517,   518,
     519
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "CHAR", "FLOAT", "Fun", "LB",
  "st", "et", "RB", "LP", "RP", "CM", "SM", "MAIN_FUNCTION", "ASSIGN",
  "PLUS", "MINUS", "MULT", "DIV", "GT", "LT", "Loop", "SWITCH", "CASE",
  "DEFAULT", "SHOW", "CC", "IF", "ELSE", "eo", "Multiply", "SUM", "IEC",
  "Prime", "powerf", "division", "YEAR", "FACTORIAL", "trigo", "sine",
  "cose", "tane", "incre", "decre", "lteq", "gteq", "and", "or", "equal",
  "notequal", "VARIABLE", "PNFLOAT", "PNINT", "$accept", "program",
  "firststatement", "declaration", "TYPE", "ID", "id1", "assignop",
  "assign", "secondstatement", "list", "angle", "floatv", "expr", 0
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
     305,   306,   307,   308,   309
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    55,    56,    57,    57,    57,    57,    58,    59,    59,
      59,    60,    60,    61,    61,    61,    62,    62,    63,    63,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    64,    64,    64,    64,    64,    64,    64,    64,
      64,    64,    65,    65,    65,    66,    66,    66,    67,    67,
      67,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    67,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    68,
      68
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     6,     0,     2,     3,     2,     3,     1,     1,
       1,     3,     1,     1,     3,     3,     3,     1,     3,     3,
       1,     2,     2,    29,    37,    45,    19,     5,     7,     7,
       8,    21,    13,     2,     5,     7,     5,     5,     7,     5,
       5,     5,    13,    15,    13,     4,     4,     4,     1,     3,
       3,     3,     3,     3,     3,     3,     2,     2,     3,     3,
       3,     3,     3,     3,     1,     1,     3,     3,     3,     3,
       3,     3,     3,     2,     2,     3,     3,     3,     3,     3,
       3
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     1,     0,     3,     0,     8,    10,
       9,     0,     2,     0,    20,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    65,    48,
      64,     4,     0,     0,    17,     6,     0,     0,     0,    65,
       0,     0,     0,    33,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    13,     0,    12,
       0,     5,    22,     0,     0,     0,     0,     0,     0,    56,
      57,     0,     0,     0,     0,     0,     0,    21,     0,     0,
       0,     0,     0,     0,    73,    74,     0,     0,     0,     0,
       0,     0,     0,    55,    72,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    18,    19,     0,     0,     7,     0,    16,
       0,    49,    50,    51,    52,    54,    53,    58,    59,    61,
      60,    62,    63,    66,    67,    68,    69,    71,    70,    75,
      76,    78,    77,    79,    80,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    14,    15,    11,     0,     0,     0,    40,
      39,     0,    27,     0,     0,    34,     0,     0,    37,    36,
       0,     0,     0,    41,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    45,    46,    47,     0,     0,     0,     0,
       0,    28,    29,    35,    38,     0,     0,     0,     0,     0,
      30,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    66,    68,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    32,     0,     0,    44,    42,     0,     0,
       0,     0,     0,     0,     0,    43,     0,     0,     0,     0,
       0,     0,     0,     0,    26,     0,     0,     0,     0,     0,
      31,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    23,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    24,     0,     0,     0,     0,     0,     0,     0,
      25
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
      -1,     2,     7,    31,    32,    58,    59,    33,    34,    35,
      43,   112,    40,    41
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -38
static const yytype_int16 yypact[] =
{
       0,    17,    32,    27,   -38,    45,   -38,   198,   -38,   -38,
     -38,     7,   -38,    -4,   -38,    55,    59,    66,    67,    84,
      97,    98,   111,   112,   113,   114,   115,   116,   109,   -38,
     -38,   -38,    86,    -2,   -38,   -38,  1013,  1022,   133,   -38,
     426,   437,     3,   -38,     3,    -4,     3,     3,     3,     3,
       3,     3,     3,     3,     3,   -37,   -36,   139,     6,   -38,
      95,   -38,   -38,     5,     5,     5,     5,     5,     5,   -38,
     -38,     5,     5,     5,     5,     5,     5,   -38,     3,     3,
       3,     3,     3,     3,   -38,   -38,     3,     3,     3,     3,
       3,     3,   144,   -38,   -38,     3,   906,   477,   488,   528,
     539,    82,   945,   955,   149,   965,  1004,   256,   272,   146,
     152,   154,   163,   -38,   -38,   -32,    86,   -38,   109,   -38,
       5,   -18,   -18,   -21,   -21,   142,   142,   142,   142,    90,
      90,  1318,  1318,   131,   131,    18,    18,   240,   240,   240,
     240,    96,    96,  1326,  1326,   166,     3,   167,   164,   168,
     170,   169,     3,     3,   171,     3,     3,   174,   177,     3,
       3,     3,   193,   -38,   -38,   -38,   151,   579,   156,   -38,
     -38,    -1,   -38,   315,   329,   -38,   372,   386,   -38,   -38,
     590,   630,   641,   -38,   173,   204,     3,   205,  1060,   203,
     206,   209,   212,   -38,   -38,   -38,     3,     2,  1224,     3,
     218,   -38,   -38,   -38,   -38,   681,   221,  1189,   213,   692,
     214,   232,     3,     3,   231,   238,   241,     3,   732,  1334,
       3,     3,     3,  1069,   242,     3,     3,   743,  1078,  1116,
     237,     3,   -11,    16,   239,   244,   251,   233,  1125,   252,
     257,   243,   236,   -38,   262,   260,   -38,   -38,     3,   275,
       3,   269,  1236,     3,  1134,   -38,   259,  1172,   273,   284,
     286,   287,     3,     3,   -38,   783,  1181,   294,   288,    39,
     -38,     3,   281,  1271,   283,   285,   300,   302,     3,     3,
     794,   834,   301,   311,   304,    43,   -38,     3,   298,  1283,
     303,   312,   316,   317,     3,     3,   845,   885,   326,   327,
     319,   305,   -38,   314,   318,   332,     3,   896,   330,   342,
     -38
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -38,   -38,   -38,   -38,   -38,   -38,   253,   -38,   293,   -38,
     -38,   -38,    22,    -7
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
      37,    65,    66,   239,   109,   110,   111,    13,    80,    81,
      95,    60,    61,    95,    95,     1,   120,   113,   114,   116,
     117,   163,   164,    69,    70,     3,    69,    70,   187,    36,
     240,   206,     4,    84,    85,    96,     5,    97,    99,   100,
     101,   102,   103,   104,   105,   106,   107,   108,    39,    29,
      30,    39,     6,    30,    39,    39,    30,    30,    29,    38,
      84,    85,    84,    85,   271,   272,    42,    98,   287,   288,
      44,   133,   134,   135,   136,   137,   138,    45,    46,   139,
     140,   141,   142,   143,   144,   121,   122,   123,   124,   125,
     126,   151,    47,   127,   128,   129,   130,   131,   132,    78,
      79,    80,    81,    82,    83,    48,    49,    63,    64,    65,
      66,    67,    68,    78,    79,    80,    81,    82,    83,    50,
      51,    52,    53,    54,    55,    56,    84,    85,    86,    87,
      88,    89,    90,    91,    69,    70,    71,    72,    57,   167,
      84,    85,    86,    87,    92,   173,   174,   118,   176,   177,
      80,    81,   180,   181,   182,   115,   145,   159,   154,    63,
      64,    65,    66,   160,   188,   161,    78,    79,    80,    81,
      82,    83,   162,   166,   168,    84,    85,   171,   169,   198,
     184,   186,   170,   172,   196,   175,    69,    70,   178,   205,
     207,   179,   209,    84,    85,    86,    87,    88,    89,    90,
      91,     8,     9,    10,    11,   218,   219,   183,    12,    13,
     223,   197,    14,   227,   228,   229,   199,   201,   232,   233,
     202,    15,    16,   203,   238,    17,   204,    18,   210,    19,
      20,    21,   212,    22,    23,    24,    25,    26,    27,   217,
     214,   252,   220,   254,   216,   221,   257,   237,   222,   231,
      28,    29,    30,   241,   242,   265,   266,    78,    79,    80,
      81,   243,   246,   244,   273,   157,   249,   247,   248,   250,
     251,   280,   281,    78,    79,    80,    81,    82,    83,   255,
     289,   158,   253,   261,    84,    85,   259,   296,   297,    78,
      79,    80,    81,    82,    83,   262,   263,   264,   270,   307,
      84,    85,    86,    87,    88,    89,    90,    91,   269,   274,
     276,   278,   277,   279,   286,   284,    84,    85,    86,    87,
      88,    89,    90,    91,   189,   285,   290,   294,   295,   302,
     292,   303,    78,    79,    80,    81,    82,    83,   190,   293,
     300,   301,   304,   306,   309,   305,    78,    79,    80,    81,
      82,    83,   310,   119,     0,     0,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,     0,     0,   165,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    90,
      91,   191,     0,     0,     0,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,   192,     0,     0,     0,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,     0,     0,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    93,     0,
       0,     0,     0,    63,    64,    65,    66,    67,    68,    94,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      69,    70,    71,    72,    73,    74,    75,    76,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,   147,
       0,     0,     0,     0,    78,    79,    80,    81,    82,    83,
     148,     0,     0,     0,     0,    63,    64,    65,    66,    67,
      68,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    84,    85,    86,    87,    88,    89,    90,    91,     0,
       0,     0,    69,    70,    71,    72,    73,    74,    75,    76,
     149,     0,     0,     0,     0,    78,    79,    80,    81,    82,
      83,   150,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,    84,    85,    86,    87,    88,    89,    90,    91,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    90,
      91,   185,     0,     0,     0,     0,    78,    79,    80,    81,
      82,    83,   193,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,    84,    85,    86,    87,    88,    89,    90,
      91,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,   194,     0,     0,     0,     0,    78,    79,    80,
      81,    82,    83,   195,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    90,    91,   211,     0,     0,     0,     0,    78,    79,
      80,    81,    82,    83,   215,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    90,    91,     0,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,   224,     0,     0,     0,     0,    78,
      79,    80,    81,    82,    83,   234,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    91,   267,     0,     0,     0,     0,
      78,    79,    80,    81,    82,    83,   282,     0,     0,     0,
       0,    78,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    91,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,   283,     0,     0,     0,
       0,    78,    79,    80,    81,    82,    83,   298,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,     0,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,   299,     0,     0,
       0,     0,    78,    79,    80,    81,    82,    83,   308,     0,
       0,     0,     0,    78,    79,    80,    81,    82,    83,   146,
       0,     0,     0,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,   152,     0,
       0,     0,    78,    79,    80,    81,    82,    83,   153,     0,
       0,     0,    78,    79,    80,    81,    82,    83,   155,     0,
       0,     0,    78,    79,    80,    81,    82,    83,     0,    84,
      85,    86,    87,    88,    89,    90,    91,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,     0,     0,    84,
      85,    86,    87,    88,    89,    90,    91,   156,     0,     0,
       0,    78,    79,    80,    81,    82,    83,    62,     0,     0,
      63,    64,    65,    66,    67,    68,    77,     0,     0,    78,
      79,    80,    81,    82,    83,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,     0,    69,    70,    71,
      72,    73,    74,    75,    76,     0,    84,    85,    86,    87,
      88,    89,    90,    91,   200,     0,     0,    78,    79,    80,
      81,    82,    83,   230,     0,     0,    78,    79,    80,    81,
      82,    83,   235,     0,     0,    78,    79,    80,    81,    82,
      83,     0,     0,     0,    84,    85,    86,    87,    88,    89,
      90,    91,     0,    84,    85,    86,    87,    88,    89,    90,
      91,     0,    84,    85,    86,    87,    88,    89,    90,    91,
     236,     0,     0,    78,    79,    80,    81,    82,    83,   245,
       0,     0,    78,    79,    80,    81,    82,    83,   258,     0,
       0,    78,    79,    80,    81,    82,    83,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,     0,    84,
      85,    86,    87,    88,    89,    90,    91,     0,    84,    85,
      86,    87,    88,    89,    90,    91,   260,     0,     0,    78,
      79,    80,    81,    82,    83,   268,     0,     0,    78,    79,
      80,    81,    82,    83,     0,   213,    78,    79,    80,    81,
      82,    83,     0,     0,     0,     0,    84,    85,    86,    87,
      88,    89,    90,    91,     0,    84,    85,    86,    87,    88,
      89,    90,    91,    84,    85,    86,    87,    88,    89,    90,
      91,    78,    79,    80,    81,    82,    83,     0,     0,     0,
       0,     0,   208,    78,    79,    80,    81,    82,    83,     0,
       0,     0,     0,     0,   256,     0,     0,     0,    84,    85,
      86,    87,    88,    89,    90,    91,     0,     0,     0,     0,
      84,    85,    86,    87,    88,    89,    90,    91,    78,    79,
      80,    81,    82,    83,     0,     0,     0,     0,     0,   275,
      78,    79,    80,    81,    82,    83,     0,     0,     0,     0,
       0,   291,     0,     0,     0,    84,    85,    86,    87,    88,
      89,    90,    91,     0,     0,     0,     0,    84,    85,    86,
      87,    88,    89,    90,    91,    63,    64,    65,    66,    67,
      68,     0,     0,    78,    79,    80,    81,    82,    83,     0,
       0,   225,    79,   226,    81,    82,    83,     0,     0,     0,
       0,     0,    69,    70,    71,    72,    73,    74,    75,    76,
      84,    85,    86,    87,    88,    89,    90,    91,    84,    85,
      86,    87,    88,    89,    90,    91
};

static const yytype_int16 yycheck[] =
{
       7,    19,    20,    14,    41,    42,    43,    11,    19,    20,
      11,    13,    14,    11,    11,    15,    11,    53,    54,    13,
      14,    53,    54,    44,    45,     8,    44,    45,    29,     7,
      14,    29,     0,    44,    45,    42,     9,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    52,    53,
      54,    52,     7,    54,    52,    52,    54,    54,    53,    52,
      44,    45,    44,    45,    25,    26,    11,    45,    25,    26,
      11,    78,    79,    80,    81,    82,    83,    11,    11,    86,
      87,    88,    89,    90,    91,    63,    64,    65,    66,    67,
      68,     9,     8,    71,    72,    73,    74,    75,    76,    17,
      18,    19,    20,    21,    22,     8,     8,    17,    18,    19,
      20,    21,    22,    17,    18,    19,    20,    21,    22,     8,
       8,     8,     8,     8,     8,    16,    44,    45,    46,    47,
      48,    49,    50,    51,    44,    45,    46,    47,    52,   146,
      44,    45,    46,    47,    11,   152,   153,    52,   155,   156,
      19,    20,   159,   160,   161,    16,    12,    11,     9,    17,
      18,    19,    20,    11,   171,    11,    17,    18,    19,    20,
      21,    22,     9,     7,     7,    44,    45,     7,    14,   186,
      29,    25,    14,    14,    11,    14,    44,    45,    14,   196,
     197,    14,   199,    44,    45,    46,    47,    48,    49,    50,
      51,     3,     4,     5,     6,   212,   213,    14,    10,    11,
     217,     7,    14,   220,   221,   222,    11,    14,   225,   226,
      14,    23,    24,    14,   231,    27,    14,    29,    10,    31,
      32,    33,    11,    35,    36,    37,    38,    39,    40,     7,
      27,   248,    11,   250,    30,     7,   253,    10,     7,     7,
      52,    53,    54,    14,    10,   262,   263,    17,    18,    19,
      20,    10,    10,    30,   271,     9,    30,    10,    25,     7,
      10,   278,   279,    17,    18,    19,    20,    21,    22,    10,
     287,     9,     7,    10,    44,    45,    27,   294,   295,    17,
      18,    19,    20,    21,    22,    11,    10,    10,    10,   306,
      44,    45,    46,    47,    48,    49,    50,    51,    14,    28,
      27,    11,    27,    11,    10,    14,    44,    45,    46,    47,
      48,    49,    50,    51,     9,    14,    28,    11,    11,    10,
      27,    26,    17,    18,    19,    20,    21,    22,     9,    27,
      14,    14,    28,    11,    14,    27,    17,    18,    19,    20,
      21,    22,    10,    60,    -1,    -1,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,   116,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,     9,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,     9,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    12,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    12,
      -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,    22,
      12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    44,    45,    46,    47,    48,    49,    50,    51,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,    21,
      22,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    12,    -1,    -1,    -1,    -1,    17,    18,    19,    20,
      21,    22,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    12,    -1,    -1,    -1,    -1,    17,    18,    19,
      20,    21,    22,    12,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    51,    12,    -1,    -1,    -1,    -1,    17,    18,
      19,    20,    21,    22,    12,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,    17,
      18,    19,    20,    21,    22,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    51,    12,    -1,    -1,    -1,    -1,
      17,    18,    19,    20,    21,    22,    12,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    12,    -1,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    12,    -1,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    12,    -1,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    13,
      -1,    -1,    -1,    17,    18,    19,    20,    21,    22,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    13,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    13,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    13,    -1,
      -1,    -1,    17,    18,    19,    20,    21,    22,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    13,    -1,    -1,
      -1,    17,    18,    19,    20,    21,    22,    14,    -1,    -1,
      17,    18,    19,    20,    21,    22,    14,    -1,    -1,    17,
      18,    19,    20,    21,    22,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    44,    45,    46,
      47,    48,    49,    50,    51,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    14,    -1,    -1,    17,    18,    19,
      20,    21,    22,    14,    -1,    -1,    17,    18,    19,    20,
      21,    22,    14,    -1,    -1,    17,    18,    19,    20,    21,
      22,    -1,    -1,    -1,    44,    45,    46,    47,    48,    49,
      50,    51,    -1,    44,    45,    46,    47,    48,    49,    50,
      51,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      14,    -1,    -1,    17,    18,    19,    20,    21,    22,    14,
      -1,    -1,    17,    18,    19,    20,    21,    22,    14,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    -1,    44,
      45,    46,    47,    48,    49,    50,    51,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    14,    -1,    -1,    17,
      18,    19,    20,    21,    22,    14,    -1,    -1,    17,    18,
      19,    20,    21,    22,    -1,    16,    17,    18,    19,    20,
      21,    22,    -1,    -1,    -1,    -1,    44,    45,    46,    47,
      48,    49,    50,    51,    -1,    44,    45,    46,    47,    48,
      49,    50,    51,    44,    45,    46,    47,    48,    49,    50,
      51,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    28,    17,    18,    19,    20,    21,    22,    -1,
      -1,    -1,    -1,    -1,    28,    -1,    -1,    -1,    44,    45,
      46,    47,    48,    49,    50,    51,    -1,    -1,    -1,    -1,
      44,    45,    46,    47,    48,    49,    50,    51,    17,    18,
      19,    20,    21,    22,    -1,    -1,    -1,    -1,    -1,    28,
      17,    18,    19,    20,    21,    22,    -1,    -1,    -1,    -1,
      -1,    28,    -1,    -1,    -1,    44,    45,    46,    47,    48,
      49,    50,    51,    -1,    -1,    -1,    -1,    44,    45,    46,
      47,    48,    49,    50,    51,    17,    18,    19,    20,    21,
      22,    -1,    -1,    17,    18,    19,    20,    21,    22,    -1,
      -1,    17,    18,    19,    20,    21,    22,    -1,    -1,    -1,
      -1,    -1,    44,    45,    46,    47,    48,    49,    50,    51,
      44,    45,    46,    47,    48,    49,    50,    51,    44,    45,
      46,    47,    48,    49,    50,    51
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    15,    56,     8,     0,     9,     7,    57,     3,     4,
       5,     6,    10,    11,    14,    23,    24,    27,    29,    31,
      32,    33,    35,    36,    37,    38,    39,    40,    52,    53,
      54,    58,    59,    62,    63,    64,    67,    68,    52,    52,
      67,    68,    11,    65,    11,    11,    11,     8,     8,     8,
       8,     8,     8,     8,     8,     8,    16,    52,    60,    61,
      13,    14,    14,    17,    18,    19,    20,    21,    22,    44,
      45,    46,    47,    48,    49,    50,    51,    14,    17,    18,
      19,    20,    21,    22,    44,    45,    46,    47,    48,    49,
      50,    51,    11,    12,    12,    11,    68,    68,    67,    68,
      68,    68,    68,    68,    68,    68,    68,    68,    68,    41,
      42,    43,    66,    53,    54,    16,    13,    14,    52,    63,
      11,    67,    67,    67,    67,    67,    67,    67,    67,    67,
      67,    67,    67,    68,    68,    68,    68,    68,    68,    68,
      68,    68,    68,    68,    68,    12,    13,    12,    12,    12,
      12,     9,    13,    13,     9,    13,    13,     9,     9,    11,
      11,    11,     9,    53,    54,    61,     7,    68,     7,    14,
      14,     7,    14,    68,    68,    14,    68,    68,    14,    14,
      68,    68,    68,    14,    29,    12,    25,    29,    68,     9,
       9,     9,     9,    12,    12,    12,    11,     7,    68,    11,
      14,    14,    14,    14,    14,    68,    29,    68,    28,    68,
      10,    12,    11,    16,    27,    12,    30,     7,    68,    68,
      11,     7,     7,    68,    12,    17,    19,    68,    68,    68,
      14,     7,    68,    68,    12,    14,    14,    10,    68,    14,
      14,    14,    10,    10,    30,    14,    10,    10,    25,    30,
       7,    10,    68,     7,    68,    10,    28,    68,    14,    27,
      14,    10,    11,    10,    10,    68,    68,    12,    14,    14,
      10,    25,    26,    68,    28,    28,    27,    27,    11,    11,
      68,    68,    12,    12,    14,    14,    10,    25,    26,    68,
      28,    28,    27,    27,    11,    11,    68,    68,    12,    12,
      14,    14,    10,    26,    28,    27,    11,    68,    12,    14,
      10
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
#line 41 "meem83.y"
    { printf("\n---> Execution Successfully Done <---\n"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 62 "meem83.y"
    { int f=0,k=0;
              for(k=0;k<indexx;k++)
              {
              if(strcmp(store[k].tstr,(yyvsp[(1) - (1)].sv))==0)
              { 
              printf("\nError!!! %s  Variable Already Exists!\n",store[k].tstr);
              f=1;
              break;
              }
              }
              if(f==0)
              {
              store[indexx].tstr=(yyvsp[(1) - (1)].sv);
              printf("Successful Declaration of Variable:  %s\n",store[indexx].tstr);
              indexx++;
              }
            ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 80 "meem83.y"
    { int f=0,k=0;
for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,(yyvsp[(1) - (3)].sv))==0)
{
printf("\nError!!! %s  Variable Already Exists!\n",store[k].tstr);
f=1;
break;
}
}
if(f==0)
{
store[indexx].tstr=(yyvsp[(1) - (3)].sv);
store[indexx].tfloat=(yyvsp[(3) - (3)].fv);
printf("\nValue of Variable %s is:  %f\t %d\n",store[indexx].tstr,store[indexx].tfloat);
indexx++;
}
;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 99 "meem83.y"
    { int f=0,k=0;

for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,(yyvsp[(1) - (3)].sv))==0)
{
store[k].tint=(yyvsp[(3) - (3)].iv);
printf("\nError!!! %s  Variable Already Exists!\n",store[k].tstr);
f=1;
break;
}
}
if(f==0)
{
store[indexx].tstr=(yyvsp[(1) - (3)].sv);
store[indexx].tint=(yyvsp[(3) - (3)].iv);
printf("\nValue of Variable %s is:  %d\n",store[indexx].tstr,store[indexx].tint);
indexx++;
}
;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 127 "meem83.y"
    {
int f=0,k=0;
for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,(yyvsp[(1) - (3)].sv))==0)
{
store[k].tfloat=(yyvsp[(3) - (3)].fv);
printf("\nValue of Variable %s is:  %f \n",store[k].tstr,store[k].tfloat);
f=1;
break;
}
}
if(f==0)
{
printf("\nError!!! Undeclared Variable!\n");
}
;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 145 "meem83.y"
    {
int f=0,k=0;
for(k=0;k<indexx;k++)
{
if(strcmp(store[k].tstr,(yyvsp[(1) - (3)].sv))==0)
{
store[k].tint=(yyvsp[(3) - (3)].iv);
printf("\nValue of Variable %s is:  %d \n",store[k].tstr,store[k].tint);
f=1;
break;
}
}
if(f==0)
{
printf("\nError!!! Uneclared Variable!\n");
}
;}
    break;

  case 21:

/* Line 1455 of yacc.c  */
#line 166 "meem83.y"
    { printf("\nValue of Exprssion is: %d \n",(yyvsp[(1) - (2)].iv)); ;}
    break;

  case 22:

/* Line 1455 of yacc.c  */
#line 168 "meem83.y"
    { printf("\nValue of Exprssion is: %f \n",(yyvsp[(1) - (2)].fv)); ;}
    break;

  case 23:

/* Line 1455 of yacc.c  */
#line 171 "meem83.y"
    {
if((yyvsp[(7) - (29)].iv)==(yyvsp[(3) - (29)].iv))
{
printf("\nValue in Switch-Case is: %d\n",(yyvsp[(11) - (29)].iv));
}
else if((yyvsp[(15) - (29)].iv)==(yyvsp[(3) - (29)].iv))
{
printf("\nValue in Switch-Case is: %d\n",(yyvsp[(19) - (29)].iv));
}
else{
printf("\nValue in Switch-Case is: %d\n",(yyvsp[(26) - (29)].iv));
}
;}
    break;

  case 24:

/* Line 1455 of yacc.c  */
#line 185 "meem83.y"
    {
if((yyvsp[(7) - (37)].iv)==(yyvsp[(3) - (37)].iv))
{
printf("\nValue in Switch-Case is: %d\n",(yyvsp[(11) - (37)].iv));
}
else if((yyvsp[(15) - (37)].iv)==(yyvsp[(3) - (37)].iv))
{
printf("\nValue in Switch-Case is: %d\n",(yyvsp[(19) - (37)].iv));
}
else if((yyvsp[(23) - (37)].iv)==(yyvsp[(3) - (37)].iv)){
printf("\nValue in Switch-Case is: %d\n",(yyvsp[(27) - (37)].iv));
}
else{
printf("\nValue in Switch-Case is: %d\n",(yyvsp[(34) - (37)].iv));
}
;}
    break;

  case 25:

/* Line 1455 of yacc.c  */
#line 202 "meem83.y"
    {
if((yyvsp[(7) - (45)].iv)==(yyvsp[(3) - (45)].iv))
{
printf("\nValue in Switch-Case is: %d\n",(yyvsp[(11) - (45)].iv));
}
else if((yyvsp[(15) - (45)].iv)==(yyvsp[(3) - (45)].iv))
{
printf("\nValue in Switch-Case is: %d\n",(yyvsp[(19) - (45)].iv));
}
else if((yyvsp[(23) - (45)].iv)==(yyvsp[(3) - (45)].iv)){
printf("\nValue in Switch-Case is: %d\n",(yyvsp[(27) - (45)].iv));
}
else if((yyvsp[(31) - (45)].iv)==(yyvsp[(3) - (45)].iv)){
printf("\nValue in Switch-Case is: %d\n",(yyvsp[(35) - (45)].iv));
}
else{
printf("\nValue in Switch-Case is: %d\n",(yyvsp[(42) - (45)].iv));
}
;}
    break;

  case 26:

/* Line 1455 of yacc.c  */
#line 224 "meem83.y"
    {
  printf("Function Starts Here...");
 if((yyvsp[(8) - (19)].iv))
     { 
       printf("\nValue in IF Block is:  %d\n",(yyvsp[(11) - (19)].iv));
    }
 else
    {
       printf("\nValue in IF Block is:  %d\n",(yyvsp[(11) - (19)].iv));
    }
  printf("Function Ends Here...");
;}
    break;

  case 27:

/* Line 1455 of yacc.c  */
#line 238 "meem83.y"
    {
	       int  n=(yyvsp[(3) - (5)].iv);   

			if(n%2==0){
			printf("%d is an Even Number \n",(yyvsp[(3) - (5)].iv));
}
else{
printf("%d is an Odd Number \n",(yyvsp[(3) - (5)].iv));

}


	     ;}
    break;

  case 28:

/* Line 1455 of yacc.c  */
#line 253 "meem83.y"
    {
int n=(yyvsp[(3) - (7)].iv);
int rem=(yyvsp[(5) - (7)].iv);
int mul=1,i;

			for(i=n;i<=rem;i++){
	                                 mul*=i;			
			}
		
			printf("Continuous Multiplication from %d to %d is:  %d\n", (yyvsp[(3) - (7)].iv), (yyvsp[(5) - (7)].iv),mul);
;}
    break;

  case 29:

/* Line 1455 of yacc.c  */
#line 266 "meem83.y"
    {
	         int n=(yyvsp[(3) - (7)].iv);
int rem=(yyvsp[(5) - (7)].iv);
int f=0,i;

			for(i=n; i<=rem; i++)
			{
				f+=i;			
			}
			printf("Continuous Summation from %d to %d is:  %d\n", (yyvsp[(3) - (7)].iv), (yyvsp[(5) - (7)].iv),f);
	     ;}
    break;

  case 30:

/* Line 1455 of yacc.c  */
#line 280 "meem83.y"
    {
 if((yyvsp[(3) - (8)].iv))
     { 
       printf("\nValue of Exprssion in IF Block is:  %d\n",(yyvsp[(6) - (8)].iv));
    }
 else
    {
      printf("\nCondition Value is Zero in IF Block\n");
    }
;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 291 "meem83.y"
    {
  printf("\nIf-Else within If\n");
;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 295 "meem83.y"
    {

 if((yyvsp[(3) - (13)].iv)) 
   {
    printf("\nValue of Exprssion in IF Block is:  %d\n",(yyvsp[(6) - (13)].iv));
   }
 else
   { 
     printf("\nValue of Exprssion in ELSE Block is:  %d\n",(yyvsp[(11) - (13)].iv));
   }
;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 310 "meem83.y"
    {
int n=(yyvsp[(3) - (5)].iv);
int prime=0,i;
for(i=2;i<n;i++){
  if(n%i==0){
  prime=1;
  break;
  }			
}
		if(n==1){
		printf("%d is Neither a  Prime Number Nor a Composite\n", (yyvsp[(3) - (5)].iv));
    }
    else if(prime==0){
    printf("%d is a Prime Number\n", (yyvsp[(3) - (5)].iv));
    }
    else{
    printf("%d is Not a Prime Number\n", (yyvsp[(3) - (5)].iv));
    }
;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 331 "meem83.y"
    {
int n=(yyvsp[(3) - (7)].iv);
int nn=(yyvsp[(5) - (7)].iv);
			
			printf("%d ^ %d :   %lf\n", (yyvsp[(3) - (7)].iv), (yyvsp[(5) - (7)].iv),pow(n,nn));
;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 339 "meem83.y"
    {
	        int n=(yyvsp[(3) - (5)].iv),i,fac=1;   

			for(i=n; i>=2; i--)
			{
				fac*=i;			
			}
			
			printf("Factorial of %d is:  %d\n",(yyvsp[(3) - (5)].iv),fac);
	     ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 351 "meem83.y"
    {
if((yyvsp[(3) - (5)].iv) % 4==0){
printf("%d is a Leap Year\n", (yyvsp[(3) - (5)].iv));
}
else{
printf("%d is Not a Leap Year \n",(yyvsp[(3) - (5)].iv));
}
;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 361 "meem83.y"
    {
int n; 
if((yyvsp[(5) - (7)].iv)!=0)
    {
     n = (yyvsp[(3) - (7)].iv) / (yyvsp[(5) - (7)].iv);
     printf("\nResult of Divison is:  %d\n",n);
    }
    else
    {
     n = 0;
     printf("\nError!!! Division by Zero!\n");
    }
;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 376 "meem83.y"
    {printf("\nScreen Display:  %d\n",(yyvsp[(3) - (5)].iv));;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 377 "meem83.y"
    {printf("\nScreen Display Value of Expression is:  %f\n",(yyvsp[(3) - (5)].fv));;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 383 "meem83.y"
    {
int n=(yyvsp[(2) - (13)].iv);
int rem=(yyvsp[(4) - (13)].iv);
int l=(yyvsp[(9) - (13)].iv);
int r=(yyvsp[(11) - (13)].iv);
int k=(yyvsp[(7) - (13)].iv),o,p;
for(p=n;p<=rem;p++){	
k=k*(yyvsp[(11) - (13)].iv);
printf("Multiple Value Inside Loop is:  %d\n", k);	
}
for(o=0;o<indexx;o++){
if((yyvsp[(7) - (13)].iv)==store[o].tint){
store[o].tint=k;
break;
}
}
;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 401 "meem83.y"
    {
  printf("\nIF BLOCK within Loop\n");
;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 405 "meem83.y"
    {
int n=(yyvsp[(2) - (13)].iv);
int rem=(yyvsp[(4) - (13)].iv);
int l=(yyvsp[(9) - (13)].iv);
int r=(yyvsp[(11) - (13)].iv);
int k=(yyvsp[(7) - (13)].iv),o,p;
for(p=n;p<=rem;p++){	
k=k+(yyvsp[(11) - (13)].iv);
printf("Summation Value Inside Loop is:  %d\n", k);	
}
for(o=0;o<indexx;o++){
if((yyvsp[(7) - (13)].iv)==store[o].tint){
store[o].tint=k;
break;
}
}
;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 425 "meem83.y"
    {
	           

			
			printf("Sine of %d Degree is :  %lf \n",(yyvsp[(3) - (4)].iv),sin((yyvsp[(3) - (4)].iv)*3.1416/180));
;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 431 "meem83.y"
    {
	           

			
			printf("Cosine of %d Degree is :  %lf \n",(yyvsp[(3) - (4)].iv),cos((yyvsp[(3) - (4)].iv)*3.1416/180));
;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 437 "meem83.y"
    {
	           

			
			printf("Tangent of %d Degree is :  %lf \n",(yyvsp[(3) - (4)].iv),tan((yyvsp[(3) - (4)].iv)*3.1416/180));
;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 446 "meem83.y"
    {store[indexx].tfloat=(yyvsp[(1) - (1)].fv);
(yyval.fv)=store[indexx].tfloat;
indexx++;
;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 450 "meem83.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) + (yyvsp[(3) - (3)].fv); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 451 "meem83.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) - (yyvsp[(3) - (3)].fv); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 452 "meem83.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) * (yyvsp[(3) - (3)].fv); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 453 "meem83.y"
    {
  if((yyvsp[(3) - (3)].fv))
    {
     (yyval.fv) = (yyvsp[(1) - (3)].fv) / (yyvsp[(3) - (3)].fv);
   }
  else
    {
     (yyval.fv) = 0;
     printf("\nError!!! Division by Zero!\n");}
    ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 463 "meem83.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) < (yyvsp[(3) - (3)].fv); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 464 "meem83.y"
    { (yyval.fv) = (yyvsp[(1) - (3)].fv) > (yyvsp[(3) - (3)].fv); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 465 "meem83.y"
    { (yyval.fv) = (yyvsp[(2) - (3)].fv); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 466 "meem83.y"
    {(yyval.fv) = (yyvsp[(1) - (2)].fv) + 1;;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 467 "meem83.y"
    {(yyval.fv) = (yyvsp[(1) - (2)].fv) - 1;;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 468 "meem83.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) <= (yyvsp[(3) - (3)].fv);;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 469 "meem83.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) >= (yyvsp[(3) - (3)].fv);;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 470 "meem83.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) || (yyvsp[(3) - (3)].fv);;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 471 "meem83.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) && (yyvsp[(3) - (3)].fv);;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 472 "meem83.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) == (yyvsp[(3) - (3)].fv);;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 473 "meem83.y"
    {(yyval.fv) = (yyvsp[(1) - (3)].fv) != (yyvsp[(3) - (3)].fv);;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 475 "meem83.y"
    {store[indexx].tint=(yyvsp[(1) - (1)].iv);
(yyval.iv)=store[indexx].tint;
indexx++;
;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 481 "meem83.y"
    { int j=0,f=0;
for(j=0;j<indexx;j++)
{
if(strcmp(store[j].tstr,(yyvsp[(1) - (1)].sv))==0)
{
(yyval.iv)=store[j].tint;
f=1;
break;
}
}
if(f==0)
{
printf("\nError!!! Uneclared Variable!\n");
}
 ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 496 "meem83.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) + (yyvsp[(3) - (3)].iv); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 497 "meem83.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) - (yyvsp[(3) - (3)].iv); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 498 "meem83.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) * (yyvsp[(3) - (3)].iv); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 499 "meem83.y"
    {
  if((yyvsp[(3) - (3)].iv))
    {
     (yyval.iv) = (yyvsp[(1) - (3)].iv) / (yyvsp[(3) - (3)].iv);
   }
  else
    {
     (yyval.iv) = 0;
     printf("\nError!!! Division by Zero!\n");}
    ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 509 "meem83.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) < (yyvsp[(3) - (3)].iv); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 510 "meem83.y"
    { (yyval.iv) = (yyvsp[(1) - (3)].iv) > (yyvsp[(3) - (3)].iv); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 511 "meem83.y"
    { (yyval.iv) = (yyvsp[(2) - (3)].iv); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 512 "meem83.y"
    {(yyval.iv) = (yyvsp[(1) - (2)].iv) + 1;;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 513 "meem83.y"
    {(yyval.iv) = (yyvsp[(1) - (2)].iv) - 1;;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 514 "meem83.y"
    {(yyval.iv) = (yyvsp[(1) - (3)].iv) <= (yyvsp[(3) - (3)].iv);;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 515 "meem83.y"
    {(yyval.iv) = (yyvsp[(1) - (3)].iv) >= (yyvsp[(3) - (3)].iv);;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 516 "meem83.y"
    {(yyval.iv) = (yyvsp[(1) - (3)].iv) || (yyvsp[(3) - (3)].iv);;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 517 "meem83.y"
    {(yyval.iv) = (yyvsp[(1) - (3)].iv) && (yyvsp[(3) - (3)].iv);;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 518 "meem83.y"
    {(yyval.iv) = (yyvsp[(1) - (3)].iv) == (yyvsp[(3) - (3)].iv);;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 519 "meem83.y"
    {(yyval.iv) = (yyvsp[(1) - (3)].iv) != (yyvsp[(3) - (3)].iv);;}
    break;



/* Line 1455 of yacc.c  */
#line 2627 "meem83.tab.c"
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
#line 521 "meem83.y"


