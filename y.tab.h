
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

/* Line 1676 of yacc.c  */
#line 26 "myscanner.y"

int num; 
char* string;


/* Line 1676 of yacc.c  */
#line 134 "y.tab.h"
} YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

extern YYSTYPE yylval;


