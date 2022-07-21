/* A Bison parser, made by GNU Bison 3.8.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2021 Free Software Foundation,
   Inc.

   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.

   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.

   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <https://www.gnu.org/licenses/>.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output, and Bison version.  */
#define YYBISON 30801

/* Bison version string.  */
#define YYBISON_VERSION "3.8.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */

/* sconfig, coreboot device tree compiler */
/* SPDX-License-Identifier: GPL-2.0-only */

#include <stdint.h>
#include "sconfig.h"

int yylex();
void yyerror(const char *s);

static struct bus *cur_parent;
static struct chip_instance *cur_chip_instance;
static struct fw_config_field *cur_field;
static struct fw_config_field_bits *cur_bits;



# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

#include "sconfig.tab.h_shipped"
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_CHIP = 3,                       /* CHIP  */
  YYSYMBOL_DEVICE = 4,                     /* DEVICE  */
  YYSYMBOL_REGISTER = 5,                   /* REGISTER  */
  YYSYMBOL_ALIAS = 6,                      /* ALIAS  */
  YYSYMBOL_REFERENCE = 7,                  /* REFERENCE  */
  YYSYMBOL_ASSOCIATION = 8,                /* ASSOCIATION  */
  YYSYMBOL_BOOL = 9,                       /* BOOL  */
  YYSYMBOL_STATUS = 10,                    /* STATUS  */
  YYSYMBOL_MANDATORY = 11,                 /* MANDATORY  */
  YYSYMBOL_BUS = 12,                       /* BUS  */
  YYSYMBOL_RESOURCE = 13,                  /* RESOURCE  */
  YYSYMBOL_END = 14,                       /* END  */
  YYSYMBOL_EQUALS = 15,                    /* EQUALS  */
  YYSYMBOL_HEX = 16,                       /* HEX  */
  YYSYMBOL_STRING = 17,                    /* STRING  */
  YYSYMBOL_PCI = 18,                       /* PCI  */
  YYSYMBOL_PNP = 19,                       /* PNP  */
  YYSYMBOL_I2C = 20,                       /* I2C  */
  YYSYMBOL_APIC = 21,                      /* APIC  */
  YYSYMBOL_CPU_CLUSTER = 22,               /* CPU_CLUSTER  */
  YYSYMBOL_CPU = 23,                       /* CPU  */
  YYSYMBOL_DOMAIN = 24,                    /* DOMAIN  */
  YYSYMBOL_IRQ = 25,                       /* IRQ  */
  YYSYMBOL_DRQ = 26,                       /* DRQ  */
  YYSYMBOL_SLOT_DESC = 27,                 /* SLOT_DESC  */
  YYSYMBOL_SMBIOS_DEV_INFO = 28,           /* SMBIOS_DEV_INFO  */
  YYSYMBOL_IO = 29,                        /* IO  */
  YYSYMBOL_NUMBER = 30,                    /* NUMBER  */
  YYSYMBOL_SUBSYSTEMID = 31,               /* SUBSYSTEMID  */
  YYSYMBOL_INHERIT = 32,                   /* INHERIT  */
  YYSYMBOL_IOAPIC_IRQ = 33,                /* IOAPIC_IRQ  */
  YYSYMBOL_IOAPIC = 34,                    /* IOAPIC  */
  YYSYMBOL_PCIINT = 35,                    /* PCIINT  */
  YYSYMBOL_GENERIC = 36,                   /* GENERIC  */
  YYSYMBOL_SPI = 37,                       /* SPI  */
  YYSYMBOL_USB = 38,                       /* USB  */
  YYSYMBOL_MMIO = 39,                      /* MMIO  */
  YYSYMBOL_GPIO = 40,                      /* GPIO  */
  YYSYMBOL_FW_CONFIG_TABLE = 41,           /* FW_CONFIG_TABLE  */
  YYSYMBOL_FW_CONFIG_FIELD = 42,           /* FW_CONFIG_FIELD  */
  YYSYMBOL_FW_CONFIG_OPTION = 43,          /* FW_CONFIG_OPTION  */
  YYSYMBOL_FW_CONFIG_PROBE = 44,           /* FW_CONFIG_PROBE  */
  YYSYMBOL_PIPE = 45,                      /* PIPE  */
  YYSYMBOL_YYACCEPT = 46,                  /* $accept  */
  YYSYMBOL_devtree = 47,                   /* devtree  */
  YYSYMBOL_chipchild_nondev = 48,          /* chipchild_nondev  */
  YYSYMBOL_chipchild = 49,                 /* chipchild  */
  YYSYMBOL_chipchildren = 50,              /* chipchildren  */
  YYSYMBOL_chipchildren_dev = 51,          /* chipchildren_dev  */
  YYSYMBOL_devicechildren = 52,            /* devicechildren  */
  YYSYMBOL_chip = 53,                      /* chip  */
  YYSYMBOL_54_1 = 54,                      /* @1  */
  YYSYMBOL_device = 55,                    /* device  */
  YYSYMBOL_56_2 = 56,                      /* @2  */
  YYSYMBOL_57_3 = 57,                      /* @3  */
  YYSYMBOL_alias = 58,                     /* alias  */
  YYSYMBOL_status = 59,                    /* status  */
  YYSYMBOL_resource = 60,                  /* resource  */
  YYSYMBOL_reference = 61,                 /* reference  */
  YYSYMBOL_registers = 62,                 /* registers  */
  YYSYMBOL_subsystemid = 63,               /* subsystemid  */
  YYSYMBOL_ioapic_irq = 64,                /* ioapic_irq  */
  YYSYMBOL_smbios_slot_desc = 65,          /* smbios_slot_desc  */
  YYSYMBOL_smbios_dev_info = 66,           /* smbios_dev_info  */
  YYSYMBOL_fw_config_table = 67,           /* fw_config_table  */
  YYSYMBOL_fw_config_table_children = 68,  /* fw_config_table_children  */
  YYSYMBOL_fw_config_field_children = 69,  /* fw_config_field_children  */
  YYSYMBOL_fw_config_field_bits = 70,      /* fw_config_field_bits  */
  YYSYMBOL_fw_config_field_bits_repeating = 71, /* fw_config_field_bits_repeating  */
  YYSYMBOL_fw_config_field = 72,           /* fw_config_field  */
  YYSYMBOL_73_4 = 73,                      /* $@4  */
  YYSYMBOL_74_5 = 74,                      /* $@5  */
  YYSYMBOL_75_6 = 75,                      /* $@6  */
  YYSYMBOL_fw_config_option = 76,          /* fw_config_option  */
  YYSYMBOL_fw_config_probe = 77            /* fw_config_probe  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

/* Work around bug in HP-UX 11.23, which defines these macros
   incorrectly for preprocessor constants.  This workaround can likely
   be removed in 2023, as HPE has promised support for HP-UX 11.23
   (aka HP-UX 11i v2) only through the end of 2022; see Table 2 of
   <https://h20195.www2.hpe.com/V2/getpdf.aspx/4AA4-7673ENW.pdf>.  */
