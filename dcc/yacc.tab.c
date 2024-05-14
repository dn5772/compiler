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
     REGISTER_SYM = 276,
     EXTERN_SYM = 277,
     CONST_SYM = 278,
     VOLATILE_SYM = 279,
     PLUSPLUS = 280,
     MINUSMINUS = 281,
     ARROW = 282,
     LSS = 283,
     GTR = 284,
     LEQ = 285,
     GEQ = 286,
     EQL = 287,
     NEQ = 288,
     AMPAMP = 289,
     BARBAR = 290,
     DOTDOTDOT = 291,
     LP = 292,
     RP = 293,
     LB = 294,
     RB = 295,
     LR = 296,
     RR = 297,
     COLON = 298,
     PERIOD = 299,
     COMMA = 300,
     EXCL = 301,
     STAR = 302,
     SLACH = 303,
     PERCENT = 304,
     AMP = 305,
     SEMICOLON = 306,
     PLUS = 307,
     MINUS = 308,
     ASSIGN = 309,
     INTEGER_CONSTANT = 310,
     FLOAT_CONSTANT = 311,
     STRING_LITERAL = 312,
     CHARACTER_CONSTANT = 313,
     IDENTIFIER = 314,
     TYPE_IDENTIFIER = 315,
     QUEST = 316,
     XOR = 317,
     TILDE = 318,
     BAR = 319,
     LSHIFT = 320,
     RSHIFT = 321
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
#define REGISTER_SYM 276
#define EXTERN_SYM 277
#define CONST_SYM 278
#define VOLATILE_SYM 279
#define PLUSPLUS 280
#define MINUSMINUS 281
#define ARROW 282
#define LSS 283
#define GTR 284
#define LEQ 285
#define GEQ 286
#define EQL 287
#define NEQ 288
#define AMPAMP 289
#define BARBAR 290
#define DOTDOTDOT 291
#define LP 292
#define RP 293
#define LB 294
#define RB 295
#define LR 296
#define RR 297
#define COLON 298
#define PERIOD 299
#define COMMA 300
#define EXCL 301
#define STAR 302
#define SLACH 303
#define PERCENT 304
#define AMP 305
#define SEMICOLON 306
#define PLUS 307
#define MINUS 308
#define ASSIGN 309
#define INTEGER_CONSTANT 310
#define FLOAT_CONSTANT 311
#define STRING_LITERAL 312
#define CHARACTER_CONSTANT 313
#define IDENTIFIER 314
#define TYPE_IDENTIFIER 315
#define QUEST 316
#define XOR 317
#define TILDE 318
#define BAR 319
#define LSHIFT 320
#define RSHIFT 321




