/* A Bison parser, made by GNU Bison 3.0.2.  */

/* Bison implementation for Yacc-like parsers in C

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
#define YYBISON_VERSION "3.0.2"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1


/* Substitute the variable and function names.  */
#define yyparse         sass_parse
#define yylex           sass_lex
#define yyerror         sass_error
#define yydebug         sass_debug
#define yynerrs         sass_nerrs

#define yylval          sass_lval
#define yychar          sass_char

/* Copy the first part of user declarations.  */
#line 28 "sass.y" /* yacc.c:339  */

#include <stdio.h>
#include "cuobjdumpInstList.h"

int yylex(void);
void yyerror(const char*);
void debug_print( const char *s );

extern cuobjdumpInstList *g_instList;

cuobjdumpInst *instEntry;

#line 87 "sass_parser.cc" /* yacc.c:339  */

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "sass_parser.hh".  */
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
#line 42 "sass.y" /* yacc.c:355  */

  double double_value;
  float  float_value;
  int    int_value;
  char * string_value;
  void * ptr_value;

#line 335 "sass_parser.cc" /* yacc.c:355  */
};
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE sass_lval;

int sass_parse (void);

#endif /* !YY_SASS_SASS_PARSER_HH_INCLUDED  */

/* Copy the second part of user declarations.  */

#line 350 "sass_parser.cc" /* yacc.c:358  */

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
#else
typedef signed char yytype_int8;
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
# elif ! defined YYSIZE_T
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
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef YY_ATTRIBUTE
# if (defined __GNUC__                                               \
      && (2 < __GNUC__ || (__GNUC__ == 2 && 96 <= __GNUC_MINOR__)))  \
     || defined __SUNPRO_C && 0x5110 <= __SUNPRO_C
#  define YY_ATTRIBUTE(Spec) __attribute__(Spec)
# else
#  define YY_ATTRIBUTE(Spec) /* empty */
# endif
#endif

#ifndef YY_ATTRIBUTE_PURE
# define YY_ATTRIBUTE_PURE   YY_ATTRIBUTE ((__pure__))
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# define YY_ATTRIBUTE_UNUSED YY_ATTRIBUTE ((__unused__))
#endif

#if !defined _Noreturn \
     && (!defined __STDC_VERSION__ || __STDC_VERSION__ < 201112)
# if defined _MSC_VER && 1200 <= _MSC_VER
#  define _Noreturn __declspec (noreturn)
# else
#  define _Noreturn YY_ATTRIBUTE ((__noreturn__))
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN \
    _Pragma ("GCC diagnostic push") \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")\
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
             && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
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

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYSIZE_T yynewbytes;                                            \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / sizeof (*yyptr);                          \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  7
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   382

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  200
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  226
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  262