#ifdef __hpux
# undef UINT_LEAST8_MAX
# undef UINT_LEAST16_MAX
# define UINT_LEAST8_MAX 255
# define UINT_LEAST16_MAX 65535
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))


/* Stored state numbers (used for stacks). */
typedef yytype_int8 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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


#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YY_USE(E) ((void) (E))
#else
# define YY_USE(E) /* empty */
#endif

/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
#if defined __GNUC__ && ! defined __ICC && 406 <= __GNUC__ * 100 + __GNUC_MINOR__
# if __GNUC__ * 100 + __GNUC_MINOR__ < 407
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")
# else
#  define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                           \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# endif
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
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

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
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
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  2
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   98

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  46
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  32
/* YYNRULES -- Number of rules.  */
#define YYNRULES  60
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  105

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   300


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      45
};

#if YYDEBUG
/* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    26,    26,    26,    26,    29,    29,    29,    30,    30,
      31,    31,    32,    32,    34,    34,    34,    34,    34,    34,
      34,    34,    34,    34,    36,    36,    45,    45,    53,    53,
      61,    63,    67,    67,    69,    72,    75,    78,    81,    84,
      87,    90,    93,    96,    99,   103,   106,   106,   109,   109,
     112,   118,   118,   121,   120,   125,   125,   133,   133,   139,
     143
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "CHIP", "DEVICE",
  "REGISTER", "ALIAS", "REFERENCE", "ASSOCIATION", "BOOL", "STATUS",
  "MANDATORY", "BUS", "RESOURCE", "END", "EQUALS", "HEX", "STRING", "PCI",
  "PNP", "I2C", "APIC", "CPU_CLUSTER", "CPU", "DOMAIN", "IRQ", "DRQ",
  "SLOT_DESC", "SMBIOS_DEV_INFO", "IO", "NUMBER", "SUBSYSTEMID", "INHERIT",
  "IOAPIC_IRQ", "IOAPIC", "PCIINT", "GENERIC", "SPI", "USB", "MMIO",
  "GPIO", "FW_CONFIG_TABLE", "FW_CONFIG_FIELD", "FW_CONFIG_OPTION",
  "FW_CONFIG_PROBE", "PIPE", "$accept", "devtree", "chipchild_nondev",
  "chipchild", "chipchildren", "chipchildren_dev", "devicechildren",
  "chip", "@1", "device", "@2", "@3", "alias", "status", "resource",
  "reference", "registers", "subsystemid", "ioapic_irq",
  "smbios_slot_desc", "smbios_dev_info", "fw_config_table",
  "fw_config_table_children", "fw_config_field_children",
  "fw_config_field_bits", "fw_config_field_bits_repeating",
  "fw_config_field", "$@4", "$@5", "$@6", "fw_config_option",
  "fw_config_probe", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#define YYPACT_NINF (-45)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
static const yytype_int8 yypact[] =
{
     -45,     6,   -45,     4,   -45,   -45,   -45,   -45,   -12,    45,
     -45,    15,   -45,    11,    17,    18,    45,    -3,   -45,   -45,
     -45,   -45,    16,    34,    23,    14,    46,   -45,   -45,    45,
      25,    19,   -45,    10,    51,    42,    43,   -45,   -45,   -45,
     -45,   -45,    31,   -45,    -7,   -45,   -45,   -45,    49,    10,
     -45,   -45,    -6,    25,    19,   -45,   -45,    50,   -45,   -45,
     -45,   -45,   -45,   -45,    -2,    32,     0,   -45,   -45,   -45,
      33,   -45,    52,    38,    40,    41,    55,   -45,   -45,   -45,
     -45,   -45,   -45,   -45,   -45,   -45,    12,    58,    57,    59,
      47,    44,    61,   -45,    53,    63,   -45,    54,    60,   -45,
     -45,    64,   -45,   -45,   -45
};

/* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE does not specify something else to do.  Zero
   means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     1,     0,    47,     3,     4,    24,     0,     0,
      45,     0,    46,     0,     0,     0,     0,     0,     5,    11,
       7,     6,    57,     0,     0,     0,     0,    13,    25,    12,
      55,    52,    49,     0,    30,     0,     0,     9,    10,     8,
      50,    49,     0,    53,     0,    32,    33,    28,     0,     0,
      36,    35,     0,     0,    52,    49,    58,     0,    48,    23,
      31,    26,    56,    51,     0,     0,     0,    23,    54,    59,
       0,    29,     0,     0,     0,     0,     0,    15,    14,    16,
      21,    17,    18,    19,    20,    22,     0,     0,     0,    44,
       0,     0,     0,    27,     0,    42,    43,    37,     0,    60,
      34,    41,    38,    39,    40
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int8 yypgoto[] =
{
     -45,   -45,    62,   -45,   -45,    66,     8,    -1,   -45,   -28,
     -45,   -45,   -45,    35,   -45,   -45,   -44,   -45,   -45,   -45,
     -45,   -45,   -45,   -31,    56,    39,   -45,   -45,   -45,   -45,
     -45,   -45
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int8 yydefgoto[] =
{
       0,     1,    16,    38,    29,    17,    66,    18,     9,    19,
      67,    59,    49,    47,    79,    20,    21,    81,    82,    83,
      84,     6,     8,    44,    31,    43,    12,    55,    41,    32,
      58,    85
};

/* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule whose
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int8 yytable[] =
{
       5,    39,    10,     3,    13,    14,     2,    56,    62,     3,
      52,    28,    68,    70,    71,     3,    13,    14,    23,    45,
      46,     7,    80,    24,    64,    70,    93,    72,    73,    35,
      11,    74,    22,    75,    25,    26,    57,    57,    78,    72,
      73,    57,    80,    74,    76,    75,    30,     4,     3,    13,
      14,    33,    15,    34,    36,    40,    76,    48,    78,    50,
      51,    53,    69,    87,    42,    77,    60,    65,    89,    88,
      90,    91,    92,    94,    95,    86,    96,    97,    99,    98,
     101,   104,    27,   100,    61,    77,   102,     0,     0,     0,
     103,    37,     0,    63,     0,     0,     0,     0,    54
};

static const yytype_int8 yycheck[] =
{
       1,    29,    14,     3,     4,     5,     0,    14,    14,     3,
      41,    14,    14,    13,    14,     3,     4,     5,     7,     9,
      10,    17,    66,    12,    55,    13,    14,    27,    28,    15,
      42,    31,    17,    33,    17,    17,    43,    43,    66,    27,
      28,    43,    86,    31,    44,    33,    30,    41,     3,     4,
       5,    17,     7,    30,     8,    30,    44,     6,    86,    17,
      17,    30,    30,    30,    45,    66,    17,    17,    30,    17,
      30,    30,    17,    15,    17,    67,    17,    30,    17,    35,
      17,    17,    16,    30,    49,    86,    32,    -1,    -1,    -1,
      30,    29,    -1,    54,    -1,    -1,    -1,    -1,    42
};

/* YYSTOS[STATE-NUM] -- The symbol kind of the accessing symbol of
   state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    47,     0,     3,    41,    53,    67,    17,    68,    54,
      14,    42,    72,     4,     5,     7,    48,    51,    53,    55,
      61,    62,    17,     7,    12,    17,    17,    51,    14,    50,
      30,    70,    75,    17,    30,    15,     8,    48,    49,    55,
      30,    74,    45,    71,    69,     9,    10,    59,     6,    58,
      17,    17,    69,    30,    70,    73,    14,    43,    76,    57,
      17,    59,    14,    71,    69,    17,    52,    56,    14,    30,
      13,    14,    27,    28,    31,    33,    44,    53,    55,    60,
      62,    63,    64,    65,    66,    77,    52,    30,    17,    30,
      30,    30,    17,    14,    15,    17,    17,    30,    35,    17,
      30,    17,    32,    30,    17
};

/* YYR1[RULE-NUM] -- Symbol kind of the left-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr1[] =
{
       0,    46,    47,    47,    47,    48,    48,    48,    49,    49,
      50,    50,    51,    51,    52,    52,    52,    52,    52,    52,
      52,    52,    52,    52,    54,    53,    56,    55,    57,    55,
      58,    58,    59,    59,    60,    61,    62,    63,    63,    64,
      65,    65,    65,    66,    66,    67,    68,    68,    69,    69,
      70,    71,    71,    73,    72,    74,    72,    75,    72,    76,
      77
};

/* YYR2[RULE-NUM] -- Number of symbols on the right-hand side of rule RULE-NUM.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     2,     2,     1,     1,     1,     1,     1,
       2,     0,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     0,     0,     5,     0,     8,     0,     7,
       0,     2,     1,     1,     4,     4,     4,     3,     4,     4,
       5,     4,     3,     3,     2,     3,     2,     0,     2,     0,
       2,     3,     0,     0,     7,     0,     6,     0,     5,     3,
       3
};


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYNOMEM         goto yyexhaustedlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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




# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YY_USE (yyoutput);
  if (!yyvaluep)
    return;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YY_USE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YY_USE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yychar = YYEMPTY; /* Cause a token to be read.  */

  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END
  YY_STACK_PRINT (yyss, yyssp);

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    YYNOMEM;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        YYNOMEM;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          YYNOMEM;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
#  undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */


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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
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
  case 2: /* devtree: %empty  */
         { cur_parent = root_parent; }
    break;

  case 24: /* @1: %empty  */
                                {
	(yyval.chip_instance) = new_chip_instance((yyvsp[0].string));
	chip_enqueue_tail(cur_chip_instance);
	cur_chip_instance = (yyval.chip_instance);
}
    break;

  case 25: /* chip: CHIP STRING @1 chipchildren_dev END  */
                             {
	cur_chip_instance = chip_dequeue_tail();
}
    break;

  case 26: /* @2: %empty  */
                                                       {
	(yyval.dev) = new_device_raw(cur_parent, cur_chip_instance, (yyvsp[-3].number), (yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].number));
	cur_parent = (yyval.dev)->last_bus;
}
    break;

  case 27: /* device: DEVICE BUS NUMBER alias status @2 devicechildren END  */
                           {
	cur_parent = (yyvsp[-2].dev)->parent;
}
    break;

  case 28: /* @3: %empty  */
                                       {
	(yyval.dev) = new_device_reference(cur_parent, cur_chip_instance, (yyvsp[-1].string), (yyvsp[0].number));
	cur_parent = (yyval.dev)->last_bus;
}
    break;

  case 29: /* device: DEVICE REFERENCE STRING status @3 devicechildren END  */
                           {
	cur_parent = (yyvsp[-2].dev)->parent;
}
    break;

  case 30: /* alias: %empty  */
                   {
	(yyval.string) = NULL;
}
    break;

  case 31: /* alias: ALIAS STRING  */
                 {
	(yyval.string) = (yyvsp[0].string);
}
    break;

  case 34: /* resource: RESOURCE NUMBER EQUALS NUMBER  */
        { add_resource(cur_parent, (yyvsp[-3].number), strtol((yyvsp[-2].string), NULL, 0), strtol((yyvsp[0].string), NULL, 0)); }
    break;

  case 35: /* reference: REFERENCE STRING ASSOCIATION STRING  */
        { add_reference(cur_chip_instance, (yyvsp[0].string), (yyvsp[-2].string)); }
    break;

  case 36: /* registers: REGISTER STRING EQUALS STRING  */
        { add_register(cur_chip_instance, (yyvsp[-2].string), (yyvsp[0].string)); }
    break;

  case 37: /* subsystemid: SUBSYSTEMID NUMBER NUMBER  */
        { add_pci_subsystem_ids(cur_parent, strtol((yyvsp[-1].string), NULL, 16), strtol((yyvsp[0].string), NULL, 16), 0); }
    break;

  case 38: /* subsystemid: SUBSYSTEMID NUMBER NUMBER INHERIT  */
        { add_pci_subsystem_ids(cur_parent, strtol((yyvsp[-2].string), NULL, 16), strtol((yyvsp[-1].string), NULL, 16), 1); }
    break;

  case 39: /* ioapic_irq: IOAPIC_IRQ NUMBER PCIINT NUMBER  */
        { add_ioapic_info(cur_parent, strtol((yyvsp[-2].string), NULL, 16), (yyvsp[-1].string), strtol((yyvsp[0].string), NULL, 16)); }
    break;

  case 40: /* smbios_slot_desc: SLOT_DESC STRING STRING STRING STRING  */
        { add_slot_desc(cur_parent, (yyvsp[-3].string), (yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].string)); }
    break;

  case 41: /* smbios_slot_desc: SLOT_DESC STRING STRING STRING  */
        { add_slot_desc(cur_parent, (yyvsp[-2].string), (yyvsp[-1].string), (yyvsp[0].string), NULL); }
    break;

  case 42: /* smbios_slot_desc: SLOT_DESC STRING STRING  */
        { add_slot_desc(cur_parent, (yyvsp[-1].string), (yyvsp[0].string), NULL, NULL); }
    break;

  case 43: /* smbios_dev_info: SMBIOS_DEV_INFO NUMBER STRING  */
        { add_smbios_dev_info(cur_parent, strtol((yyvsp[-1].string), NULL, 0), (yyvsp[0].string)); }
    break;

  case 44: /* smbios_dev_info: SMBIOS_DEV_INFO NUMBER  */
        { add_smbios_dev_info(cur_parent, strtol((yyvsp[0].string), NULL, 0), NULL); }
    break;

  case 45: /* fw_config_table: FW_CONFIG_TABLE fw_config_table_children END  */
                                                              { }
    break;

  case 50: /* fw_config_field_bits: NUMBER NUMBER  */
{
	append_fw_config_bits(&cur_bits, strtoul((yyvsp[-1].string), NULL, 0), strtoul((yyvsp[0].string), NULL, 0));
}
    break;

  case 53: /* $@4: %empty  */
        { cur_field = new_fw_config_field((yyvsp[-2].string), cur_bits); }
    break;

  case 54: /* fw_config_field: FW_CONFIG_FIELD STRING fw_config_field_bits fw_config_field_bits_repeating $@4 fw_config_field_children END  */
                                     { cur_bits = NULL; }
    break;

  case 55: /* $@5: %empty  */
                                                            {
	cur_bits = NULL;
	append_fw_config_bits(&cur_bits, strtoul((yyvsp[0].string), NULL, 0), strtoul((yyvsp[0].string), NULL, 0));
	cur_field = new_fw_config_field((yyvsp[-1].string), cur_bits);
}
    break;

  case 56: /* fw_config_field: FW_CONFIG_FIELD STRING NUMBER $@5 fw_config_field_children END  */
                                     { cur_bits = NULL; }
    break;

  case 57: /* $@6: %empty  */
                                        {
	cur_field = get_fw_config_field((yyvsp[0].string));
}
    break;

  case 58: /* fw_config_field: FW_CONFIG_FIELD STRING $@6 fw_config_field_children END  */
                                     { cur_bits = NULL; }
    break;

  case 59: /* fw_config_option: FW_CONFIG_OPTION STRING NUMBER  */
        { add_fw_config_option(cur_field, (yyvsp[-1].string), strtoull((yyvsp[0].string), NULL, 0)); }
    break;

  case 60: /* fw_config_probe: FW_CONFIG_PROBE STRING STRING  */
        { add_fw_config_probe(cur_parent, (yyvsp[-1].string), (yyvsp[0].string)); }
    break;



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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

  *++yyvsp = yyval;

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
yyerrlab:
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;
  ++yynerrs;

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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturnlab;


/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturnlab;


/*-----------------------------------------------------------.
| yyexhaustedlab -- YYNOMEM (memory exhaustion) comes here.  |
`-----------------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturnlab;


/*----------------------------------------------------------.
| yyreturnlab -- parsing is finished, clean up and return.  |
`----------------------------------------------------------*/
yyreturnlab:
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}