/* Copy the first part of user declarations.  */
#line 9 "yacc.y"

	#include <stdio.h>
	#include <stdlib.h>
	int line_no = 1;
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
#line 247 "yacc.tab.c"

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
#define YYFINAL  36
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   651

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  67
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  68
/* YYNRULES -- Number of rules.  */
#define YYNRULES  182
/* YYNRULES -- Number of states.  */
#define YYNSTATES  312

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   321

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
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    12,    14,    18,    21,
      25,    27,    29,    31,    34,    37,    40,    42,    44,    46,
      48,    50,    52,    54,    56,    60,    62,    66,    68,    70,
      72,    78,    83,    86,    88,    90,    92,    95,    99,   101,
     103,   106,   109,   111,   115,   117,   120,   124,   130,   135,
     138,   140,   144,   146,   150,   153,   155,   158,   162,   163,
     165,   167,   170,   172,   176,   181,   186,   187,   189,   190,
     192,   194,   198,   200,   204,   207,   210,   211,   213,   215,
     217,   220,   224,   228,   232,   237,   242,   244,   248,   250,
     254,   256,   258,   260,   262,   264,   266,   271,   275,   279,
     284,   285,   288,   289,   292,   294,   297,   303,   311,   317,
     323,   331,   341,   342,   344,   348,   351,   354,   356,   358,
     360,   362,   364,   368,   370,   375,   380,   384,   388,   391,
     394,   395,   397,   399,   403,   405,   408,   411,   414,   417,
     420,   423,   426,   429,   432,   437,   439,   444,   446,   449,
     451,   455,   459,   463,   465,   469,   473,   475,   479,   483,
     485,   489,   493,   497,   501,   503,   507,   511,   513,   517,
     519,   523,   525,   529,   531,   535,   537,   541,   543,   549,
     551,   555,   557
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int16 yyrhs[] =
{
      68,     0,    -1,    69,    -1,    70,    -1,    69,    70,    -1,
      71,    -1,    72,    -1,    73,    89,   106,    -1,    89,   106,
      -1,    73,    76,    51,    -1,    78,    -1,    74,    -1,    75,
      -1,    78,    73,    -1,    74,    73,    -1,    75,    73,    -1,
       3,    -1,    15,    -1,    18,    -1,    21,    -1,    22,    -1,
      23,    -1,    24,    -1,    77,    -1,    76,    45,    77,    -1,
      89,    -1,    89,    54,   102,    -1,    79,    -1,    86,    -1,
      60,    -1,    80,    59,    41,    81,    42,    -1,    80,    41,
      81,    42,    -1,    80,    59,    -1,    16,    -1,    19,    -1,
      82,    -1,    81,    82,    -1,    83,    84,    51,    -1,    78,
      -1,    75,    -1,    78,    83,    -1,    75,    83,    -1,    85,
      -1,    84,    45,    85,    -1,    89,    -1,    43,   134,    -1,
      89,    43,   134,    -1,    10,    59,    41,    87,    42,    -1,
      10,    41,    87,    42,    -1,    10,    59,    -1,    88,    -1,
      87,    45,    88,    -1,    59,    -1,    59,    54,   133,    -1,
      90,    93,    -1,    93,    -1,    47,    91,    -1,    47,    91,
      90,    -1,    -1,    92,    -1,    75,    -1,    92,    75,    -1,
      59,    -1,    37,    89,    38,    -1,    93,    39,    94,    40,
      -1,    93,    37,    95,    38,    -1,    -1,   134,    -1,    -1,
      96,    -1,    97,    -1,    97,    45,    36,    -1,    98,    -1,
      97,    45,    98,    -1,    73,    89,    -1,    73,    99,    -1,
      -1,   100,    -1,    90,    -1,   101,    -1,    90,   101,    -1,
      37,   100,    38,    -1,    39,    94,    40,    -1,    37,    95,
      38,    -1,   101,    39,    94,    40,    -1,   101,    37,    95,
      38,    -1,   134,    -1,    41,   103,    42,    -1,   102,    -1,
     103,    45,   102,    -1,   105,    -1,   106,    -1,   109,    -1,
     110,    -1,   111,    -1,   113,    -1,     5,   134,    43,   104,
      -1,     7,    43,   104,    -1,    59,    43,   104,    -1,    41,
     107,   108,    42,    -1,    -1,   107,    72,    -1,    -1,   108,
     104,    -1,    51,    -1,   133,    51,    -1,    12,    37,   133,
      38,   104,    -1,    12,    37,   133,    38,   104,     9,   104,
      -1,    17,    37,   133,    38,   104,    -1,    20,    37,   133,
      38,   104,    -1,     8,   104,    20,    37,   133,    38,    51,
      -1,    11,    37,   112,    51,   112,    51,   112,    38,   104,
      -1,    -1,   133,    -1,    13,   112,    51,    -1,     6,    51,
      -1,     4,    51,    -1,    59,    -1,    55,    -1,    56,    -1,
      58,    -1,    57,    -1,    37,   133,    38,    -1,   114,    -1,
     115,    39,   133,    40,    -1,   115,    37,   116,    38,    -1,
     115,    44,    59,    -1,   115,    27,    59,    -1,   115,    25,
      -1,   115,    26,    -1,    -1,   117,    -1,   132,    -1,   117,
      45,   132,    -1,   115,    -1,    25,   118,    -1,    26,   118,
      -1,    50,   119,    -1,    47,   119,    -1,    46,   119,    -1,
      53,   119,    -1,    63,   119,    -1,    52,   119,    -1,    14,
     118,    -1,    14,    37,   120,    38,    -1,   118,    -1,    37,
     120,    38,   119,    -1,    73,    -1,    73,   100,    -1,   119,
      -1,   121,    47,   119,    -1,   121,    48,   119,    -1,   121,
      49,   119,    -1,   121,    -1,   122,    52,   121,    -1,   122,
      53,   121,    -1,   122,    -1,   123,    65,   122,    -1,   123,
      66,   122,    -1,   123,    -1,   124,    28,   123,    -1,   124,
      29,   123,    -1,   124,    30,   123,    -1,   124,    31,   123,
      -1,   124,    -1,   125,    32,   124,    -1,   125,    33,   124,
      -1,   125,    -1,   126,    50,   125,    -1,   126,    -1,   127,
      62,   126,    -1,   127,    -1,   128,    64,   127,    -1,   128,
      -1,   129,    34,   128,    -1,   129,    -1,   130,    35,   129,
      -1,   130,    -1,   130,    61,   133,    43,   131,    -1,   131,
      -1,   118,    54,   132,    -1,   132,    -1,   133,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    18,    18,    21,    22,    25,    26,    29,    30,    33,
      36,    37,    38,    39,    40,    41,    44,    44,    44,    44,
      44,    47,    47,    50,    51,    54,    55,    58,    59,    60,
      63,    64,    65,    68,    69,    72,    73,    76,    79,    80,
      81,    82,    85,    86,    89,    90,    91,    94,    95,    96,
      99,   100,   103,   104,   107,   108,   111,   112,   115,   117,
     120,   121,   125,   126,   127,   128,   130,   132,   134,   136,
     139,   140,   143,   144,   147,   148,   150,   152,   155,   156,
     157,   160,   161,   162,   163,   164,   167,   168,   171,   172,
     175,   176,   177,   178,   179,   180,   183,   184,   185,   188,
     190,   192,   194,   196,   199,   200,   203,   204,   205,   208,
     209,   210,   212,   214,   217,   218,   219,   222,   223,   224,
     225,   226,   227,   230,   231,   232,   233,   234,   235,   236,
     238,   240,   243,   244,   247,   248,   249,   250,   251,   252,
     253,   254,   255,   256,   257,   260,   261,   264,   265,   268,
     269,   270,   271,   274,   275,   276,   279,   280,   281,   284,
     285,   286,   287,   288,   291,   292,   293,   296,   297,   300,
     301,   304,   305,   308,   309,   312,   313,   316,   317,   319,
     320,   323,   326
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
  "REGISTER_SYM", "EXTERN_SYM", "CONST_SYM", "VOLATILE_SYM", "PLUSPLUS",
  "MINUSMINUS", "ARROW", "LSS", "GTR", "LEQ", "GEQ", "EQL", "NEQ",
  "AMPAMP", "BARBAR", "DOTDOTDOT", "LP", "RP", "LB", "RB", "LR", "RR",
  "COLON", "PERIOD", "COMMA", "EXCL", "STAR", "SLACH", "PERCENT", "AMP",
  "SEMICOLON", "PLUS", "MINUS", "ASSIGN", "INTEGER_CONSTANT",
  "FLOAT_CONSTANT", "STRING_LITERAL", "CHARACTER_CONSTANT", "IDENTIFIER",
  "TYPE_IDENTIFIER", "QUEST", "XOR", "TILDE", "BAR", "LSHIFT", "RSHIFT",
  "$accept", "program", "translation_unit", "external_declaration",
  "function_definition", "declaration", "declaration_specifiers",
  "storage_class_specifier", "type_qualifier", "init_declarator_list",
  "init_declarator", "type_specifier", "struct_specifier",
  "struct_or_union", "struct_declaration_list", "struct_declaration",
  "specifier_qualifier_list", "struct_declarator_list",
  "struct_declarator", "enum_specifier", "enumerator_list", "enumerator",
  "declarator", "pointer", "type_qualifier_list_opt",
  "type_qualifier_list", "direct_declarator", "constant_expression_opt",
  "parameter_type_list_opt", "parameter_type_list", "parameter_list",
  "parameter_declaration", "abstract_declarator_opt",
  "abstract_declarator", "direct_abstract_declarator", "initializer",
  "initializer_list", "statement", "labeled_statment",
  "compound_statement", "declaration_list", "statement_list",
  "expression_statement", "selection_statement", "iteration_statement",
  "expression_opt", "jump_statement", "primary_expression",
  "postfix_expression", "arg_expression_list_opt", "arg_expression_list",
  "unary_expression", "cast_expression", "type_name",
  "multiplicative_expression", "additive_expression", "shift_expression",
  "relational_expression", "equality_expression", "AND_expression",
  "exclusive_OR_expression", "inclusive_OR_expression",
  "logical_AND_expression", "logical_OR_expression",
  "conditional_expression", "assignment_expression", "expression",
  "constant_expression", 0
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
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    67,    68,    69,    69,    70,    70,    71,    71,    72,
      73,    73,    73,    73,    73,    73,    74,    74,    74,    74,
      74,    75,    75,    76,    76,    77,    77,    78,    78,    78,
      79,    79,    79,    80,    80,    81,    81,    82,    83,    83,
      83,    83,    84,    84,    85,    85,    85,    86,    86,    86,
      87,    87,    88,    88,    89,    89,    90,    90,    91,    91,
      92,    92,    93,    93,    93,    93,    94,    94,    95,    95,
      96,    96,    97,    97,    98,    98,    99,    99,   100,   100,
     100,   101,   101,   101,   101,   101,   102,   102,   103,   103,
     104,   104,   104,   104,   104,   104,   105,   105,   105,   106,
     107,   107,   108,   108,   109,   109,   110,   110,   110,   111,
     111,   111,   112,   112,   113,   113,   113,   114,   114,   114,
     114,   114,   114,   115,   115,   115,   115,   115,   115,   115,
     116,   116,   117,   117,   118,   118,   118,   118,   118,   118,
     118,   118,   118,   118,   118,   119,   119,   120,   120,   121,
     121,   121,   121,   122,   122,   122,   123,   123,   123,   124,
     124,   124,   124,   124,   125,   125,   125,   126,   126,   127,
     127,   128,   128,   129,   129,   130,   130,   131,   131,   132,
     132,   133,   134
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     1,     1,     3,     2,     3,
       1,     1,     1,     2,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     3,     1,     1,     1,
       5,     4,     2,     1,     1,     1,     2,     3,     1,     1,
       2,     2,     1,     3,     1,     2,     3,     5,     4,     2,
       1,     3,     1,     3,     2,     1,     2,     3,     0,     1,
       1,     2,     1,     3,     4,     4,     0,     1,     0,     1,
       1,     3,     1,     3,     2,     2,     0,     1,     1,     1,
       2,     3,     3,     3,     4,     4,     1,     3,     1,     3,
       1,     1,     1,     1,     1,     1,     4,     3,     3,     4,
       0,     2,     0,     2,     1,     2,     5,     7,     5,     5,
       7,     9,     0,     1,     3,     2,     2,     1,     1,     1,
       1,     1,     3,     1,     4,     4,     3,     3,     2,     2,
       0,     1,     1,     3,     1,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     4,     1,     4,     1,     2,     1,
       3,     3,     3,     1,     3,     3,     1,     3,     3,     1,
       3,     3,     3,     3,     1,     3,     3,     1,     3,     1,
       3,     1,     3,     1,     3,     1,     3,     1,     5,     1,
       3,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,    16,     0,    17,    33,    18,    34,    19,    20,    21,
      22,     0,    58,    62,    29,     0,     2,     3,     5,     6,
       0,    11,    12,    10,    27,     0,    28,     0,     0,    55,
       0,    49,     0,    60,    56,    59,     1,     4,     0,    23,
      25,    14,    15,    13,     0,    32,   100,     8,    54,    68,
      66,    52,     0,    50,     0,    63,    57,    61,     0,     9,
       0,     7,    39,    38,     0,    35,     0,     0,   102,    76,
       0,    69,    70,    72,     0,     0,     0,     0,     0,     0,
       0,     0,     0,   118,   119,   121,   120,   117,     0,     0,
     123,   134,   145,   149,   153,   156,   159,   164,   167,   169,
     171,   173,   175,   177,   179,   181,   182,    67,     0,    48,
       0,     0,    24,    25,     0,    26,    86,    41,    40,    31,
      36,     0,     0,    42,    44,     0,   101,     0,     0,    68,
      66,    74,    78,    75,    77,    79,    65,     0,     0,   143,
       0,   135,   136,   147,     0,     0,   145,   139,   138,   137,
     142,   140,   141,    64,   128,   129,     0,   130,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
      53,    51,    47,    88,     0,    45,     0,    37,     0,    30,
       0,     0,     0,     0,     0,     0,     0,   112,     0,     0,
      99,   104,   117,   103,    90,    91,    92,    93,    94,    95,
       0,     0,     0,     0,    80,    68,    66,    71,    73,     0,
      68,    78,   148,     0,   122,   127,     0,   131,   132,     0,
     126,   180,   150,   151,   152,   154,   155,   157,   158,   160,
     161,   162,   163,   165,   166,   168,   170,   172,   174,   176,
       0,    87,     0,    43,    46,   116,     0,   115,     0,     0,
     112,     0,     0,   113,     0,     0,     0,   105,    83,    81,
      82,     0,     0,   144,   146,   125,     0,   124,     0,    89,
       0,    97,     0,     0,     0,   114,     0,     0,    98,    85,
      84,   133,   178,    96,     0,   112,     0,     0,     0,     0,
       0,   106,   108,   109,     0,   112,     0,   110,     0,   107,
       0,   111
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    15,    16,    17,    18,    19,    69,    21,    22,    38,
      39,    23,    24,    25,    64,    65,    66,   122,   123,    26,
      52,    53,    27,    28,    34,    35,    29,    89,   211,    71,
      72,    73,   133,   212,   135,   115,   184,   203,   204,   205,
      68,   128,   206,   207,   208,   262,   209,    90,    91,   226,
     227,    92,    93,   144,    94,    95,    96,    97,    98,    99,
     100,   101,   102,   103,   104,   105,   210,   107
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -245
static const yytype_int16 yypact[] =
{
     445,  -245,   -18,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
    -245,     3,   121,  -245,  -245,    46,   445,  -245,  -245,  -245,
       3,   514,   514,   514,  -245,    11,  -245,    42,    -4,    35,
      16,    53,    -1,  -245,    87,   121,  -245,  -245,    64,  -245,
     -15,  -245,  -245,  -245,   100,    99,  -245,  -245,    35,   514,
     534,    89,    37,  -245,    16,  -245,  -245,  -245,     3,  -245,
     520,  -245,   100,   100,   193,  -245,    -5,   100,   514,    30,
     114,  -245,   119,  -245,   574,   588,   588,   244,   534,   534,
     534,   534,   534,  -245,  -245,  -245,  -245,  -245,   534,   128,
    -245,   194,   118,  -245,    65,   101,    93,   120,   129,   126,
     139,   140,   174,   -26,  -245,  -245,  -245,  -245,   534,  -245,
      16,    85,  -245,   159,   520,  -245,  -245,  -245,  -245,  -245,
    -245,   534,    81,  -245,   175,   233,  -245,     3,   304,   415,
     534,  -245,    -3,  -245,  -245,    47,  -245,   492,   244,  -245,
     534,  -245,  -245,    26,   184,   188,  -245,  -245,  -245,  -245,
    -245,  -245,  -245,  -245,  -245,  -245,   168,   534,   534,   170,
     534,   534,   534,   534,   534,   534,   534,   534,   534,   534,
     534,   534,   534,   534,   534,   534,   534,   534,   534,   534,
    -245,  -245,  -245,  -245,    86,  -245,    -5,  -245,   534,  -245,
     179,   534,   181,   191,   364,   199,   200,   534,   202,   204,
    -245,  -245,   203,  -245,  -245,  -245,  -245,  -245,  -245,  -245,
     197,   212,   213,   221,    47,   514,   534,  -245,  -245,   226,
     462,    98,  -245,   534,  -245,  -245,   238,   232,  -245,   239,
    -245,  -245,  -245,  -245,  -245,    65,    65,   101,   101,    93,
      93,    93,    93,   120,   120,   129,   126,   139,   140,   174,
     235,  -245,   520,  -245,  -245,  -245,   237,  -245,   364,   222,
     534,   534,   231,  -245,   534,   534,   364,  -245,  -245,  -245,
    -245,   245,   247,  -245,  -245,  -245,   534,  -245,   534,  -245,
     364,  -245,   248,   241,   246,  -245,   250,   251,  -245,  -245,
    -245,  -245,  -245,  -245,   534,   534,   364,   364,   364,   260,
     254,   297,  -245,  -245,   262,   534,   364,  -245,   276,  -245,
     364,  -245
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -245,  -245,  -245,   303,  -245,   252,     8,  -245,   161,  -245,
     264,   -19,  -245,  -245,   256,   -47,   108,  -245,   141,  -245,
     271,   216,    -9,   -22,  -245,  -245,   -21,  -116,   -48,  -245,
    -245,   195,  -245,   -56,  -117,  -110,  -245,  -141,  -245,    41,
    -245,  -245,  -245,  -245,  -245,  -244,  -245,  -245,  -245,  -245,
    -245,    17,   -60,   190,    10,    33,   103,    34,   157,   158,
     160,   162,   156,  -245,    57,  -154,   -50,   -55
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -1
static const yytype_uint16 yytable[] =
{
     106,    70,    32,   228,   183,   116,   231,    48,    20,   178,
     106,    40,    56,   134,   213,   214,   283,   120,   147,   148,
     149,   150,   151,    30,    20,    63,    46,   145,   152,    41,
      42,    43,    11,    11,   129,   179,   130,    55,   121,    60,
      11,    31,    12,    63,    63,    63,    36,   132,    63,   113,
      12,   300,    44,   259,    13,    13,    13,   124,   180,   116,
     131,   308,    13,   220,   106,   130,   185,   129,    47,   130,
      45,   106,    49,    12,    50,    51,   127,    12,   120,   109,
     106,    61,   110,    46,   215,   143,   216,   222,   145,    13,
     145,   139,   141,   142,    54,   146,   146,   146,   146,   146,
     272,   232,   233,   234,   214,   146,    63,   132,   229,    58,
       2,    48,   161,   162,   163,    59,     4,   281,   113,     6,
      32,   221,   291,     9,    10,   288,   186,   182,   251,   250,
     110,   252,   187,   254,    12,   220,   256,   130,   106,   293,
      67,   106,   279,   108,     9,    10,   143,   263,   168,   169,
     170,   171,   136,   164,   165,   301,   302,   303,   166,   167,
      14,   172,   173,   274,   137,   309,   106,   271,   153,   311,
     117,   118,   160,    33,   235,   236,   174,   124,   146,   146,
     146,   146,   146,   146,   146,   146,   146,   146,   146,   146,
     146,   146,   146,   146,   146,   146,    57,   116,   221,   237,
     238,   175,   106,     2,   176,    62,   243,   244,   177,     4,
     263,   284,     6,    60,   286,   287,     9,    10,   188,   154,
     155,   156,   223,    62,    62,    62,   224,   225,    62,   230,
     255,   157,   257,   158,   258,   119,   260,   261,   159,   264,
     146,   265,   282,     2,   299,   263,   266,     1,   267,     4,
     268,   269,     6,    14,     2,   263,     9,    10,    74,     3,
       4,   270,     5,     6,   273,     7,     8,     9,    10,    75,
      76,   239,   240,   241,   242,   189,   275,   276,   278,   277,
     280,    77,   285,   289,   296,   294,    62,   290,   297,   298,
      78,    79,   295,    14,    80,   146,    81,    82,   304,    83,
      84,    85,    86,    87,    14,   305,   306,    88,   190,   191,
     192,   193,   194,   307,   310,   195,   196,   197,    74,    37,
     126,   198,   112,   125,   199,   111,   181,   253,   219,    75,
      76,   245,   218,   246,   249,   292,   247,     0,     0,   248,
       0,    77,     0,     0,     0,    46,   200,     0,     0,     0,
      78,    79,     0,     0,    80,   201,    81,    82,     0,    83,
      84,    85,    86,   202,     0,     0,     0,    88,   190,   191,
     192,   193,   194,     0,     0,   195,   196,   197,    74,     0,
       0,   198,     0,     0,   199,     0,     0,     0,     0,    75,
      76,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    77,     0,     0,     0,    46,     0,     0,     0,     0,
      78,    79,     0,     0,    80,   201,    81,    82,     1,    83,
      84,    85,    86,   202,     0,     2,     0,    88,     0,     0,
       3,     4,     0,     5,     6,     0,     7,     8,     9,    10,
       0,     0,     0,     0,     0,     0,     0,     0,     1,     0,
       0,     0,   129,     0,   130,     2,     0,     0,     0,     0,
       3,     4,    12,     5,     6,     1,     7,     8,     9,    10,
       0,     0,     2,     0,    13,    14,     0,     3,     4,     0,
       5,     6,    11,     7,     8,     9,    10,     0,     0,     0,
       0,     0,    12,     0,     0,     1,     0,     0,     0,   220,
       0,   130,     2,     0,    13,    14,     0,     3,     4,    12,
       5,     6,     0,     7,     8,     9,    10,     1,     0,     0,
       0,     0,    14,     0,     2,     0,     0,     0,   217,     3,
       4,     0,     5,     6,    74,     7,     8,     9,    10,     0,
       0,     0,     0,     0,     0,    75,    76,     0,    74,     0,
       0,     0,    14,     0,     0,     0,     0,    77,     0,    75,
      76,   114,     0,     0,     0,     0,    78,    79,     0,     0,
      80,    77,    81,    82,    14,    83,    84,    85,    86,    87,
      78,    79,     0,    88,    80,     0,    81,    82,    74,    83,
      84,    85,    86,    87,     0,     0,     0,    88,     0,    75,
      76,     0,    74,     0,     0,     0,     0,     0,     0,     0,
       0,   138,     0,    75,    76,     0,     0,     0,     0,     0,
      78,    79,     0,     0,    80,   140,    81,    82,     0,    83,
      84,    85,    86,    87,    78,    79,     0,    88,    80,     0,
      81,    82,     0,    83,    84,    85,    86,    87,     0,     0,
       0,    88
};

static const yytype_int16 yycheck[] =
{
      50,    49,    11,   157,   114,    60,   160,    28,     0,    35,
      60,    20,    34,    69,   130,   132,   260,    64,    78,    79,
      80,    81,    82,    41,    16,    44,    41,    77,    88,    21,
      22,    23,    37,    37,    37,    61,    39,    38,    43,    54,
      37,    59,    47,    62,    63,    64,     0,    69,    67,    58,
      47,   295,    41,   194,    59,    59,    59,    66,   108,   114,
      69,   305,    59,    37,   114,    39,   121,    37,    27,    39,
      59,   121,    37,    47,    39,    59,    68,    47,   125,    42,
     130,    40,    45,    41,    37,    77,    39,   143,   138,    59,
     140,    74,    75,    76,    41,    78,    79,    80,    81,    82,
     216,   161,   162,   163,   221,    88,   125,   129,   158,    45,
      10,   132,    47,    48,    49,    51,    16,   258,   127,    19,
     129,   143,   276,    23,    24,   266,    45,    42,    42,   179,
      45,    45,    51,   188,    47,    37,   191,    39,   188,   280,
      41,   191,   252,    54,    23,    24,   138,   197,    28,    29,
      30,    31,    38,    52,    53,   296,   297,   298,    65,    66,
      60,    32,    33,   223,    45,   306,   216,   215,    40,   310,
      62,    63,    54,    12,   164,   165,    50,   186,   161,   162,
     163,   164,   165,   166,   167,   168,   169,   170,   171,   172,
     173,   174,   175,   176,   177,   178,    35,   252,   220,   166,
     167,    62,   252,    10,    64,    44,   172,   173,    34,    16,
     260,   261,    19,    54,   264,   265,    23,    24,    43,    25,
      26,    27,    38,    62,    63,    64,    38,    59,    67,    59,
      51,    37,    51,    39,    43,    42,    37,    37,    44,    37,
     223,    37,    20,    10,   294,   295,    43,     3,    51,    16,
      38,    38,    19,    60,    10,   305,    23,    24,    14,    15,
      16,    40,    18,    19,    38,    21,    22,    23,    24,    25,
      26,   168,   169,   170,   171,    42,    38,    45,    43,    40,
      43,    37,    51,    38,    38,    37,   125,    40,    38,    38,
      46,    47,    51,    60,    50,   278,    52,    53,    38,    55,
      56,    57,    58,    59,    60,    51,     9,    63,     4,     5,
       6,     7,     8,    51,    38,    11,    12,    13,    14,    16,
      68,    17,    58,    67,    20,    54,   110,   186,   138,    25,
      26,   174,   137,   175,   178,   278,   176,    -1,    -1,   177,
      -1,    37,    -1,    -1,    -1,    41,    42,    -1,    -1,    -1,
      46,    47,    -1,    -1,    50,    51,    52,    53,    -1,    55,
      56,    57,    58,    59,    -1,    -1,    -1,    63,     4,     5,
       6,     7,     8,    -1,    -1,    11,    12,    13,    14,    -1,
      -1,    17,    -1,    -1,    20,    -1,    -1,    -1,    -1,    25,
      26,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    -1,    -1,    41,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    50,    51,    52,    53,     3,    55,
      56,    57,    58,    59,    -1,    10,    -1,    63,    -1,    -1,
      15,    16,    -1,    18,    19,    -1,    21,    22,    23,    24,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,     3,    -1,
      -1,    -1,    37,    -1,    39,    10,    -1,    -1,    -1,    -1,
      15,    16,    47,    18,    19,     3,    21,    22,    23,    24,
      -1,    -1,    10,    -1,    59,    60,    -1,    15,    16,    -1,
      18,    19,    37,    21,    22,    23,    24,    -1,    -1,    -1,
      -1,    -1,    47,    -1,    -1,     3,    -1,    -1,    -1,    37,
      -1,    39,    10,    -1,    59,    60,    -1,    15,    16,    47,
      18,    19,    -1,    21,    22,    23,    24,     3,    -1,    -1,
      -1,    -1,    60,    -1,    10,    -1,    -1,    -1,    36,    15,
      16,    -1,    18,    19,    14,    21,    22,    23,    24,    -1,
      -1,    -1,    -1,    -1,    -1,    25,    26,    -1,    14,    -1,
      -1,    -1,    60,    -1,    -1,    -1,    -1,    37,    -1,    25,
      26,    41,    -1,    -1,    -1,    -1,    46,    47,    -1,    -1,
      50,    37,    52,    53,    60,    55,    56,    57,    58,    59,
      46,    47,    -1,    63,    50,    -1,    52,    53,    14,    55,
      56,    57,    58,    59,    -1,    -1,    -1,    63,    -1,    25,
      26,    -1,    14,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    37,    -1,    25,    26,    -1,    -1,    -1,    -1,    -1,
      46,    47,    -1,    -1,    50,    37,    52,    53,    -1,    55,
      56,    57,    58,    59,    46,    47,    -1,    63,    50,    -1,
      52,    53,    -1,    55,    56,    57,    58,    59,    -1,    -1,
      -1,    63
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,     3,    10,    15,    16,    18,    19,    21,    22,    23,
      24,    37,    47,    59,    60,    68,    69,    70,    71,    72,
      73,    74,    75,    78,    79,    80,    86,    89,    90,    93,
      41,    59,    89,    75,    91,    92,     0,    70,    76,    77,
      89,    73,    73,    73,    41,    59,    41,   106,    93,    37,
      39,    59,    87,    88,    41,    38,    90,    75,    45,    51,
      54,   106,    75,    78,    81,    82,    83,    41,   107,    73,
      95,    96,    97,    98,    14,    25,    26,    37,    46,    47,
      50,    52,    53,    55,    56,    57,    58,    59,    63,    94,
     114,   115,   118,   119,   121,   122,   123,   124,   125,   126,
     127,   128,   129,   130,   131,   132,   133,   134,    54,    42,
      45,    87,    77,    89,    41,   102,   134,    83,    83,    42,
      82,    43,    84,    85,    89,    81,    72,    73,   108,    37,
      39,    89,    90,    99,   100,   101,    38,    45,    37,   118,
      37,   118,   118,    73,   120,   133,   118,   119,   119,   119,
     119,   119,   119,    40,    25,    26,    27,    37,    39,    44,
      54,    47,    48,    49,    52,    53,    65,    66,    28,    29,
      30,    31,    32,    33,    50,    62,    64,    34,    35,    61,
     133,    88,    42,   102,   103,   134,    45,    51,    43,    42,
       4,     5,     6,     7,     8,    11,    12,    13,    17,    20,
      42,    51,    59,   104,   105,   106,   109,   110,   111,   113,
     133,    95,   100,    94,   101,    37,    39,    36,    98,   120,
      37,    90,   100,    38,    38,    59,   116,   117,   132,   133,
      59,   132,   119,   119,   119,   121,   121,   122,   122,   123,
     123,   123,   123,   124,   124,   125,   126,   127,   128,   129,
     133,    42,    45,    85,   134,    51,   134,    51,    43,   104,
      37,    37,   112,   133,    37,    37,    43,    51,    38,    38,
      40,    95,    94,    38,   119,    38,    45,    40,    43,   102,
      43,   104,    20,   112,   133,    51,   133,   133,   104,    38,
      40,   132,   131,   104,    37,    51,    38,    38,    38,   133,
     112,   104,   104,   104,    38,    51,     9,    51,   112,   104,
      38,   104
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
      
/* Line 1267 of yacc.c.  */
#line 1834 "yacc.tab.c"
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


#line 328 "yacc.y"

extern char *yytext;

int main (){
	yyparse();
	printf("\nsuccess\n");
	return 0;
}
int yyerror(char*s) {
	printf("\nline %d: %s near %s \n", line_no, s, yytext);
	exit(1);
} 
int yywrap() {return(1);}