/* YYTRANSLATE[YYX] -- Symbol number corresponding to YYX as returned
   by yylex, with out-of-bounds checking.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   454

#define YYTRANSLATE(YYX)                                                \
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, without out-of-bounds checking.  */
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
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   121,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   138,   139,   140,   141,   142,   143,   144,
     145,   146,   147,   148,   149,   150,   151,   152,   153,   154,
     155,   156,   157,   158,   159,   160,   161,   162,   163,   164,
     165,   166,   167,   168,   169,   170,   171,   172,   173,   174,
     175,   176,   177,   178,   179,   180,   181,   182,   183,   184,
     185,   186,   187,   188,   189,   190,   191,   192,   193,   194,
     195,   196,   197,   198,   199
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    94,    94,    95,    97,    98,    99,   101,   102,   105,
     105,   117,   118,   119,   120,   121,   124,   124,   127,   128,
     131,   134,   151,   157,   158,   159,   160,   161,   164,   164,
     164,   164,   164,   164,   164,   164,   164,   164,   164,   164,
     165,   165,   165,   165,   165,   165,   165,   166,   166,   166,
     166,   166,   166,   166,   166,   166,   167,   167,   167,   167,
     167,   167,   167,   167,   167,   168,   168,   168,   168,   168,
     168,   168,   168,   169,   170,   170,   170,   170,   170,   170,
     170,   170,   170,   171,   171,   171,   171,   171,   171,   171,
     171,   171,   171,   171,   172,   172,   172,   172,   172,   172,
     172,   172,   172,   172,   173,   173,   173,   173,   173,   173,
     173,   173,   173,   174,   174,   174,   174,   174,   174,   174,
     177,   177,   199,   199,   217,   217,   235,   235,   254,   254,
     275,   277,   280,   281,   282,   283,   284,   285,   286,   287,
     288,   289,   290,   291,   292,   293,   294,   295,   298,   299,
     300,   301,   302,   303,   304,   305,   306,   307,   308,   309,
     310,   311,   314,   314,   316,   319,   320,   321,   322,   323,
     324,   325,   326,   327,   328,   332,   333,   334,   335,   336,
     337,   338,   339,   343,   344,   348,   349,   362,   363,   364,
     367,   368,   371,   372,   373,   374,   375,   376,   377,   378,
     379,   380,   381,   382,   385,   388,   391,   399,   407,   408,
     409,   412,   413,   414,   415,   416,   417,   418,   419,   420,
     421,   422,   423,   424,   425,   426,   427
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BAR", "ADA", "AND", "ANDS", "BRA",
  "BRX", "CAL", "COS", "DADD", "DMIN", "DMAX", "DFMA", "DMUL", "EX2",
  "F2F", "F2I", "FADD", "FADD32", "FADD32I", "FMAD", "FMAD32I", "FMUL",
  "FMUL32", "FMUL32I", "FSET", "DSET", "G2R", "GLD", "GST", "I2F", "I2I",
  "IADD", "IADD32", "IADD32I", "IMAD", "ISAD", "IMAD24", "IMAD32I",
  "IMAD32", "IADDCARRY", "IMUL", "IMUL24", "IMUL24H", "IMULS24", "IMUL32",
  "IMUL32S24", "IMUL32U24", "IMUL32I", "IMUL32I24", "IMUL32IS24", "ISET",
  "LG2", "LLD", "LST", "MOV", "MOV32", "MVC", "MVI", "NOP", "NOT", "NOTS",
  "OR", "ORS", "R2A", "R2G", "R2GU16U8", "RCP", "RCP32", "RET", "RRO",
  "RSQ", "SIN", "SHL", "SHR", "SSY", "XOR", "XORS", "S2R", "SASS_LD",
  "STS", "LDS", "SASS_ST", "IMIN", "IMAX", "A2R", "FMAX", "FMIN", "TEX",
  "TEX32", "C2R", "EXIT", "GRED", "PBK", "BRK", "R2C", "GATOM", "VOTE",
  "EQ", "EQU", "GE", "GEU", "GT", "GTU", "LE", "LEU", "LT", "LTU", "NE",
  "NEU", "DOTBEXT", "DOTS", "DOTSFU", "DOTTRUNC", "DOTCEIL", "DOTFLOOR",
  "DOTIR", "DOTUN", "DOTNODEP", "DOTSAT", "DOTANY", "DOTALL", "DOTF16",
  "DOTF32", "DOTF64", "DOTS8", "DOTS16", "DOTS32", "DOTS64", "DOTS128",
  "DOTU8", "DOTU16", "DOTU32", "DOTU24", "DOTU64", "DOTHI", "DOTNOINC",
  "DOTEQ", "DOTEQU", "DOTFALSE", "DOTGE", "DOTGEU", "DOTGT", "DOTGTU",
  "DOTLE", "DOTLEU", "DOTLT", "DOTLTU", "DOTNE", "DOTNEU", "DOTNSF",
  "DOTSF", "DOTCARRY", "DOTCC", "DOTX", "DOTE", "DOTRED", "DOTPOPC",
  "REGISTER", "REGISTERLO", "REGISTERHI", "OFFSETREGISTER", "PREDREGISTER",
  "PREDREGISTER2", "PREDREGISTER3", "SREGISTER", "VERSIONHEADER",
  "FUNCTIONHEADER", "SMEMLOCATION", "ABSSMEMLOCATION", "GMEMLOCATION",
  "CMEMLOCATION", "LMEMLOCATION", "IDENTIFIER", "HEXLITERAL",
  "LEFTBRACKET", "RIGHTBRACKET", "PIPE", "TILDE", "NEWLINE", "SEMICOLON",
  "LABEL", "LABELSTART", "LABELEND", "PTXHEADER", "ELFHEADER",
  "INFOARCHVERSION", "INFOCODEVERSION_HEADER", "INFOCODEVERSION",
  "INFOPRODUCER", "INFOHOST", "INFOCOMPILESIZE_HEADER", "INFOCOMPILESIZE",
  "INFOIDENTIFIER", "DOT", "INSTHEX", "OSQBRACKET", "CSQBRACKET",
  "$accept", "program", "sassCode", "functionList", "function", "$@1",
  "statementList", "statement", "$@2", "statementend", "instructionHex",
  "instructionLabel", "assemblyInstruction", "baseInstruction",
  "simpleInstructions", "pbkInstruction", "$@3", "branchInstructions",
  "$@4", "$@5", "$@6", "$@7", "modifierList", "modifier", "opTypes",
  "operandList", "$@8", "operand", "registerlocation", "regMod",
  "memorylocation", "immediateValue", "extraModifier",
  "instructionPredicate", "operandPredicate", "preOperand",
  "predicateModifier", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
     305,   306,   307,   308,   309,   310,   311,   312,   313,   314,
     315,   316,   317,   318,   319,   320,   321,   322,   323,   324,
     325,   326,   327,   328,   329,   330,   331,   332,   333,   334,
     335,   336,   337,   338,   339,   340,   341,   342,   343,   344,
     345,   346,   347,   348,   349,   350,   351,   352,   353,   354,
     355,   356,   357,   358,   359,   360,   361,   362,   363,   364,
     365,   366,   367,   368,   369,   370,   371,   372,   373,   374,
     375,   376,   377,   378,   379,   380,   381,   382,   383,   384,
     385,   386,   387,   388,   389,   390,   391,   392,   393,   394,
     395,   396,   397,   398,   399,   400,   401,   402,   403,   404,
     405,   406,   407,   408,   409,   410,   411,   412,   413,   414,
     415,   416,   417,   418,   419,   420,   421,   422,   423,   424,
     425,   426,   427,   428,   429,   430,   431,   432,   433,   434,
     435,   436,   437,   438,   439,   440,   441,   442,   443,   444,
     445,   446,   447,   448,   449,   450,   451,   452,   453,   454
};
# endif

