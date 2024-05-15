/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C

   Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.

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
   Foundation, Inc., 51 Franklin Street, Fifth Floor,
   Boston, MA 02110-1301, USA.  */

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
#define YYBISON_VERSION "2.3"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Using locations.  */
#define YYLSP_NEEDED 0



/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
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
     SLACH = 299,
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
#define SLACH 299
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




/* Copy the first part of user declarations.  */
#line 9 "yacc.y"

	#define YYSTYPE_IS_DECLARED 1
	#define YYSTYPE long

	#include "type.h"
	#include "sup_func.h"

	#include <stdio.h>
	#include <stdlib.h>

	extern int line_no;
	extern int syntax_err;
	extern A_NODE *root;
	extern A_ID *current_id;
	extern int current_level;
	extern A_TYPE *int_type, *float_type, *char_type, *void_type, *string_type;

	int yyerror(char *s);
	int yylex();
	int yywrap();


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

#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif



/* Copy the second part of user declarations.  */


/* Line 216 of yacc.c.  */
#line 240 "y.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
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
YYID (int i)
#else
static int
YYID (i)
    int i;
#endif
{
  return i;
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
  yytype_int16 yyss;
  YYSTYPE yyvs;
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
# define YYSTACK_RELOCATE(Stack)					\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack, Stack, yysize);				\
	Stack = &yyptr->Stack;						\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  29
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   459

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  57
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  80
/* YYNRULES -- Number of rules.  */
#define YYNRULES  176
/* YYNRULES -- Number of states.  */
#define YYNSTATES  293

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   311

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
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    15,    20,
      21,    25,    26,    28,    30,    33,    37,    39,    41,    44,
      47,    49,    51,    53,    54,    56,    58,    62,    64,    68,
      70,    72,    74,    75,    76,    84,    85,    86,    93,    96,
      98,   100,   102,   105,   109,   111,   115,   117,   118,   125,
     126,   132,   135,   137,   141,   143,   144,   149,   152,   154,
     156,   159,   161,   165,   170,   171,   177,   178,   180,   181,
     183,   185,   189,   191,   195,   198,   201,   202,   204,   206,
     208,   211,   215,   219,   223,   228,   233,   235,   239,   241,
     245,   246,   248,   250,   253,   255,   257,   259,   261,   263,
     265,   270,   274,   275,   281,   283,   286,   292,   300,   306,
     312,   320,   326,   332,   333,   335,   339,   342,   345,   347,
     349,   351,   353,   355,   359,   361,   366,   371,   375,   379,
     382,   385,   386,   388,   390,   394,   396,   399,   402,   405,
     408,   411,   414,   417,   420,   425,   427,   432,   435,   437,
     441,   445,   449,   451,   455,   459,   461,   463,   467,   471,
     475,   479,   481,   485,   489,   491,   493,   495,   497,   501,
     503,   507,   509,   511,   515,   517,   519
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      58,     0,    -1,    59,    -1,    60,    -1,    59,    60,    -1,
      61,    -1,    66,    -1,    -1,    67,    89,    62,   107,    -1,
      -1,    89,    63,   107,    -1,    -1,    65,    -1,    66,    -1,
      65,    66,    -1,    67,    69,    47,    -1,    72,    -1,    68,
      -1,    72,    67,    -1,    68,    67,    -1,     3,    -1,    15,
      -1,    18,    -1,    -1,    70,    -1,    71,    -1,    70,    41,
      71,    -1,    89,    -1,    89,    50,   101,    -1,    73,    -1,
      83,    -1,    56,    -1,    -1,    -1,    78,    55,    74,    37,
      75,    79,    38,    -1,    -1,    -1,    78,    76,    37,    77,
      79,    38,    -1,    78,    55,    -1,    16,    -1,    19,    -1,
      80,    -1,    79,    80,    -1,    72,    81,    47,    -1,    82,
      -1,    81,    41,    82,    -1,    89,    -1,    -1,    10,    55,
      84,    37,    86,    38,    -1,    -1,    10,    85,    37,    86,
      38,    -1,    10,    55,    -1,    87,    -1,    86,    41,    87,
      -1,    55,    -1,    -1,    55,    88,    50,   135,    -1,    90,
      91,    -1,    91,    -1,    43,    -1,    43,    90,    -1,    55,
      -1,    33,    89,    34,    -1,    91,    35,    93,    36,    -1,
      -1,    91,    33,    92,    94,    34,    -1,    -1,   136,    -1,
      -1,    95,    -1,    96,    -1,    96,    41,    32,    -1,    97,
      -1,    96,    41,    97,    -1,    67,    89,    -1,    67,    98,
      -1,    -1,    99,    -1,    90,    -1,   100,    -1,    90,   100,
      -1,    33,    99,    34,    -1,    35,    93,    36,    -1,    33,
      94,    34,    -1,   100,    35,    93,    36,    -1,   100,    33,
      94,    34,    -1,   136,    -1,    37,   102,    38,    -1,   101,
      -1,   102,    41,   101,    -1,    -1,   104,    -1,   105,    -1,
     104,   105,    -1,   106,    -1,   107,    -1,   109,    -1,   110,
      -1,   111,    -1,   114,    -1,     5,   136,    39,   105,    -1,
       7,    39,   105,    -1,    -1,    37,   108,    64,   103,    38,
      -1,    47,    -1,   135,    47,    -1,    12,    33,   135,    34,
     105,    -1,    12,    33,   135,    34,   105,     9,   105,    -1,
      17,    33,   135,    34,   105,    -1,    20,    33,   135,    34,
     105,    -1,     8,   105,    20,    33,   135,    34,    47,    -1,
      11,    33,   112,    34,   105,    -1,   113,    47,   113,    47,
     113,    -1,    -1,   135,    -1,    13,   113,    47,    -1,     6,
      47,    -1,     4,    47,    -1,    55,    -1,    51,    -1,    52,
      -1,    54,    -1,    53,    -1,    33,   135,    34,    -1,   115,
      -1,   116,    35,   135,    36,    -1,   116,    33,   117,    34,
      -1,   116,    40,    55,    -1,   116,    23,    55,    -1,   116,
      21,    -1,   116,    22,    -1,    -1,   118,    -1,   133,    -1,
     118,    41,   133,    -1,   116,    -1,    21,   119,    -1,    22,
     119,    -1,    46,   120,    -1,    43,   120,    -1,    42,   120,
      -1,    49,   120,    -1,    48,   120,    -1,    14,   119,    -1,
      14,    33,   121,    34,    -1,   119,    -1,    33,   121,    34,
     120,    -1,    67,    98,    -1,   120,    -1,   122,    43,   120,
      -1,   122,    44,   120,    -1,   122,    45,   120,    -1,   122,
      -1,   123,    48,   122,    -1,   123,    49,   122,    -1,   123,
      -1,   124,    -1,   125,    24,   124,    -1,   125,    25,   124,
      -1,   125,    26,   124,    -1,   125,    27,   124,    -1,   125,
      -1,   126,    28,   125,    -1,   126,    29,   125,    -1,   126,
      -1,   129,    -1,   127,    -1,   128,    -1,   130,    30,   128,
      -1,   130,    -1,   131,    31,   130,    -1,   131,    -1,   132,
      -1,   119,    50,   133,    -1,   133,    -1,   134,    -1,   135,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    32,    32,    36,    37,    40,    41,    44,    44,    46,
      46,    50,    51,    54,    55,    59,    64,    65,    67,    69,
      74,    75,    76,    79,    80,    83,    84,    88,    89,    92,
      93,    94,    98,    99,    97,   102,   102,   102,   105,   109,
     110,   113,   114,   117,   122,   123,   127,   131,   130,   133,
     133,   135,   139,   140,   143,   146,   145,   150,   151,   154,
     155,   159,   160,   161,   163,   163,   169,   170,   173,   174,
     177,   178,   182,   183,   187,   189,   194,   195,   198,   199,
     200,   204,   205,   207,   209,   211,   216,   217,   220,   222,
     225,   226,   230,   232,   236,   237,   238,   239,   240,   241,
     244,   246,   250,   250,   256,   257,   260,   262,   264,   268,
     270,   272,   276,   280,   281,   284,   286,   288,   292,   294,
     295,   296,   297,   298,   301,   302,   304,   306,   308,   310,
     312,   316,   317,   320,   322,   326,   327,   329,   331,   332,
     333,   334,   335,   336,   338,   342,   343,   347,   351,   352,
     354,   356,   360,   361,   363,   367,   370,   371,   373,   375,
     377,   381,   382,   384,   388,   391,   394,   397,   398,   402,
     403,   407,   410,   411,   415,   418,   421
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
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
  "RR", "COLON", "PERIOD", "COMMA", "EXCL", "STAR", "SLACH", "PERCENT",
  "AMP", "SEMICOLON", "PLUS", "MINUS", "ASSIGN", "INTEGER_CONSTANT",
  "FLOAT_CONSTANT", "STRING_LITERAL", "CHARACTER_CONSTANT", "IDENTIFIER",
  "TYPE_IDENTIFIER", "$accept", "program", "translation_unit",
  "external_declaration", "function_definition", "@1", "@2",
  "declaration_list_opt", "declaration_list", "declaration",
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
  "labeled_statement", "compound_statement", "@11", "expression_statement",
  "selection_statement", "iteration_statement", "for_expression",
  "expression_opt", "jump_statement", "primary_expression",
  "postfix_expression", "arg_expression_list_opt", "arg_expression_list",
  "unary_expression", "cast_expression", "type_name",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "bitwise_and_expression",
  "bitwise_or_expression", "bitwise_xor_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "comma_expression",
  "expression", "constant_expression", 0
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
     305,   306,   307,   308,   309,   310,   311
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    57,    58,    59,    59,    60,    60,    62,    61,    63,
      61,    64,    64,    65,    65,    66,    67,    67,    67,    67,
      68,    68,    68,    69,    69,    70,    70,    71,    71,    72,
      72,    72,    74,    75,    73,    76,    77,    73,    73,    78,
      78,    79,    79,    80,    81,    81,    82,    84,    83,    85,
      83,    83,    86,    86,    87,    88,    87,    89,    89,    90,
      90,    91,    91,    91,    92,    91,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    99,    99,
      99,   100,   100,   100,   100,   100,   101,   101,   102,   102,
     103,   103,   104,   104,   105,   105,   105,   105,   105,   105,
     106,   106,   108,   107,   109,   109,   110,   110,   110,   111,
     111,   111,   112,   113,   113,   114,   114,   114,   115,   115,
     115,   115,   115,   115,   116,   116,   116,   116,   116,   116,
     116,   117,   117,   118,   118,   119,   119,   119,   119,   119,
     119,   119,   119,   119,   119,   120,   120,   121,   122,   122,
     122,   122,   123,   123,   123,   124,   125,   125,   125,   125,
     125,   126,   126,   126,   127,   128,   129,   130,   130,   131,
     131,   132,   133,   133,   134,   135,   136
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     0,     4,     0,
       3,     0,     1,     1,     2,     3,     1,     1,     2,     2,
       1,     1,     1,     0,     1,     1,     3,     1,     3,     1,
       1,     1,     0,     0,     7,     0,     0,     6,     2,     1,
       1,     1,     2,     3,     1,     3,     1,     0,     6,     0,
       5,     2,     1,     3,     1,     0,     4,     2,     1,     1,
       2,     1,     3,     4,     0,     5,     0,     1,     0,     1,
       1,     3,     1,     3,     2,     2,     0,     1,     1,     1,
       2,     3,     3,     3,     4,     4,     1,     3,     1,     3,
       0,     1,     1,     2,     1,     1,     1,     1,     1,     1,
       4,     3,     0,     5,     1,     2,     5,     7,     5,     5,
       7,     5,     5,     0,     1,     3,     2,     2,     1,     1,
       1,     1,     1,     3,     1,     4,     4,     3,     3,     2,
       2,     0,     1,     1,     3,     1,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     1,     4,     2,     1,     3,
       3,     3,     1,     3,     3,     1,     1,     3,     3,     3,
       3,     1,     3,     3,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     3,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    20,    49,    21,    39,    22,    40,     0,    59,    61,
      31,     0,     2,     3,     5,     6,    23,    17,    16,    29,
      35,    30,     9,     0,    58,    51,     0,     0,    60,     1,
       4,     0,    24,    25,    27,    19,    18,    38,     0,     0,
      57,    64,    66,     0,     0,    62,    15,     0,     0,     0,
       0,    36,   102,    10,    68,     0,     0,     0,     0,     0,
       0,     0,     0,     0,   119,   120,   122,   121,   118,     0,
     124,   135,   145,   148,   152,   155,   156,   161,   164,   166,
     167,   165,   169,   171,   172,   174,   175,   176,    67,     0,
      54,     0,    52,    26,    27,     0,    28,    86,     8,    33,
       0,    11,    76,     0,    69,    70,    72,     0,   143,     0,
     136,   137,    76,     0,     0,   145,   140,   139,   138,   142,
     141,    63,   129,   130,     0,   131,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    50,     0,    88,     0,     0,     0,
       0,    41,    90,    12,    13,    23,    68,    66,    74,    78,
      75,    77,    79,    65,     0,     0,    68,    78,   147,     0,
     123,   128,     0,   132,   133,     0,   127,   173,   149,   150,
     151,   153,   154,   157,   158,   159,   160,   162,   163,   168,
     170,    48,     0,    53,    87,     0,     0,     0,    44,    46,
      37,    42,     0,     0,     0,     0,     0,     0,     0,   113,
       0,     0,   104,     0,    91,    92,    94,    95,    96,    97,
      98,    99,     0,    14,     0,     0,     0,    80,    68,    66,
      71,    73,   144,   146,   126,     0,   125,    56,    89,    34,
       0,    43,   117,     0,   116,     0,     0,   113,     0,     0,
     114,     0,     0,   103,    93,   105,    83,    81,    82,     0,
       0,   134,    45,     0,   101,     0,     0,     0,     0,   115,
       0,     0,    85,    84,   100,     0,     0,   113,     0,     0,
       0,     0,   111,     0,   106,   108,   109,     0,   113,     0,
     110,   112,   107
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    11,    12,    13,    14,    49,    39,   152,   153,    15,
     102,    17,    31,    32,    33,    18,    19,    50,   148,    38,
     100,    20,   150,   151,   197,   198,    21,    43,    26,    91,
      92,   143,    22,    23,    24,    54,    69,   224,   104,   105,
     106,   160,   161,   162,    96,   147,   213,   214,   215,   216,
     217,   101,   218,   219,   220,   266,   249,   221,    70,    71,
     172,   173,    72,    73,   113,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,   222,    88
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -208
static const yytype_int16 yypact[] =
{
     240,  -208,    19,  -208,  -208,  -208,  -208,   -18,    53,  -208,
    -208,    92,   240,  -208,  -208,  -208,   -18,   144,   144,  -208,
      88,  -208,  -208,    14,     9,    79,   129,   114,  -208,  -208,
    -208,   121,   133,  -208,   -23,  -208,  -208,   139,   146,   162,
       9,  -208,   354,   171,   115,  -208,  -208,   -18,   340,   162,
     177,  -208,  -208,  -208,   144,   390,   404,   404,   174,   354,
     354,   354,   354,   354,  -208,  -208,  -208,  -208,  -208,   150,
    -208,   230,   161,  -208,    17,   149,  -208,    96,     2,  -208,
    -208,  -208,   182,   184,  -208,  -208,  -208,  -208,  -208,   115,
     168,    49,  -208,  -208,   169,   340,  -208,  -208,  -208,  -208,
      29,   144,   -14,   187,  -208,   183,  -208,   174,  -208,   354,
    -208,  -208,    40,   200,   203,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,  -208,  -208,   185,   354,   354,   186,   354,   354,
     354,   354,   354,   354,   354,   354,   354,   354,   354,   354,
     354,   354,    67,   188,  -208,   115,  -208,    72,    29,   -18,
      81,  -208,   304,   144,  -208,   -18,   229,   354,  -208,    -9,
    -208,  -208,   106,  -208,    61,   208,   271,   111,  -208,   354,
    -208,  -208,   215,   213,  -208,   221,  -208,  -208,  -208,  -208,
    -208,    17,    17,  -208,  -208,  -208,  -208,    96,    96,  -208,
     182,  -208,   354,  -208,  -208,   340,   175,    48,  -208,  -208,
    -208,  -208,   214,   354,   219,   228,   304,   227,   235,   354,
     236,   238,  -208,   237,   304,  -208,  -208,  -208,  -208,  -208,
    -208,  -208,   231,  -208,   242,   243,   244,   106,   144,   354,
    -208,  -208,  -208,  -208,  -208,   354,  -208,  -208,  -208,  -208,
     -18,  -208,  -208,   249,  -208,   304,   259,   354,   354,   245,
    -208,   354,   354,  -208,  -208,  -208,  -208,  -208,  -208,   248,
     255,  -208,  -208,   304,  -208,   260,   263,   247,   264,  -208,
     265,   266,  -208,  -208,  -208,   354,   304,   354,   304,   304,
     304,   267,  -208,   256,   293,  -208,  -208,   258,   354,   304,
    -208,  -208,  -208
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -208,  -208,  -208,   295,  -208,  -208,  -208,  -208,  -208,   -81,
       5,  -208,  -208,  -208,   272,   -82,  -208,  -208,  -208,  -208,
    -208,  -208,   165,  -137,  -208,    80,  -208,  -208,  -208,   233,
     178,  -208,    -4,    -1,   -19,  -208,  -147,   -53,  -208,  -208,
     164,   217,  -128,   -73,   -86,  -208,  -208,  -208,  -107,  -208,
      39,  -208,  -208,  -208,  -208,  -208,  -207,  -208,  -208,  -208,
    -208,  -208,    -5,   -27,   223,    69,  -208,    44,    65,  -208,
    -208,   191,  -208,   192,  -208,  -208,  -117,  -208,   -42,   -46
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -56
static const yytype_int16 yytable[] =
{
      87,   103,    97,    27,    40,    16,    87,    28,   174,   146,
     226,   177,    34,   201,    -7,     7,   114,    16,   149,   156,
     154,   157,    35,    36,   156,     8,   157,    48,   225,     8,
     138,   139,   116,   117,   118,   119,   120,     9,   225,     2,
     267,     9,    41,    94,    42,     4,     9,     7,     6,    97,
     108,   110,   111,    87,   115,   115,   115,   115,   115,   201,
     129,   130,   131,   112,     1,   114,   149,   114,   149,     9,
     283,     2,   223,   166,    25,   157,     3,     4,    53,     5,
       6,   291,   260,     8,   175,    10,   227,   144,    98,   240,
     145,     2,    29,   230,   227,   241,     8,     4,   158,   246,
       6,   159,   178,   179,   180,   191,   155,   254,   145,   238,
     194,   167,   112,   195,   149,    87,   -47,    10,   261,   200,
     134,   135,   136,   137,   115,   115,   115,   115,   115,   115,
     115,   115,   115,   115,   115,   115,   115,    10,   264,   228,
      40,   229,   233,    37,   166,   199,   157,     1,    45,    97,
     237,    94,    27,    87,     2,   159,   274,   243,   155,     3,
       4,    87,     5,     6,   115,   167,    44,   250,    46,   282,
      90,   284,   285,   286,    47,   259,   -32,     1,   183,   184,
     185,   186,   292,    51,     2,     2,   121,    87,    55,     3,
       4,     4,     5,     6,     6,    56,    57,   132,   133,    52,
      10,   181,   182,   187,   188,   250,   268,    58,    89,   270,
     271,   128,   140,   239,    99,   141,    59,    60,   -55,    48,
      61,   163,    62,    63,   164,    64,    65,    66,    67,    68,
      10,    10,     1,   281,   169,   250,   199,   170,   192,     2,
     171,   176,   232,     1,     3,     4,   250,     5,     6,   234,
       2,   122,   123,   124,   235,     3,     4,   236,     5,     6,
     247,   242,   156,   125,   157,   126,   244,   245,   248,   251,
     127,   252,     8,     7,     1,   253,   256,   257,   255,   265,
     258,     2,   272,     8,     9,    10,     3,     4,   263,     5,
       6,   273,   269,   275,   277,     9,    10,   276,   278,   279,
     280,   287,   289,   288,   166,   290,   157,    30,   202,   203,
     204,   205,   206,   196,     8,   207,   208,   209,    55,    93,
     262,   210,   142,   193,   211,    56,    57,    10,   231,   168,
     165,   189,     0,   190,     0,     0,     0,    58,     0,     0,
       0,    52,     0,     0,     0,     0,    59,    60,     0,     0,
      61,   212,    62,    63,    55,    64,    65,    66,    67,    68,
       0,    56,    57,     0,     0,     0,     0,     0,    55,     0,
       0,     0,     0,    58,     0,    56,    57,    95,     0,     0,
       0,     0,    59,    60,     0,     0,    61,    58,    62,    63,
       0,    64,    65,    66,    67,    68,    59,    60,     0,     0,
      61,     0,    62,    63,    55,    64,    65,    66,    67,    68,
       0,    56,    57,     0,     0,     0,     0,     0,    55,     0,
       0,     0,     0,   107,     0,    56,    57,     0,     0,     0,
       0,     0,    59,    60,     0,     0,    61,   109,    62,    63,
       0,    64,    65,    66,    67,    68,    59,    60,     0,     0,
      61,     0,    62,    63,     0,    64,    65,    66,    67,    68
};

static const yytype_int16 yycheck[] =
{
      42,    54,    48,     7,    23,     0,    48,     8,   125,    95,
     157,   128,    16,   150,    37,    33,    58,    12,   100,    33,
     101,    35,    17,    18,    33,    43,    35,    50,   156,    43,
      28,    29,    59,    60,    61,    62,    63,    55,   166,    10,
     247,    55,    33,    47,    35,    16,    55,    33,    19,    95,
      55,    56,    57,    95,    59,    60,    61,    62,    63,   196,
      43,    44,    45,    58,     3,   107,   148,   109,   150,    55,
     277,    10,   153,    33,    55,    35,    15,    16,    39,    18,
      19,   288,   229,    43,   126,    56,   159,    38,    49,    41,
      41,    10,     0,    32,   167,    47,    43,    16,   102,   206,
      19,   102,   129,   130,   131,    38,   101,   214,    41,   195,
      38,   112,   107,    41,   196,   157,    37,    56,   235,    38,
      24,    25,    26,    27,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,    56,   245,    33,
     159,    35,   169,    55,    33,   149,    35,     3,    34,   195,
     192,   155,   156,   195,    10,   156,   263,   203,   153,    15,
      16,   203,    18,    19,   169,   166,    37,   209,    47,   276,
      55,   278,   279,   280,    41,   228,    37,     3,   134,   135,
     136,   137,   289,    37,    10,    10,    36,   229,    14,    15,
      16,    16,    18,    19,    19,    21,    22,    48,    49,    37,
      56,   132,   133,   138,   139,   247,   248,    33,    37,   251,
     252,    50,    30,    38,    37,    31,    42,    43,    50,    50,
      46,    34,    48,    49,    41,    51,    52,    53,    54,    55,
      56,    56,     3,   275,    34,   277,   240,    34,    50,    10,
      55,    55,    34,     3,    15,    16,   288,    18,    19,    34,
      10,    21,    22,    23,    41,    15,    16,    36,    18,    19,
      33,    47,    33,    33,    35,    35,    47,    39,    33,    33,
      40,    33,    43,    33,     3,    38,    34,    34,    47,    20,
      36,    10,    34,    43,    55,    56,    15,    16,    39,    18,
      19,    36,    47,    33,    47,    55,    56,    34,    34,    34,
      34,    34,     9,    47,    33,    47,    35,    12,     4,     5,
       6,     7,     8,   148,    43,    11,    12,    13,    14,    47,
     240,    17,    89,   145,    20,    21,    22,    56,   164,   112,
     107,   140,    -1,   141,    -1,    -1,    -1,    33,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    -1,    42,    43,    -1,    -1,
      46,    47,    48,    49,    14,    51,    52,    53,    54,    55,
      -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    33,    -1,    21,    22,    37,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    46,    33,    48,    49,
      -1,    51,    52,    53,    54,    55,    42,    43,    -1,    -1,
      46,    -1,    48,    49,    14,    51,    52,    53,    54,    55,
      -1,    21,    22,    -1,    -1,    -1,    -1,    -1,    14,    -1,
      -1,    -1,    -1,    33,    -1,    21,    22,    -1,    -1,    -1,
      -1,    -1,    42,    43,    -1,    -1,    46,    33,    48,    49,
      -1,    51,    52,    53,    54,    55,    42,    43,    -1,    -1,
      46,    -1,    48,    49,    -1,    51,    52,    53,    54,    55
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    10,    15,    16,    18,    19,    33,    43,    55,
      56,    58,    59,    60,    61,    66,    67,    68,    72,    73,
      78,    83,    89,    90,    91,    55,    85,    89,    90,     0,
      60,    69,    70,    71,    89,    67,    67,    55,    76,    63,
      91,    33,    35,    84,    37,    34,    47,    41,    50,    62,
      74,    37,    37,   107,    92,    14,    21,    22,    33,    42,
      43,    46,    48,    49,    51,    52,    53,    54,    55,    93,
     115,   116,   119,   120,   122,   123,   124,   125,   126,   127,
     128,   129,   130,   131,   132,   133,   134,   135,   136,    37,
      55,    86,    87,    71,    89,    37,   101,   136,   107,    37,
      77,   108,    67,    94,    95,    96,    97,    33,   119,    33,
     119,   119,    67,   121,   135,   119,   120,   120,   120,   120,
     120,    36,    21,    22,    23,    33,    35,    40,    50,    43,
      44,    45,    48,    49,    24,    25,    26,    27,    28,    29,
      30,    31,    86,    88,    38,    41,   101,   102,    75,    72,
      79,    80,    64,    65,    66,    67,    33,    35,    89,    90,
      98,    99,   100,    34,    41,   121,    33,    90,    98,    34,
      34,    55,   117,   118,   133,   135,    55,   133,   120,   120,
     120,   122,   122,   124,   124,   124,   124,   125,   125,   128,
     130,    38,    50,    87,    38,    41,    79,    81,    82,    89,
      38,    80,     4,     5,     6,     7,     8,    11,    12,    13,
      17,    20,    47,   103,   104,   105,   106,   107,   109,   110,
     111,   114,   135,    66,    94,    99,    93,   100,    33,    35,
      32,    97,    34,   120,    34,    41,    36,   135,   101,    38,
      41,    47,    47,   136,    47,    39,   105,    33,    33,   113,
     135,    33,    33,    38,   105,    47,    34,    34,    36,    94,
      93,   133,    82,    39,   105,    20,   112,   113,   135,    47,
     135,   135,    34,    36,   105,    33,    34,    47,    34,    34,
      34,   135,   105,   113,   105,   105,   105,    34,    47,     9,
      47,   113,   105
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
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
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
yy_stack_print (yytype_int16 *bottom, yytype_int16 *top)
#else
static void
yy_stack_print (bottom, top)
    yytype_int16 *bottom;
    yytype_int16 *top;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; bottom <= top; ++bottom)
    YYFPRINTF (stderr, " %d", *bottom);
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
      fprintf (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       		       );
      fprintf (stderr, "\n");
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



/* The look-ahead symbol.  */
int yychar;

/* The semantic value of the look-ahead symbol.  */
YYSTYPE yylval;

/* Number of syntax errors so far.  */
int yynerrs;



/*----------.
| yyparse.  |
`----------*/

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
  int yyn;
  int yyresult;
  /* Number of tokens to shift before error messages enabled.  */
  int yyerrstatus;
  /* Look-ahead token as an internal (translated) token number.  */
  int yytoken = 0;
#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

  /* Three stacks and their tools:
     `yyss': related to states,
     `yyvs': related to semantic values,
     `yyls': related to locations.

     Refer to the stacks thru separate pointers, to allow yyoverflow
     to reallocate them elsewhere.  */

  /* The state stack.  */
  yytype_int16 yyssa[YYINITDEPTH];
  yytype_int16 *yyss = yyssa;
  yytype_int16 *yyssp;

  /* The semantic value stack.  */
  YYSTYPE yyvsa[YYINITDEPTH];
  YYSTYPE *yyvs = yyvsa;
  YYSTYPE *yyvsp;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  YYSIZE_T yystacksize = YYINITDEPTH;

  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;


  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY;		/* Cause a token to be read.  */

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
	YYSTACK_RELOCATE (yyss);
	YYSTACK_RELOCATE (yyvs);

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

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     look-ahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to look-ahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a look-ahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid look-ahead symbol.  */
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

  if (yyn == YYFINAL)
    YYACCEPT;

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the look-ahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token unless it is eof.  */
  if (yychar != YYEOF)
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
#line 33 "yacc.y"
    {root=makeNode(N_PROGRAM,NIL,(yyvsp[(1) - (1)]),NIL); checkForwardReference();;}
    break;

  case 3:
#line 36 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 4:
#line 37 "yacc.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 5:
#line 40 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 6:
#line 41 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 7:
#line 44 "yacc.y"
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));;}
    break;

  case 8:
#line 45 "yacc.y"
    {(yyval)=setFunctionDeclaratorBody((yyvsp[(3) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 9:
#line 46 "yacc.y"
    {(yyval)=setFunctionDeclaratorSpecifier((yyvsp[(1) - (1)]),makeSpecifier(int_type,0));;}
    break;

  case 10:
#line 47 "yacc.y"
    {(yyval)=setFunctionDeclaratorBody((yyvsp[(2) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 11:
#line 50 "yacc.y"
    {(yyval)=NIL;;}
    break;

  case 12:
#line 51 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 13:
#line 54 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 14:
#line 55 "yacc.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 15:
#line 60 "yacc.y"
    {(yyval)=setDeclaratorListSpecifier((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]));;}
    break;

  case 16:
#line 64 "yacc.y"
    {(yyval)=makeSpecifier((yyvsp[(1) - (1)]),0);;}
    break;

  case 17:
#line 66 "yacc.y"
    {(yyval)=makeSpecifier(0,(yyvsp[(1) - (1)]));;}
    break;

  case 18:
#line 68 "yacc.y"
    {(yyval)=updateSpecifier((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]),0);;}
    break;

  case 19:
#line 70 "yacc.y"
    {(yyval)=updateSpecifier((yyvsp[(2) - (2)]),0,(yyvsp[(1) - (2)]));;}
    break;

  case 20:
#line 74 "yacc.y"
    {(yyval)=S_AUTO;;}
    break;

  case 21:
#line 75 "yacc.y"
    {(yyval)=S_STATIC;;}
    break;

  case 22:
#line 76 "yacc.y"
    {(yyval)=S_TYPEDEF;;}
    break;

  case 23:
#line 79 "yacc.y"
    {(yyval)=makeDummyIdentifier();;}
    break;

  case 24:
#line 80 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 25:
#line 83 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 26:
#line 85 "yacc.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 27:
#line 88 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 28:
#line 89 "yacc.y"
    {(yyval)=setDeclaratorInit((A_ID*)(yyvsp[(1) - (3)]),(A_NODE*)(yyvsp[(3) - (3)]));;}
    break;

  case 29:
#line 92 "yacc.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 30:
#line 93 "yacc.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 31:
#line 94 "yacc.y"
    {(yyval) = (yyvsp[(1) - (1)]);;}
    break;

  case 32:
#line 98 "yacc.y"
    {(yyval)=setTypeStructOrEnumIdentifier((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]),ID_STRUCT);;}
    break;

  case 33:
#line 99 "yacc.y"
    {(yyval)=current_id;current_level++;;}
    break;

  case 34:
#line 100 "yacc.y"
    {checkForwardReference();(yyval)=setTypeField((yyvsp[(3) - (7)]),(yyvsp[(6) - (7)]));current_level--;
	current_id=(yyvsp[(5) - (7)]);;}
    break;

  case 35:
#line 102 "yacc.y"
    {(yyval)=makeType((yyvsp[(1) - (1)]));;}
    break;

  case 36:
#line 102 "yacc.y"
    {(yyval)=current_id;current_level++;;}
    break;

  case 37:
#line 103 "yacc.y"
    {checkForwardReference();(yyval)=setTypeField((yyvsp[(2) - (6)]),(yyvsp[(5) - (6)]));
	current_level--;current_id=(yyvsp[(4) - (6)]);;}
    break;

  case 38:
#line 106 "yacc.y"
    {(yyval)=getTypeOfStructOrEnumRefIdentifier((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]),ID_STRUCT);;}
    break;

  case 39:
#line 109 "yacc.y"
    {(yyval)=T_STRUCT;;}
    break;

  case 40:
#line 110 "yacc.y"
    {(yyval)=T_UNION;;}
    break;

  case 41:
#line 113 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 42:
#line 114 "yacc.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 43:
#line 118 "yacc.y"
    {(yyval)=setStructDeclaratorListSpecifier((yyvsp[(2) - (3)]),(yyvsp[(1) - (3)]));;}
    break;

  case 44:
#line 122 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 45:
#line 124 "yacc.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 46:
#line 127 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 47:
#line 131 "yacc.y"
    {(yyval)=setTypeStructOrEnumIdentifier(T_ENUM,(yyvsp[(2) - (2)]),ID_ENUM);;}
    break;

  case 48:
#line 132 "yacc.y"
    {(yyval)=setTypeField((yyvsp[(3) - (6)]),(yyvsp[(5) - (6)]));;}
    break;

  case 49:
#line 133 "yacc.y"
    {(yyval)=makeType(T_ENUM);;}
    break;

  case 50:
#line 134 "yacc.y"
    {(yyval)=setTypeField((yyvsp[(2) - (5)]),(yyvsp[(4) - (5)]));;}
    break;

  case 51:
#line 136 "yacc.y"
    {(yyval)=getTypeOfStructOrEnumRefIdentifier(T_ENUM,(yyvsp[(2) - (2)]),ID_ENUM);;}
    break;

  case 52:
#line 139 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 53:
#line 140 "yacc.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 54:
#line 144 "yacc.y"
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[(1) - (1)])),ID_ENUM_LITERAL);;}
    break;

  case 55:
#line 146 "yacc.y"
    {(yyval)=setDeclaratorKind(makeIdentifier((yyvsp[(1) - (1)])),ID_ENUM_LITERAL);;}
    break;

  case 56:
#line 147 "yacc.y"
    {(yyval)=setDeclaratorInit((yyvsp[(2) - (4)]),(yyvsp[(4) - (4)]));;}
    break;

  case 57:
#line 150 "yacc.y"
    {(yyval)=setDeclaratorElementType((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));;}
    break;

  case 58:
#line 151 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 59:
#line 154 "yacc.y"
    {(yyval)=makeType(T_POINTER);;}
    break;

  case 60:
#line 155 "yacc.y"
    {(yyval)=setTypeElementType((yyvsp[(2) - (2)]),makeType(T_POINTER));;}
    break;

  case 61:
#line 159 "yacc.y"
    {(yyval)=makeIdentifier((yyvsp[(1) - (1)]));;}
    break;

  case 62:
#line 160 "yacc.y"
    {(yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 63:
#line 162 "yacc.y"
    {(yyval)=setDeclaratorElementType((yyvsp[(1) - (4)]),setTypeExpr(makeType(T_ARRAY),(yyvsp[(3) - (4)])));;}
    break;

  case 64:
#line 163 "yacc.y"
    {(yyval)=current_id;current_level++;;}
    break;

  case 65:
#line 165 "yacc.y"
    {checkForwardReference();current_id=(yyvsp[(3) - (5)]);current_level--;
	(yyval)=setDeclaratorElementType((yyvsp[(1) - (5)]),setTypeField(makeType(T_FUNC),(yyvsp[(4) - (5)])));;}
    break;

  case 66:
#line 169 "yacc.y"
    {(yyval)=NIL;;}
    break;

  case 67:
#line 170 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 68:
#line 173 "yacc.y"
    {(yyval)=NIL;;}
    break;

  case 69:
#line 174 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 70:
#line 177 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 71:
#line 178 "yacc.y"
    {(yyval)=linkDeclaratorList(
	(yyvsp[(1) - (3)]),setDeclaratorKind(makeDummyIdentifier(),ID_PARM));;}
    break;

  case 72:
#line 182 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 73:
#line 184 "yacc.y"
    {(yyval)=linkDeclaratorList((yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 74:
#line 188 "yacc.y"
    {(yyval)=setParameterDeclaratorSpecifier((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));;}
    break;

  case 75:
#line 190 "yacc.y"
    {(yyval)=setParameterDeclaratorSpecifier(setDeclaratorType(
	makeDummyIdentifier(),(yyvsp[(2) - (2)])),(yyvsp[(1) - (2)]));;}
    break;

  case 76:
#line 194 "yacc.y"
    {(yyval)=NIL;;}
    break;

  case 77:
#line 195 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 78:
#line 198 "yacc.y"
    {(yyval)=makeType(T_POINTER);;}
    break;

  case 79:
#line 199 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 80:
#line 201 "yacc.y"
    {(yyval)=setTypeElementType((yyvsp[(2) - (2)]),makeType(T_POINTER));;}
    break;

  case 81:
#line 204 "yacc.y"
    {(yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 82:
#line 206 "yacc.y"
    {(yyval)=setTypeExpr(makeType(T_ARRAY),(yyvsp[(2) - (3)]));;}
    break;

  case 83:
#line 208 "yacc.y"
    {(yyval)=setTypeExpr(makeType(T_FUNC),(yyvsp[(2) - (3)]));;}
    break;

  case 84:
#line 210 "yacc.y"
    {(yyval)=setTypeElementType((yyvsp[(1) - (4)]),setTypeExpr(makeType(T_ARRAY),(yyvsp[(3) - (4)])));;}
    break;

  case 85:
#line 212 "yacc.y"
    {(yyval)=setTypeElementType((yyvsp[(1) - (4)]),setTypeExpr(makeType(T_FUNC),(yyvsp[(3) - (4)])));;}
    break;

  case 86:
#line 216 "yacc.y"
    {(yyval)=(A_NODE*)makeNode(N_INIT_LIST_ONE,NIL,(yyvsp[(1) - (1)]),NIL);;}
    break;

  case 87:
#line 217 "yacc.y"
    {(yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 88:
#line 221 "yacc.y"
    {(yyval)=makeNode(N_INIT_LIST,(yyvsp[(1) - (1)]),NIL,makeNode(N_INIT_LIST_NIL,NIL,NIL,NIL));;}
    break;

  case 89:
#line 222 "yacc.y"
    {(yyval)=makeNodeList(N_INIT_LIST,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 90:
#line 225 "yacc.y"
    {(yyval)=makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL);;}
    break;

  case 91:
#line 226 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 92:
#line 230 "yacc.y"
    {(yyval)=makeNode(N_STMT_LIST,(yyvsp[(1) - (1)]),NIL,
	makeNode(N_STMT_LIST_NIL,NIL,NIL,NIL));;}
    break;

  case 93:
#line 232 "yacc.y"
    {(yyval)=makeNodeList(N_STMT_LIST,(yyvsp[(1) - (2)]),(yyvsp[(2) - (2)]));;}
    break;

  case 94:
#line 236 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 95:
#line 237 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 96:
#line 238 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 97:
#line 239 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 98:
#line 240 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 99:
#line 241 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 100:
#line 245 "yacc.y"
    {(yyval)=makeNode(N_STMT_LABEL_CASE, (yyvsp[(2) - (4)]),NIL,(yyvsp[(4) - (4)]));;}
    break;

  case 101:
#line 247 "yacc.y"
    {(yyval)=makeNode(N_STMT_LABEL_DEFAULT,NIL,(yyvsp[(3) - (3)]),NIL);;}
    break;

  case 102:
#line 250 "yacc.y"
    {(yyval)=current_id;current_level++;;}
    break;

  case 103:
#line 251 "yacc.y"
    {checkForwardReference();
	(yyval)=makeNode(N_STMT_COMPOUND,(yyvsp[(3) - (5)]),NIL,(yyvsp[(4) - (5)])); current_id=(yyvsp[(2) - (5)]);
	current_level--;;}
    break;

  case 104:
#line 256 "yacc.y"
    {(yyval)=makeNode(N_STMT_EMPTY,NIL,NIL,NIL);;}
    break;

  case 105:
#line 257 "yacc.y"
    {(yyval)=makeNode(N_STMT_EXPRESSION,NIL,(yyvsp[(1) - (2)]),NIL);;}
    break;

  case 106:
#line 261 "yacc.y"
    {(yyval)=makeNode(N_STMT_IF,(yyvsp[(3) - (5)]),NIL,(yyvsp[(5) - (5)]));;}
    break;

  case 107:
#line 263 "yacc.y"
    {(yyval)=makeNode(N_STMT_IF_ELSE,(yyvsp[(3) - (7)]),(yyvsp[(5) - (7)]),(yyvsp[(7) - (7)]));;}
    break;

  case 108:
#line 265 "yacc.y"
    {(yyval)=makeNode(N_STMT_SWITCH,(yyvsp[(3) - (5)]),NIL,(yyvsp[(5) - (5)]));;}
    break;

  case 109:
#line 269 "yacc.y"
    {(yyval)=makeNode(N_STMT_WHILE,(yyvsp[(3) - (5)]),NIL,(yyvsp[(5) - (5)]));;}
    break;

  case 110:
#line 271 "yacc.y"
    {(yyval)=makeNode(N_STMT_DO,(yyvsp[(2) - (7)]),NIL,(yyvsp[(5) - (7)]));;}
    break;

  case 111:
#line 273 "yacc.y"
    {(yyval)=makeNode(N_STMT_FOR,(yyvsp[(3) - (5)]),NIL,(yyvsp[(5) - (5)]));;}
    break;

  case 112:
#line 277 "yacc.y"
    {(yyval)=makeNode(N_FOR_EXP,(yyvsp[(1) - (5)]),(yyvsp[(3) - (5)]),(yyvsp[(5) - (5)]));;}
    break;

  case 113:
#line 280 "yacc.y"
    {(yyval)=NIL;;}
    break;

  case 114:
#line 281 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 115:
#line 285 "yacc.y"
    {(yyval)=makeNode(N_STMT_RETURN,NIL,(yyvsp[(2) - (3)]),NIL);;}
    break;

  case 116:
#line 287 "yacc.y"
    {(yyval)=makeNode(N_STMT_CONTINUE,NIL,NIL,NIL);;}
    break;

  case 117:
#line 289 "yacc.y"
    {(yyval)=makeNode(N_STMT_BREAK,NIL,NIL,NIL);;}
    break;

  case 118:
#line 293 "yacc.y"
    {(yyval)=makeNode(N_EXP_IDENT,NIL,getIdentifierDeclared((yyvsp[(1) - (1)])),NIL);;}
    break;

  case 119:
#line 294 "yacc.y"
    {(yyval)=makeNode(N_EXP_INT_CONST,NIL,(yyvsp[(1) - (1)]),NIL);;}
    break;

  case 120:
#line 295 "yacc.y"
    {(yyval)=makeNode(N_EXP_FLOAT_CONST,NIL,(yyvsp[(1) - (1)]),NIL);;}
    break;

  case 121:
#line 296 "yacc.y"
    {(yyval)=makeNode(N_EXP_CHAR_CONST,NIL,(yyvsp[(1) - (1)]),NIL);;}
    break;

  case 122:
#line 297 "yacc.y"
    {(yyval)=makeNode(N_EXP_STRING_LITERAL,NIL,(yyvsp[(1) - (1)]),NIL);;}
    break;

  case 123:
#line 298 "yacc.y"
    {(yyval)=(yyvsp[(2) - (3)]);;}
    break;

  case 124:
#line 301 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 125:
#line 303 "yacc.y"
    {(yyval)=makeNode(N_EXP_ARRAY,(yyvsp[(1) - (4)]),NIL,(yyvsp[(3) - (4)]));;}
    break;

  case 126:
#line 305 "yacc.y"
    {(yyval)=makeNode(N_EXP_FUNCTION_CALL,(yyvsp[(1) - (4)]),NIL,(yyvsp[(3) - (4)]));;}
    break;

  case 127:
#line 307 "yacc.y"
    {(yyval)=makeNode(N_EXP_STRUCT,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 128:
#line 309 "yacc.y"
    {(yyval)=makeNode(N_EXP_ARROW,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 129:
#line 311 "yacc.y"
    {(yyval)=makeNode(N_EXP_POST_INC,NIL,(yyvsp[(1) - (2)]),NIL);;}
    break;

  case 130:
#line 313 "yacc.y"
    {(yyval)=makeNode(N_EXP_POST_DEC,NIL,(yyvsp[(1) - (2)]),NIL);;}
    break;

  case 131:
#line 316 "yacc.y"
    {(yyval)=makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL);;}
    break;

  case 132:
#line 317 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 133:
#line 321 "yacc.y"
    {(yyval)=makeNode(N_ARG_LIST,(yyvsp[(1) - (1)]),NIL,makeNode(N_ARG_LIST_NIL,NIL,NIL,NIL));;}
    break;

  case 134:
#line 323 "yacc.y"
    {(yyval)=makeNodeList(N_ARG_LIST,(yyvsp[(1) - (3)]),(yyvsp[(3) - (3)]));;}
    break;

  case 135:
#line 326 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 136:
#line 328 "yacc.y"
    {(yyval)=makeNode(N_EXP_PRE_INC,NIL,(yyvsp[(2) - (2)]),NIL);;}
    break;

  case 137:
#line 330 "yacc.y"
    {(yyval)=makeNode(N_EXP_PRE_DEC,NIL,(yyvsp[(2) - (2)]),NIL);;}
    break;

  case 138:
#line 331 "yacc.y"
    {(yyval)=makeNode(N_EXP_AMP,NIL,(yyvsp[(2) - (2)]),NIL);;}
    break;

  case 139:
#line 332 "yacc.y"
    {(yyval)=makeNode(N_EXP_STAR,NIL,(yyvsp[(2) - (2)]),NIL);;}
    break;

  case 140:
#line 333 "yacc.y"
    {(yyval)=makeNode(N_EXP_NOT,NIL,(yyvsp[(2) - (2)]),NIL);;}
    break;

  case 141:
#line 334 "yacc.y"
    {(yyval)=makeNode(N_EXP_MINUS,NIL,(yyvsp[(2) - (2)]),NIL);;}
    break;

  case 142:
#line 335 "yacc.y"
    {(yyval)=makeNode(N_EXP_PLUS,NIL,(yyvsp[(2) - (2)]),NIL);;}
    break;

  case 143:
#line 337 "yacc.y"
    {(yyval)=makeNode(N_EXP_SIZE_EXP,NIL,(yyvsp[(2) - (2)]),NIL);;}
    break;

  case 144:
#line 339 "yacc.y"
    {(yyval)=makeNode(N_EXP_SIZE_TYPE,NIL,(yyvsp[(3) - (4)]),NIL);;}
    break;

  case 145:
#line 342 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 146:
#line 344 "yacc.y"
    {(yyval)=makeNode(N_EXP_CAST,(yyvsp[(2) - (4)]),NIL,(yyvsp[(4) - (4)]));;}
    break;

  case 147:
#line 348 "yacc.y"
    {(yyval)=setTypeNameSpecifier((yyvsp[(2) - (2)]),(yyvsp[(1) - (2)]));;}
    break;

  case 148:
#line 351 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 149:
#line 353 "yacc.y"
    {(yyval)=makeNode(N_EXP_MUL,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 150:
#line 355 "yacc.y"
    {(yyval)= makeNode(N_EXP_DIV,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 151:
#line 357 "yacc.y"
    {(yyval)= makeNode(N_EXP_MOD,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 152:
#line 360 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 153:
#line 362 "yacc.y"
    {(yyval)=makeNode(N_EXP_ADD,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 154:
#line 364 "yacc.y"
    {(yyval)=makeNode(N_EXP_SUB,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 155:
#line 367 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 156:
#line 370 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 157:
#line 372 "yacc.y"
    {(yyval)=makeNode(N_EXP_LSS,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 158:
#line 374 "yacc.y"
    {(yyval)=makeNode(N_EXP_GTR,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 159:
#line 376 "yacc.y"
    {(yyval)=makeNode(N_EXP_LEQ,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 160:
#line 378 "yacc.y"
    {(yyval)=makeNode(N_EXP_GEQ,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 161:
#line 381 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 162:
#line 383 "yacc.y"
    {(yyval)=makeNode(N_EXP_EQL,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 163:
#line 385 "yacc.y"
    {(yyval)=makeNode(N_EXP_NEQ,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 164:
#line 388 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 165:
#line 391 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 166:
#line 394 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 167:
#line 397 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 168:
#line 399 "yacc.y"
    {(yyval)=makeNode(N_EXP_AND,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 169:
#line 402 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 170:
#line 404 "yacc.y"
    {(yyval)=makeNode(N_EXP_OR,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 171:
#line 407 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 172:
#line 410 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 173:
#line 412 "yacc.y"
    {(yyval)=makeNode(N_EXP_ASSIGN,(yyvsp[(1) - (3)]),NIL,(yyvsp[(3) - (3)]));;}
    break;

  case 174:
#line 415 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 175:
#line 418 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;

  case 176:
#line 421 "yacc.y"
    {(yyval)=(yyvsp[(1) - (1)]);;}
    break;


/* Line 1267 of yacc.c.  */
#line 2656 "y.tab.c"
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
      /* If just tried and failed to reuse look-ahead token after an
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

  /* Else will try to reuse look-ahead token after shifting the error
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

  if (yyn == YYFINAL)
    YYACCEPT;

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

#ifndef yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEOF && yychar != YYEMPTY)
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


#line 423 "yacc.y"

extern char *yytext;

void print_current_id_list () {
	
	A_ID *id;
	id = current_id;
	printf("(current_id) ");
	while (id != NIL) {
		printf("%s > ", id -> name);
		id = id -> prev;
	}
	printf("NULL\n");
}
int yyerror(char*s) {
	printf("\nline %d: %s near %s \n", line_no, s, yytext);
	exit(1);
}

int yywrap() {return(1);}

void main() {
	initialize();
	yyparse();

	if (syntax_error) exit(1);

	print_ast(root); 
	exit(0);
}
