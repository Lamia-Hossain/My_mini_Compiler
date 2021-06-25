
/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton interface for Bison's Yacc-like parsers in C
   
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

extern YYSTYPE yylval;