#define YYPACT_NINF -184

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-184)))

#define YYTABLE_NINF -129

#define yytable_value_is_error(Yytable_value) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -126,  -174,  -163,     3,  -184,  -165,  -117,  -184,  -184,  -128,
    -121,  -116,  -128,  -184,  -128,  -184,  -184,  -128,  -120,  -184,
    -119,  -136,  -118,  -184,  -134,  -184,  -114,  -115,  -109,  -184,
    -112,  -184,   -96,  -184,  -184,   186,  -184,  -184,  -184,  -184,
    -184,  -184,  -113,  -184,   -73,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,   -80,
    -184,  -184,  -184,   -79,  -184,  -184,  -105,  -184,  -184,  -184,
     -48,  -106,   -57,   -18,   283,   -55,   283,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -105,  -184,   -67,
     -54,  -184,  -184,   -53,  -184,  -184,  -184,  -132,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,   -10,  -184,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,   -31,  -184,  -184,  -184,  -122,   -67,
    -184,  -184,  -184,  -184,  -184,  -184,  -184,  -184,   -48,  -127,
    -127,   -35,  -184,  -184,   -22,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,  -184,  -184,   -52,   -51,  -184,   -72,  -184,  -184,
    -184,  -184
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       0,     0,     0,     0,     3,     0,     0,     1,     2,     6,
       0,     0,     4,     8,     0,     9,     7,     5,    16,    15,
      16,     0,     0,    10,     0,    13,     0,     0,    19,    11,
       0,    14,     0,    20,    17,     0,    12,    21,   107,    28,
      29,    30,   122,    31,   126,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,   118,    64,    65,
      66,    67,    68,    69,    73,    70,    71,    72,    74,    75,
      76,    77,    78,    79,    80,    81,    82,    83,    84,    85,
      86,    87,    88,    89,    90,    91,    92,    93,    94,    97,
      95,    96,    98,    99,   100,   101,   102,   103,   104,   105,
     108,   109,   110,   111,   112,   113,   114,   115,   106,     0,
     120,   116,   117,     0,   119,    18,   131,    23,    27,    24,
       0,     0,     0,     0,     0,     0,     0,   133,   134,   135,
     136,   137,   138,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   155,   156,   157,   158,   159,
     160,   161,   139,   140,   141,   142,   164,   131,   132,   205,
       0,   125,   127,     0,    25,   121,    26,   162,   130,   211,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   224,   225,   226,   204,   123,   129,     0,   210,
     208,   209,   192,   193,   194,   195,   196,   197,   198,   199,
     200,   201,   202,   203,   184,   177,   178,   180,     0,   207,
     179,   185,   186,   187,   188,   189,   190,   191,     0,     0,
       0,     0,   163,   165,   170,   171,   172,   173,   174,   183,
     175,   182,   181,   206,     0,     0,   167,     0,   169,   168,
     166,   176
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -184,  -184,   126,   116,    27,  -184,  -184,   111,  -184,  -184,
    -184,  -184,  -184,  -184,  -142,  -184,  -184,  -184,  -184,  -184,
    -184,  -184,   -45,  -184,  -111,  -184,  -184,  -184,  -183,  -184,
    -184,  -184,  -184,  -104,  -184,  -184,   -94
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     3,     4,    12,    13,    18,    20,    21,    22,    34,
      35,    28,   135,   136,   137,   138,   145,   139,   140,   141,
     142,   143,   176,   177,   178,   187,   208,   242,   243,   250,
     244,   245,   246,   180,   247,   248,   205
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
     209,     5,   184,     7,   186,     6,   210,   147,   148,   149,
     150,   151,   152,   153,   154,   155,     9,   156,   157,   158,
     159,   160,   161,   162,   163,   164,   165,   166,   167,   168,
     169,   170,   171,   224,   225,   226,   227,   228,   251,    16,
     230,    11,     1,   252,    16,    25,    26,    29,    30,   -22,
     -22,   172,   173,   174,   175,     2,   255,   256,    10,    15,
      14,    19,    23,  -124,   211,  -128,    27,    31,    32,    36,
     181,   241,   189,   190,   191,   192,   193,   194,   195,   196,
     197,   198,   199,   200,   201,   202,   203,   204,    33,    37,
     212,   213,   214,   215,   216,   217,   218,   219,   220,   221,
     222,   223,   158,   159,   160,   161,   162,   163,   164,   165,
     166,   167,   168,   169,   170,   171,   144,   146,   179,   182,
     183,   185,   206,   207,   249,   257,   259,   261,   260,     8,
      17,    24,   188,   258,   254,   253,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
     224,   225,   226,   227,   228,     0,   229,   230,     0,     0,
     231,   232,   233,   234,   235,   236,   237,   238,     0,   239,
     240,     1,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     2,     0,     0,     0,   241,    38,
      39,    40,    41,    42,    43,    44,    45,    46,    47,    48,
      49,    50,    51,    52,    53,    54,    55,    56,    57,    58,
      59,    60,    61,    62,    63,    64,    65,    66,    67,    68,
      69,    70,    71,    72,    73,    74,    75,    76,    77,    78,
      79,    80,    81,    82,    83,    84,    85,    86,    87,    88,
      89,    90,    91,    92,    93,    94,    95,    96,    97,    98,
      99,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   118,
     119,   120,   121,   122,   123,   124,   125,   126,   127,   128,
     129,   130,   131,   132,   133,   134,    38,    39,    40,    41,
       0,    43,     0,    45,    46,    47,    48,    49,    50,    51,
      52,    53,    54,    55,    56,    57,    58,    59,    60,    61,
      62,    63,    64,    65,    66,    67,    68,    69,    70,    71,
      72,    73,    74,    75,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    97,    98,    99,   100,   101,
     102,   103,   104,   105,   106,   107,   108,   109,   110,   111,
     112,   113,   114,   115,   116,   117,   118,   119,   120,   121,
     122,   123,   124,   125,   126,   127,   128,     0,     0,   131,
     132,     0,   134
};

