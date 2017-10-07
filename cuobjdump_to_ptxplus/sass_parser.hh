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

#ifndef YY_SASS_SASS_PARSER_HH_INCLUDED
# define YY_SASS_SASS_PARSER_HH_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int sass_debug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    BAR = 258,
    ADA = 259,
    AND = 260,
    ANDS = 261,
    BRA = 262,
    BRX = 263,
    CAL = 264,
    COS = 265,
    DADD = 266,
    DMIN = 267,
    DMAX = 268,
    DFMA = 269,
    DMUL = 270,
    EX2 = 271,
    F2F = 272,
    F2I = 273,
    FADD = 274,
    FADD32 = 275,
    FADD32I = 276,
    FMAD = 277,
    FMAD32I = 278,
    FMUL = 279,
    FMUL32 = 280,
    FMUL32I = 281,
    FSET = 282,
    DSET = 283,
    G2R = 284,
    GLD = 285,
    GST = 286,
    I2F = 287,
    I2I = 288,
    IADD = 289,
    IADD32 = 290,
    IADD32I = 291,
    IMAD = 292,
    ISAD = 293,
    IMAD24 = 294,
    IMAD32I = 295,
    IMAD32 = 296,
    IADDCARRY = 297,
    IMUL = 298,
    IMUL24 = 299,
    IMUL24H = 300,
    IMULS24 = 301,
    IMUL32 = 302,
    IMUL32S24 = 303,
    IMUL32U24 = 304,
    IMUL32I = 305,
    IMUL32I24 = 306,
    IMUL32IS24 = 307,
    ISET = 308,
    LG2 = 309,
    LLD = 310,
    LST = 311,
    MOV = 312,
    MOV32 = 313,
    MVC = 314,
    MVI = 315,
    NOP = 316,
    NOT = 317,
    NOTS = 318,
    OR = 319,
    ORS = 320,
    R2A = 321,
    R2G = 322,
    R2GU16U8 = 323,
    RCP = 324,
    RCP32 = 325,
    RET = 326,
    RRO = 327,
    RSQ = 328,
    SIN = 329,
    SHL = 330,
    SHR = 331,
    SSY = 332,
    XOR = 333,
    XORS = 334,
    S2R = 335,
    SASS_LD = 336,
    STS = 337,
    LDS = 338,
    SASS_ST = 339,
    IMIN = 340,
    IMAX = 341,
    A2R = 342,
    FMAX = 343,
    FMIN = 344,
    TEX = 345,
    TEX32 = 346,
    C2R = 347,
    EXIT = 348,
    GRED = 349,
    PBK = 350,
    BRK = 351,
    R2C = 352,
    GATOM = 353,
    VOTE = 354,
    EQ = 355,
    EQU = 356,
    GE = 357,
    GEU = 358,
    GT = 359,
    GTU = 360,
    LE = 361,
    LEU = 362,
    LT = 363,
    LTU = 364,
    NE = 365,
    NEU = 366,
    DOTBEXT = 367,
    DOTS = 368,
    DOTSFU = 369,
    DOTTRUNC = 370,
    DOTCEIL = 371,
    DOTFLOOR = 372,
    DOTIR = 373,
    DOTUN = 374,
    DOTNODEP = 375,
    DOTSAT = 376,
    DOTANY = 377,
    DOTALL = 378,
    DOTF16 = 379,
    DOTF32 = 380,
    DOTF64 = 381,
    DOTS8 = 382,
    DOTS16 = 383,
    DOTS32 = 384,
    DOTS64 = 385,
    DOTS128 = 386,
    DOTU8 = 387,
    DOTU16 = 388,
    DOTU32 = 389,
    DOTU24 = 390,
    DOTU64 = 391,
    DOTHI = 392,
    DOTNOINC = 393,
    DOTEQ = 394,
    DOTEQU = 395,
    DOTFALSE = 396,
    DOTGE = 397,
    DOTGEU = 398,
    DOTGT = 399,
    DOTGTU = 400,
    DOTLE = 401,
    DOTLEU = 402,
    DOTLT = 403,
    DOTLTU = 404,
    DOTNE = 405,
    DOTNEU = 406,
    DOTNSF = 407,
    DOTSF = 408,
    DOTCARRY = 409,
    DOTCC = 410,
    DOTX = 411,
    DOTE = 412,
    DOTRED = 413,
    DOTPOPC = 414,
    REGISTER = 415,
    REGISTERLO = 416,
    REGISTERHI = 417,
    OFFSETREGISTER = 418,
    PREDREGISTER = 419,
    PREDREGISTER2 = 420,
    PREDREGISTER3 = 421,
    SREGISTER = 422,
    VERSIONHEADER = 423,
    FUNCTIONHEADER = 424,
    SMEMLOCATION = 425,
    ABSSMEMLOCATION = 426,
    GMEMLOCATION = 427,
    CMEMLOCATION = 428,
    LMEMLOCATION = 429,
    IDENTIFIER = 430,
    HEXLITERAL = 431,
    LEFTBRACKET = 432,
    RIGHTBRACKET = 433,
    PIPE = 434,
    TILDE = 435,
    NEWLINE = 436,
    SEMICOLON = 437,
    LABEL = 438,
    LABELSTART = 439,
    LABELEND = 440,
    PTXHEADER = 441,
    ELFHEADER = 442,
    INFOARCHVERSION = 443,
    INFOCODEVERSION_HEADER = 444,
    INFOCODEVERSION = 445,
    INFOPRODUCER = 446,
    INFOHOST = 447,
    INFOCOMPILESIZE_HEADER = 448,
    INFOCOMPILESIZE = 449,
    INFOIDENTIFIER = 450,
    DOT = 451,
    INSTHEX = 452,
    OSQBRACKET = 453,
    CSQBRACKET = 454
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef union YYSTYPE YYSTYPE;
union YYSTYPE
{
#line 42 "sass.y" /* yacc.c:1909  */

  double double_value;
  float  float_value;
  int    int_value;
  char * string_value;
  void * ptr_value;

#line 262 "sass_parser.hh" /* yacc.c:1909  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE sass_lval;

int sass_parse (void);

#endif /* !YY_SASS_SASS_PARSER_HH_INCLUDED  */
