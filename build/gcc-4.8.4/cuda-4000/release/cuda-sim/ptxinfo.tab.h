/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison interface for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.

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

#ifndef YY_PTXINFO_HOME_NASTARAN_MICRO_RAMULATOR_GPGPUSIM_BUILD_GCC_4_8_4_CUDA_4000_RELEASE_CUDA_SIM_PTXINFO_TAB_H_INCLUDED
# define YY_PTXINFO_HOME_NASTARAN_MICRO_RAMULATOR_GPGPUSIM_BUILD_GCC_4_8_4_CUDA_4000_RELEASE_CUDA_SIM_PTXINFO_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int ptxinfo_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    INT_OPERAND = 258,
    HEADER = 259,
    INFO = 260,
    FUNC = 261,
    USED = 262,
    REGS = 263,
    BYTES = 264,
    LMEM = 265,
    SMEM = 266,
    CMEM = 267,
    IDENTIFIER = 268,
    PLUS = 269,
    COMMA = 270,
    LEFT_SQUARE_BRACKET = 271,
    RIGHT_SQUARE_BRACKET = 272,
    COLON = 273,
    SEMICOLON = 274,
    QUOTE = 275,
    LINE = 276,
    WARNING = 277,
    FOR = 278
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 30 "ptxinfo.y" /* yacc.c:1909  */

  int    int_value;
  char * string_value;

#line 83 "/home/nastaran/Micro/Ramulator+GPGPUSim/build/gcc-4.8.4/cuda-4000/release/cuda-sim/ptxinfo.tab.h" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE ptxinfo_lval;

int ptxinfo_parse (void);

#endif /* !YY_PTXINFO_HOME_NASTARAN_MICRO_RAMULATOR_GPGPUSIM_BUILD_GCC_4_8_4_CUDA_4000_RELEASE_CUDA_SIM_PTXINFO_TAB_H_INCLUDED  */