static const yytype_int16 yycheck[] =
{
      10,   175,   144,     0,   146,   168,    16,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   181,   122,   123,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   134,
     135,   136,   137,   160,   161,   162,   163,   164,   160,    12,
     167,   169,   168,   165,    17,   181,   182,   181,   182,   181,
     182,   156,   157,   158,   159,   181,   239,   240,   175,   175,
     181,   181,   181,   176,    74,   138,   184,   181,   183,   181,
     176,   198,   139,   140,   141,   142,   143,   144,   145,   146,
     147,   148,   149,   150,   151,   152,   153,   154,   197,   185,
     100,   101,   102,   103,   104,   105,   106,   107,   108,   109,
     110,   111,   124,   125,   126,   127,   128,   129,   130,   131,
     132,   133,   134,   135,   136,   137,   196,   196,   166,   176,
     138,   176,   176,   176,   155,   160,   178,   199,   179,     3,
      14,    20,   177,   244,   238,   229,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
     160,   161,   162,   163,   164,    -1,   166,   167,    -1,    -1,
     170,   171,   172,   173,   174,   175,   176,   177,    -1,   179,
     180,   168,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,   181,    -1,    -1,    -1,   198,     3,
       4,     5,     6,     7,     8,     9,    10,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    20,    21,    22,    23,
      24,    25,    26,    27,    28,    29,    30,    31,    32,    33,
      34,    35,    36,    37,    38,    39,    40,    41,    42,    43,
      44,    45,    46,    47,    48,    49,    50,    51,    52,    53,
      54,    55,    56,    57,    58,    59,    60,    61,    62,    63,
      64,    65,    66,    67,    68,    69,    70,    71,    72,    73,
      74,    75,    76,    77,    78,    79,    80,    81,    82,    83,
      84,    85,    86,    87,    88,    89,    90,    91,    92,    93,
      94,    95,    96,    97,    98,    99,     3,     4,     5,     6,
      -1,     8,    -1,    10,    11,    12,    13,    14,    15,    16,
      17,    18,    19,    20,    21,    22,    23,    24,    25,    26,
      27,    28,    29,    30,    31,    32,    33,    34,    35,    36,
      37,    38,    39,    40,    41,    42,    43,    44,    45,    46,
      47,    48,    49,    50,    51,    52,    53,    54,    55,    56,
      57,    58,    59,    60,    61,    62,    63,    64,    65,    66,
      67,    68,    69,    70,    71,    72,    73,    74,    75,    76,
      77,    78,    79,    80,    81,    82,    83,    84,    85,    86,
      87,    88,    89,    90,    91,    92,    93,    -1,    -1,    96,
      97,    -1,    99
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,   168,   181,   201,   202,   175,   168,     0,   202,   181,
     175,   169,   203,   204,   181,   175,   204,   203,   205,   181,
     206,   207,   208,   181,   207,   181,   182,   184,   211,   181,
     182,   181,   183,   197,   209,   210,   181,   185,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    50,    51,    52,    53,    54,
      55,    56,    57,    58,    59,    60,    61,    62,    63,    64,
      65,    66,    67,    68,    69,    70,    71,    72,    73,    74,
      75,    76,    77,    78,    79,    80,    81,    82,    83,    84,
      85,    86,    87,    88,    89,    90,    91,    92,    93,    94,
      95,    96,    97,    98,    99,   212,   213,   214,   215,   217,
     218,   219,   220,   221,   196,   216,   196,   112,   113,   114,
     115,   116,   117,   118,   119,   120,   122,   123,   124,   125,
     126,   127,   128,   129,   130,   131,   132,   133,   134,   135,
     136,   137,   156,   157,   158,   159,   222,   223,   224,   166,
     233,   176,   176,   138,   214,   176,   214,   225,   222,   139,
     140,   141,   142,   143,   144,   145,   146,   147,   148,   149,
     150,   151,   152,   153,   154,   236,   176,   176,   226,    10,
      16,    74,   100,   101,   102,   103,   104,   105,   106,   107,
     108,   109,   110,   111,   160,   161,   162,   163,   164,   166,
     167,   170,   171,   172,   173,   174,   175,   176,   177,   179,
     180,   198,   227,   228,   230,   231,   232,   234,   235,   155,
     229,   160,   165,   236,   233,   228,   228,   160,   224,   178,
     179,   199
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,   200,   201,   201,   202,   202,   202,   203,   203,   205,
     204,   206,   206,   206,   206,   206,   208,   207,   209,   209,
     210,   211,   212,   213,   213,   213,   213,   213,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     214,   214,   214,   214,   214,   214,   214,   214,   214,   214,
     216,   215,   218,   217,   219,   217,   220,   217,   221,   217,
     222,   222,   223,   223,   223,   223,   223,   223,   223,   223,
     223,   223,   223,   223,   223,   223,   223,   223,   224,   224,
     224,   224,   224,   224,   224,   224,   224,   224,   224,   224,
     224,   224,   226,   225,   225,   227,   227,   227,   227,   227,
     227,   227,   227,   227,   227,   228,   228,   228,   228,   228,
     228,   228,   228,   229,   229,   230,   230,   230,   230,   230,
     231,   231,   232,   232,   232,   232,   232,   232,   232,   232,
     232,   232,   232,   232,   233,   233,   234,   234,   235,   235,
     235,   236,   236,   236,   236,   236,   236,   236,   236,   236,
     236,   236,   236,   236,   236,   236,   236
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     2,     1,     4,     5,     3,     2,     1,     0,
       5,     3,     4,     2,     3,     1,     0,     3,     2,     0,
       1,     3,     3,     1,     1,     3,     3,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       0,     3,     0,     4,     0,     3,     0,     3,     0,     4,
       2,     0,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     0,     3,     0,     1,     3,     2,     3,     2,
       1,     1,     1,     1,     1,     2,     3,     1,     1,     1,
       1,     2,     2,     1,     0,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     2,     1,     2,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;                                                  \
    }                                                           \
