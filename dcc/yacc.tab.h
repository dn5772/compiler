/* A Bison parser, made by GNU Bison 2.3.  */

/* Skeleton interface for Bison's Yacc-like parsers in C

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




#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
# define YYSTYPE_IS_TRIVIAL 1
#endif

extern YYSTYPE yylval;