while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*----------------------------------------.
| Print this symbol's value on YYOUTPUT.  |
`----------------------------------------*/

static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# endif
  YYUSE (yytype);
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyoutput, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyoutput, yytype, yyvaluep);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yytype_int16 *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  unsigned long int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[yyssp[yyi + 1 - yynrhs]],
                       &(yyvsp[(yyi + 1) - (yynrhs)])
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
static YYSIZE_T
yystrlen (const char *yystr)
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
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
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
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
  if (yypact_value_is_default (yyn))
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = yylex ();
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

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
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 4:
#line 97 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[-3].string_value)); debug_print((yyvsp[-2].string_value)); debug_print(" No parsing errors\n\n");  }
#line 1716 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 5:
#line 98 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[-3].string_value)); debug_print((yyvsp[-2].string_value)); debug_print(" No parsing errors\n\n");  }
#line 1722 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 9:
#line 105 "sass.y" /* yacc.c:1646  */
    {
					debug_print((yyvsp[-1].string_value)); 
					debug_print((yyvsp[0].string_value));
					debug_print("\n");
					g_instList->addEntry((yyvsp[0].string_value));
					instEntry = new cuobjdumpInst();
					instEntry->setBase(".entry");
					g_instList->add(instEntry);
					g_instList->getListEnd().addOperand((yyvsp[0].string_value));}
#line 1736 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 11:
#line 117 "sass.y" /* yacc.c:1646  */
    { debug_print("\n"); }
#line 1742 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 12:
#line 118 "sass.y" /* yacc.c:1646  */
    { debug_print(";\n"); }
#line 1748 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 13:
#line 119 "sass.y" /* yacc.c:1646  */
    { debug_print("\n"); }
#line 1754 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 14:
#line 120 "sass.y" /* yacc.c:1646  */
    { debug_print(";\n"); }
#line 1760 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 15:
#line 121 "sass.y" /* yacc.c:1646  */
    {}
#line 1766 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 16:
#line 124 "sass.y" /* yacc.c:1646  */
    { instEntry = new cuobjdumpInst(); }
#line 1772 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 19:
#line 128 "sass.y" /* yacc.c:1646  */
    {instEntry->setBase("NOP"); g_instList->add(instEntry); debug_print("NOP");}
#line 1778 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 21:
#line 134 "sass.y" /* yacc.c:1646  */
    { char* tempInput = (yyvsp[-1].string_value);
							  char* tempLabel = new char[12];
							  tempLabel[0] = 'l';
							  tempLabel[1] = '0';
							  tempLabel[2] = 'x';
							  for(int i=0; i<(8-strlen(tempInput)); i++)
							  {
								tempLabel[3+i] = '0';
							  }
							  for(int i=(11-strlen(tempInput)); i<11; i++)
							  {
								tempLabel[i] = tempInput[i-(11-strlen(tempInput))];
							  }
							  tempLabel[11] = '\0';
							  instEntry->setLabel(tempLabel); }
#line 1798 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 22:
#line 151 "sass.y" /* yacc.c:1646  */
    { }
#line 1804 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 23:
#line 157 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); instEntry->setBase((yyvsp[0].string_value)); g_instList->add(instEntry);}
#line 1810 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 25:
#line 159 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[-2].string_value)); instEntry->setBase((yyvsp[-2].string_value)); g_instList->add(instEntry); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 1816 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 26:
#line 160 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[-2].string_value)); instEntry->setBase((yyvsp[-2].string_value)); g_instList->add(instEntry); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 1822 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 120:
#line 177 "sass.y" /* yacc.c:1646  */
    {
						debug_print((yyvsp[0].string_value)); instEntry->setBase((yyvsp[0].string_value)); g_instList->add(instEntry);
					}
#line 1830 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 121:
#line 179 "sass.y" /* yacc.c:1646  */
    {
						char* tempInput = (yyvsp[0].string_value);
						char* tempLabel = new char[12];
						tempLabel[0] = 'l';
						tempLabel[1] = '0';
						tempLabel[2] = 'x';
						for(int i=0; i<(10-strlen(tempInput)); i++)
						{
							tempLabel[3+i] = '0';
						}
						for(int i=(13-strlen(tempInput)); i<11; i++)
						{
							tempLabel[i] = tempInput[i-(11-strlen(tempInput))];
						}
						tempLabel[11] = '\0';
						g_instList->getListEnd().addOperand(tempLabel);
						g_instList->addCubojdumpLabel(tempLabel);
					}
#line 1853 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 122:
#line 199 "sass.y" /* yacc.c:1646  */
    {debug_print((yyvsp[0].string_value)); instEntry->setBase((yyvsp[0].string_value)); g_instList->add(instEntry);}
#line 1859 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 123:
#line 200 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value));
				  char* tempInput = (yyvsp[0].string_value);
				  char* tempLabel = new char[12];
				  tempLabel[0] = 'l';
				  tempLabel[1] = '0';
				  tempLabel[2] = 'x';
				  for(int i=0; i<(10-strlen(tempInput)); i++)
				  {
					tempLabel[3+i] = '0';
				  }
				  for(int i=(13-strlen(tempInput)); i<11; i++)
				  {
					tempLabel[i] = tempInput[i-(11-strlen(tempInput))];
				  }
				  tempLabel[11] = '\0';
				  g_instList->getListEnd().addOperand(tempLabel);
				  g_instList->addCubojdumpLabel(tempLabel);}
#line 1881 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 124:
#line 217 "sass.y" /* yacc.c:1646  */
    {debug_print((yyvsp[0].string_value)); instEntry->setBase((yyvsp[0].string_value)); g_instList->add(instEntry);}
#line 1887 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 125:
#line 218 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value));
				  char* tempInput = (yyvsp[0].string_value);
				  char* tempLabel = new char[12];
				  tempLabel[0] = 'l';
				  tempLabel[1] = '0';
				  tempLabel[2] = 'x';
				  for(int i=0; i<(10-strlen(tempInput)); i++)
				  {
					tempLabel[3+i] = '0';
				  }
				  for(int i=(13-strlen(tempInput)); i<11; i++)
				  {
					tempLabel[i] = tempInput[i-(11-strlen(tempInput))];
				  }
				  tempLabel[11] = '\0';
				  g_instList->getListEnd().addOperand(tempLabel);
				  g_instList->addCubojdumpLabel(tempLabel);}
#line 1909 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 126:
#line 235 "sass.y" /* yacc.c:1646  */
    {debug_print((yyvsp[0].string_value)); instEntry->setBase((yyvsp[0].string_value)); g_instList->add(instEntry);}
#line 1915 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 127:
#line 236 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value));
				  char* tempInput = (yyvsp[0].string_value);
				  char* tempLabel = new char[12];
				  tempLabel[0] = 'l';
				  tempLabel[1] = '0';
				  tempLabel[2] = 'x';
				  for(int i=0; i<(10-strlen(tempInput)); i++)
				  {
					tempLabel[3+i] = '0';
				  }
				  for(int i=(13-strlen(tempInput)); i<11; i++)
				  {
					tempLabel[i] = tempInput[i-(11-strlen(tempInput))];
				  }
				  tempLabel[11] = '\0';
				  g_instList->getListEnd().addOperand(tempLabel);
				  g_instList->addCubojdumpLabel(tempLabel);}
#line 1937 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 128:
#line 254 "sass.y" /* yacc.c:1646  */
    {debug_print((yyvsp[0].string_value)); instEntry->setBase((yyvsp[0].string_value)); g_instList->add(instEntry);}
#line 1943 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 129:
#line 255 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value));
				  char* tempInput = (yyvsp[0].string_value);
				  char* tempLabel = new char[12];
				  tempLabel[0] = 'l';
				  tempLabel[1] = '0';
				  tempLabel[2] = 'x';
				  for(int i=0; i<(10-strlen(tempInput)); i++)
				  {
					tempLabel[3+i] = '0';
				  }
				  for(int i=(13-strlen(tempInput)); i<11; i++)
				  {
					tempLabel[i] = tempInput[i-(11-strlen(tempInput))];
				  }
				  tempLabel[11] = '\0';
				  g_instList->getListEnd().addOperand(tempLabel);
				  g_instList->addCubojdumpLabel(tempLabel);}
#line 1965 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 132:
#line 280 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addTypeModifier((yyvsp[0].string_value));}
#line 1971 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 133:
#line 281 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".bext"); }
#line 1977 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 134:
#line 282 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".s"); }
#line 1983 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 135:
#line 283 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".sfu"); }
#line 1989 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 136:
#line 284 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".rz"); }
#line 1995 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 137:
#line 285 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".rp"); }
#line 2001 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 138:
#line 286 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".rm"); }
#line 2007 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 139:
#line 287 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".x"); }
#line 2013 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 140:
#line 288 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".e"); }
#line 2019 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 141:
#line 289 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".red"); }
#line 2025 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 142:
#line 290 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".popc"); }
#line 2031 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 143:
#line 291 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".ir"); }
#line 2037 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 144:
#line 292 "sass.y" /* yacc.c:1646  */
    { /*g_instList->getListEnd().addBaseModifier(".un"); */}
#line 2043 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 145:
#line 293 "sass.y" /* yacc.c:1646  */
    { /*g_instList->getListEnd().addBaseModifier(".nodep"); */}
#line 2049 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 146:
#line 294 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".any"); }
#line 2055 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 147:
#line 295 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".all"); }
#line 2061 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 162:
#line 314 "sass.y" /* yacc.c:1646  */
    { debug_print(" "); }
#line 2067 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 163:
#line 314 "sass.y" /* yacc.c:1646  */
    {}
#line 2073 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 166:
#line 320 "sass.y" /* yacc.c:1646  */
    { g_instList->getListEnd().addBaseModifier(".abs"); }
#line 2079 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 169:
#line 323 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addTypeModifier((yyvsp[0].string_value));}
#line 2085 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 175:
#line 332 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[-1].string_value)); g_instList->addCuobjdumpRegister((yyvsp[-1].string_value));}
#line 2091 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 176:
#line 333 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[-2].string_value)); debug_print((yyvsp[-1].string_value)); debug_print((yyvsp[0].string_value)); g_instList->addCuobjdumpRegister((yyvsp[-1].string_value));}
#line 2097 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 177:
#line 334 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->addCuobjdumpRegister((yyvsp[0].string_value),true);}
#line 2103 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 178:
#line 335 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->addCuobjdumpRegister((yyvsp[0].string_value),true);}
#line 2109 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 179:
#line 336 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->addCuobjdumpRegister((yyvsp[0].string_value),false);}
#line 2115 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 180:
#line 337 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->addCuobjdumpRegister((yyvsp[0].string_value));}
#line 2121 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 181:
#line 338 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[-1].string_value)); debug_print(" "); debug_print((yyvsp[0].string_value)); g_instList->addCuobjdumpDoublePredReg((yyvsp[-1].string_value), (yyvsp[0].string_value));}
#line 2127 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 182:
#line 339 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[-1].string_value)); debug_print(" "); debug_print((yyvsp[0].string_value)); g_instList->addCuobjdumpDoublePredReg((yyvsp[-1].string_value), (yyvsp[0].string_value));}
#line 2133 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 185:
#line 348 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->addCuobjdumpMemoryOperand((yyvsp[0].string_value),1);}
#line 2139 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 186:
#line 349 "sass.y" /* yacc.c:1646  */
    {
				debug_print((yyvsp[0].string_value));
				char* input = (yyvsp[0].string_value);
				char* temp = new char[99];
				temp[0] = input[1];
				unsigned i=1;
				while (i < strlen(input)-2) {
					temp[i] = input[i+2];
					i++;
				}
				g_instList->addCuobjdumpMemoryOperand(temp,1);
				g_instList->getListEnd().addBaseModifier(".abs");
			}
#line 2157 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 187:
#line 362 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->addCuobjdumpMemoryOperand((yyvsp[0].string_value),2);}
#line 2163 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 188:
#line 363 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->addCuobjdumpMemoryOperand((yyvsp[0].string_value),0);}
#line 2169 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 189:
#line 364 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->addCuobjdumpMemoryOperand((yyvsp[0].string_value),3);}
#line 2175 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 190:
#line 367 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addOperand((yyvsp[0].string_value));}
#line 2181 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 191:
#line 368 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addOperand((yyvsp[0].string_value));}
#line 2187 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 192:
#line 371 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 2193 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 193:
#line 372 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 2199 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 194:
#line 373 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 2205 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 195:
#line 374 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 2211 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 196:
#line 375 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 2217 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 197:
#line 376 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 2223 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 198:
#line 377 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 2229 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 199:
#line 378 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 2235 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 200:
#line 379 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 2241 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 201:
#line 380 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 2247 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 202:
#line 381 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 2253 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 203:
#line 382 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier((yyvsp[0].string_value));}
#line 2259 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 204:
#line 385 "sass.y" /* yacc.c:1646  */
    {debug_print((yyvsp[-1].string_value)); debug_print((yyvsp[0].string_value));
								g_instList->getListEnd().setPredicate((yyvsp[-1].string_value));
								g_instList->getListEnd().addPredicateModifier((yyvsp[0].string_value));}
#line 2267 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 205:
#line 388 "sass.y" /* yacc.c:1646  */
    {debug_print((yyvsp[0].string_value)); g_instList->getListEnd().setPredicate((yyvsp[0].string_value));}
#line 2273 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 206:
#line 391 "sass.y" /* yacc.c:1646  */
    {
							debug_print((yyvsp[-1].string_value)); 
							debug_print((yyvsp[0].string_value));
							//g_instList->getListEnd().addOperand($1);
							g_instList->getListEnd().setPredicate((yyvsp[-1].string_value));
							g_instList->getListEnd().addPredicateModifier((yyvsp[0].string_value));
							/*May be the modifier needs to be added too*/
						}
#line 2286 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 207:
#line 399 "sass.y" /* yacc.c:1646  */
    {
							debug_print("HELLO: "); 
							debug_print((yyvsp[0].string_value)); 
							g_instList->getListEnd().addOperand((yyvsp[0].string_value));
						}
#line 2296 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 208:
#line 407 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier("ex2");}
#line 2302 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 209:
#line 408 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier("sin");}
#line 2308 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 210:
#line 409 "sass.y" /* yacc.c:1646  */
    { debug_print((yyvsp[0].string_value)); g_instList->getListEnd().addBaseModifier("cos");}
#line 2314 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 211:
#line 412 "sass.y" /* yacc.c:1646  */
    { }
#line 2320 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 212:
#line 413 "sass.y" /* yacc.c:1646  */
    { }
#line 2326 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 213:
#line 414 "sass.y" /* yacc.c:1646  */
    { }
#line 2332 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 214:
#line 415 "sass.y" /* yacc.c:1646  */
    { }
#line 2338 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 215:
#line 416 "sass.y" /* yacc.c:1646  */
    { }
#line 2344 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 216:
#line 417 "sass.y" /* yacc.c:1646  */
    { }
#line 2350 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 217:
#line 418 "sass.y" /* yacc.c:1646  */
    { }
#line 2356 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 218:
#line 419 "sass.y" /* yacc.c:1646  */
    { }
#line 2362 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 219:
#line 420 "sass.y" /* yacc.c:1646  */
    { }
#line 2368 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 220:
#line 421 "sass.y" /* yacc.c:1646  */
    { }
#line 2374 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 221:
#line 422 "sass.y" /* yacc.c:1646  */
    { }
#line 2380 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 222:
#line 423 "sass.y" /* yacc.c:1646  */
    { }
#line 2386 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 223:
#line 424 "sass.y" /* yacc.c:1646  */
    { }
#line 2392 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 224:
#line 425 "sass.y" /* yacc.c:1646  */
    { }
#line 2398 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 225:
#line 426 "sass.y" /* yacc.c:1646  */
    { }
#line 2404 "sass_parser.cc" /* yacc.c:1646  */
    break;

  case 226:
#line 427 "sass.y" /* yacc.c:1646  */
    { }
#line 2410 "sass_parser.cc" /* yacc.c:1646  */
    break;


#line 2414 "sass_parser.cc" /* yacc.c:1646  */
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
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

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
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

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
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
  return yyresult;
}
#line 430 "sass.y" /* yacc.c:1906  */


/*support c++ functions go here*/

void debug_print( const char *s )
{
	// uncomment to debug
	// printf("%s",s);
}
