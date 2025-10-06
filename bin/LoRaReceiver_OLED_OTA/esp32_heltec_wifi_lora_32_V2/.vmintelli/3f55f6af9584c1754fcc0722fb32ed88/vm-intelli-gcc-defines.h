
//
// Visual Micro. No Build. Used as intellisense tip only.
//
#ifndef _VMICRO_INTELLISENSE_GCC_CORE
#define _VMICRO_INTELLISENSE_GCC_CORE

#if defined(_VMICRO_INTELLISENSE)

#if defined(__DBL_MIN_EXP__)
	#undef __DBL_MIN_EXP__
#endif
#define __DBL_MIN_EXP__ (-1021)

#if defined(__FLT32X_MAX_EXP__)
	#undef __FLT32X_MAX_EXP__
#endif
#define __FLT32X_MAX_EXP__ 1024

#if defined(__cpp_attributes)
	#undef __cpp_attributes
#endif
#define __cpp_attributes 200809

#if defined(__UINT_LEAST16_MAX__)
	#undef __UINT_LEAST16_MAX__
#endif
#define __UINT_LEAST16_MAX__ 0xffff

#if defined(__ATOMIC_ACQUIRE)
	#undef __ATOMIC_ACQUIRE
#endif
#define __ATOMIC_ACQUIRE 2

#if defined(__FLT_MIN__)
	#undef __FLT_MIN__
#endif
#define __FLT_MIN__ 1.1754943508222875e-38F

#if defined(__GCC_IEC_559_COMPLEX)
	#undef __GCC_IEC_559_COMPLEX
#endif
#define __GCC_IEC_559_COMPLEX 0

#if defined(__UINT_LEAST8_TYPE__)
	#undef __UINT_LEAST8_TYPE__
#endif
#define __UINT_LEAST8_TYPE__ unsigned char

#if defined(__INTMAX_C)
	#undef __INTMAX_C
#endif
#define __INTMAX_C(c) c ## LL

#if defined(__CHAR_BIT__)
	#undef __CHAR_BIT__
#endif
#define __CHAR_BIT__ 8

#if defined(__UINT8_MAX__)
	#undef __UINT8_MAX__
#endif
#define __UINT8_MAX__ 0xff

#if defined(__WINT_MAX__)
	#undef __WINT_MAX__
#endif
#define __WINT_MAX__ 0xffffffffU

#if defined(__FLT32_MIN_EXP__)
	#undef __FLT32_MIN_EXP__
#endif
#define __FLT32_MIN_EXP__ (-125)

#if defined(__cpp_static_assert)
	#undef __cpp_static_assert
#endif
#define __cpp_static_assert 200410

#if defined(__ORDER_LITTLE_ENDIAN__)
	#undef __ORDER_LITTLE_ENDIAN__
#endif
#define __ORDER_LITTLE_ENDIAN__ 1234

#if defined(__SIZE_MAX__)
	#undef __SIZE_MAX__
#endif
#define __SIZE_MAX__ 0xffffffffU

#if defined(__WCHAR_MAX__)
	#undef __WCHAR_MAX__
#endif
#define __WCHAR_MAX__ 0xffff

#if defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_1)
	#undef __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1
#endif
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_1 1

#if defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_2)
	#undef __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2
#endif
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_2 1

#if defined(__GCC_HAVE_SYNC_COMPARE_AND_SWAP_4)
	#undef __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4
#endif
#define __GCC_HAVE_SYNC_COMPARE_AND_SWAP_4 1

#if defined(__DBL_DENORM_MIN__)
	#undef __DBL_DENORM_MIN__
#endif
#define __DBL_DENORM_MIN__ double(4.9406564584124654e-324L)

#if defined(__GCC_ATOMIC_CHAR_LOCK_FREE)
	#undef __GCC_ATOMIC_CHAR_LOCK_FREE
#endif
#define __GCC_ATOMIC_CHAR_LOCK_FREE 2

#if defined(__GCC_IEC_559)
	#undef __GCC_IEC_559
#endif
#define __GCC_IEC_559 0

#if defined(__FLT32X_DECIMAL_DIG__)
	#undef __FLT32X_DECIMAL_DIG__
#endif
#define __FLT32X_DECIMAL_DIG__ 17

#if defined(__FLT_EVAL_METHOD__)
	#undef __FLT_EVAL_METHOD__
#endif
#define __FLT_EVAL_METHOD__ 0

#if defined(__cpp_binary_literals)
	#undef __cpp_binary_literals
#endif
#define __cpp_binary_literals 201304

#if defined(__FLT64_DECIMAL_DIG__)
	#undef __FLT64_DECIMAL_DIG__
#endif
#define __FLT64_DECIMAL_DIG__ 17

#if defined(__GCC_ATOMIC_CHAR32_T_LOCK_FREE)
	#undef __GCC_ATOMIC_CHAR32_T_LOCK_FREE
#endif
#define __GCC_ATOMIC_CHAR32_T_LOCK_FREE 2

#if defined(__cpp_variadic_templates)
	#undef __cpp_variadic_templates
#endif
#define __cpp_variadic_templates 200704

#if defined(__UINT_FAST64_MAX__)
	#undef __UINT_FAST64_MAX__
#endif
#define __UINT_FAST64_MAX__ 0xffffffffffffffffULL

#if defined(__SIG_ATOMIC_TYPE__)
	#undef __SIG_ATOMIC_TYPE__
#endif
#define __SIG_ATOMIC_TYPE__ int

#if defined(__DBL_MIN_10_EXP__)
	#undef __DBL_MIN_10_EXP__
#endif
#define __DBL_MIN_10_EXP__ (-307)

#if defined(__FINITE_MATH_ONLY__)
	#undef __FINITE_MATH_ONLY__
#endif
#define __FINITE_MATH_ONLY__ 0

#if defined(__GNUC_PATCHLEVEL__)
	#undef __GNUC_PATCHLEVEL__
#endif
#define __GNUC_PATCHLEVEL__ 0

#if defined(__FLT32_HAS_DENORM__)
	#undef __FLT32_HAS_DENORM__
#endif
#define __FLT32_HAS_DENORM__ 1

#if defined(__UINT_FAST8_MAX__)
	#undef __UINT_FAST8_MAX__
#endif
#define __UINT_FAST8_MAX__ 0xffffffffU

#if defined(__DEC64_MAX_EXP__)
	#undef __DEC64_MAX_EXP__
#endif
#define __DEC64_MAX_EXP__ 385

#if defined(__INT8_C)
	#undef __INT8_C
#endif
#define __INT8_C(c) c

#if defined(__INT_LEAST8_WIDTH__)
	#undef __INT_LEAST8_WIDTH__
#endif
#define __INT_LEAST8_WIDTH__ 8

#if defined(__UINT_LEAST64_MAX__)
	#undef __UINT_LEAST64_MAX__
#endif
#define __UINT_LEAST64_MAX__ 0xffffffffffffffffULL

#if defined(__SHRT_MAX__)
	#undef __SHRT_MAX__
#endif
#define __SHRT_MAX__ 0x7fff

#if defined(__LDBL_MAX__)
	#undef __LDBL_MAX__
#endif
#define __LDBL_MAX__ 1.7976931348623157e+308L

#if defined(__UINT_LEAST8_MAX__)
	#undef __UINT_LEAST8_MAX__
#endif
#define __UINT_LEAST8_MAX__ 0xff

#if defined(__GCC_ATOMIC_BOOL_LOCK_FREE)
	#undef __GCC_ATOMIC_BOOL_LOCK_FREE
#endif
#define __GCC_ATOMIC_BOOL_LOCK_FREE 2

#if defined(__UINTMAX_TYPE__)
	#undef __UINTMAX_TYPE__
#endif
#define __UINTMAX_TYPE__ long long unsigned int

#if defined(__DEC32_EPSILON__)
	#undef __DEC32_EPSILON__
#endif
#define __DEC32_EPSILON__ 1E-6DF

#if defined(__FLT_EVAL_METHOD_TS_18661_3__)
	#undef __FLT_EVAL_METHOD_TS_18661_3__
#endif
#define __FLT_EVAL_METHOD_TS_18661_3__ 0

#if defined(__OPTIMIZE__)
	#undef __OPTIMIZE__
#endif
#define __OPTIMIZE__ 1

#if defined(__CHAR_UNSIGNED__)
	#undef __CHAR_UNSIGNED__
#endif
#define __CHAR_UNSIGNED__ 1

#if defined(__UINT32_MAX__)
	#undef __UINT32_MAX__
#endif
#define __UINT32_MAX__ 0xffffffffU

#if defined(__GXX_EXPERIMENTAL_CXX0X__)
	#undef __GXX_EXPERIMENTAL_CXX0X__
#endif
#define __GXX_EXPERIMENTAL_CXX0X__ 1

#if defined(_POSIX_READER_WRITER_LOCKS)
	#undef _POSIX_READER_WRITER_LOCKS
#endif
#define _POSIX_READER_WRITER_LOCKS 1

#if defined(__LDBL_MAX_EXP__)
	#undef __LDBL_MAX_EXP__
#endif
#define __LDBL_MAX_EXP__ 1024

#if defined(__WINT_MIN__)
	#undef __WINT_MIN__
#endif
#define __WINT_MIN__ 0U

#if defined(ARDUINO_VARIANT)
	#undef ARDUINO_VARIANT
#endif
#define ARDUINO_VARIANT heltec_wifi_lora_32_V2

#if defined(__INT_LEAST16_WIDTH__)
	#undef __INT_LEAST16_WIDTH__
#endif
#define __INT_LEAST16_WIDTH__ 16

#if defined(__SCHAR_MAX__)
	#undef __SCHAR_MAX__
#endif
#define __SCHAR_MAX__ 0x7f

#if defined(__WCHAR_MIN__)
	#undef __WCHAR_MIN__
#endif
#define __WCHAR_MIN__ 0

#if defined(__INT64_C)
	#undef __INT64_C
#endif
#define __INT64_C(c) c ## LL

#if defined(__DBL_DIG__)
	#undef __DBL_DIG__
#endif
#define __DBL_DIG__ 15

#if defined(__GCC_ATOMIC_POINTER_LOCK_FREE)
	#undef __GCC_ATOMIC_POINTER_LOCK_FREE
#endif
#define __GCC_ATOMIC_POINTER_LOCK_FREE 2

#if defined(IDF_VER)
	#undef IDF_VER
#endif
#define IDF_VER v4.4.5

#if defined(__SIZEOF_INT__)
	#undef __SIZEOF_INT__
#endif
#define __SIZEOF_INT__ 4

#if defined(__SIZEOF_POINTER__)
	#undef __SIZEOF_POINTER__
#endif
#define __SIZEOF_POINTER__ 4

#if defined(__GCC_ATOMIC_CHAR16_T_LOCK_FREE)
	#undef __GCC_ATOMIC_CHAR16_T_LOCK_FREE
#endif
#define __GCC_ATOMIC_CHAR16_T_LOCK_FREE 2

#if defined(WITH_POSIX)
	#undef WITH_POSIX
#endif
#define WITH_POSIX 1

#if defined(__USER_LABEL_PREFIX__)
	#undef __USER_LABEL_PREFIX__
#endif
#define __USER_LABEL_PREFIX__

#if defined(ESP32)
	#undef ESP32
#endif
#define ESP32 1

#if defined(__STDC_HOSTED__)
	#undef __STDC_HOSTED__
#endif
#define __STDC_HOSTED__ 1

#if defined(__LDBL_HAS_INFINITY__)
	#undef __LDBL_HAS_INFINITY__
#endif
#define __LDBL_HAS_INFINITY__ 1

#if defined(__XTENSA_EL__)
	#undef __XTENSA_EL__
#endif
#define __XTENSA_EL__ 1

#if defined(__FLT32_DIG__)
	#undef __FLT32_DIG__
#endif
#define __FLT32_DIG__ 6

#if defined(__FLT_EPSILON__)
	#undef __FLT_EPSILON__
#endif
#define __FLT_EPSILON__ 1.1920928955078125e-7F

#if defined(__GXX_WEAK__)
	#undef __GXX_WEAK__
#endif
#define __GXX_WEAK__ 1

#if defined(__SHRT_WIDTH__)
	#undef __SHRT_WIDTH__
#endif
#define __SHRT_WIDTH__ 16

#if defined(__LDBL_MIN__)
	#undef __LDBL_MIN__
#endif
#define __LDBL_MIN__ 2.2250738585072014e-308L

#if defined(__DEC32_MAX__)
	#undef __DEC32_MAX__
#endif
#define __DEC32_MAX__ 9.999999E96DF

#if defined(__cpp_threadsafe_static_init)
	#undef __cpp_threadsafe_static_init
#endif
#define __cpp_threadsafe_static_init 200806

#if defined(__FLT32X_HAS_INFINITY__)
	#undef __FLT32X_HAS_INFINITY__
#endif
#define __FLT32X_HAS_INFINITY__ 1

#if defined(__INT32_MAX__)
	#undef __INT32_MAX__
#endif
#define __INT32_MAX__ 0x7fffffff

#if defined(__INT_WIDTH__)
	#undef __INT_WIDTH__
#endif
#define __INT_WIDTH__ 32

#if defined(__SIZEOF_LONG__)
	#undef __SIZEOF_LONG__
#endif
#define __SIZEOF_LONG__ 4

#if defined(__UINT16_C)
	#undef __UINT16_C
#endif
#define __UINT16_C(c) c

#if defined(__PTRDIFF_WIDTH__)
	#undef __PTRDIFF_WIDTH__
#endif
#define __PTRDIFF_WIDTH__ 32

#if defined(__DECIMAL_DIG__)
	#undef __DECIMAL_DIG__
#endif
#define __DECIMAL_DIG__ 17

#if defined(__FLT64_EPSILON__)
	#undef __FLT64_EPSILON__
#endif
#define __FLT64_EPSILON__ 2.2204460492503131e-16F64

#if defined(__INTMAX_WIDTH__)
	#undef __INTMAX_WIDTH__
#endif
#define __INTMAX_WIDTH__ 64

#if defined(__FLT64_MIN_EXP__)
	#undef __FLT64_MIN_EXP__
#endif
#define __FLT64_MIN_EXP__ (-1021)

#if defined(ACTIVE_REGION)
	#undef ACTIVE_REGION
#endif
#define ACTIVE_REGION LORAMAC_REGION_EU868

#if defined(__LDBL_HAS_QUIET_NAN__)
	#undef __LDBL_HAS_QUIET_NAN__
#endif
#define __LDBL_HAS_QUIET_NAN__ 1

#if defined(__FLT64_MANT_DIG__)
	#undef __FLT64_MANT_DIG__
#endif
#define __FLT64_MANT_DIG__ 53

#if defined(__GNUC__)
	#undef __GNUC__
#endif
#define __GNUC__ 8

#if defined(__cpp_delegating_constructors)
	#undef __cpp_delegating_constructors
#endif
#define __cpp_delegating_constructors 200604

#if defined(__FLT_HAS_DENORM__)
	#undef __FLT_HAS_DENORM__
#endif
#define __FLT_HAS_DENORM__ 1

#if defined(__SIZEOF_LONG_DOUBLE__)
	#undef __SIZEOF_LONG_DOUBLE__
#endif
#define __SIZEOF_LONG_DOUBLE__ 8

#if defined(__BIGGEST_ALIGNMENT__)
	#undef __BIGGEST_ALIGNMENT__
#endif
#define __BIGGEST_ALIGNMENT__ 16

#if defined(__STDC_UTF_16__)
	#undef __STDC_UTF_16__
#endif
#define __STDC_UTF_16__ 1

#if defined(__FLT64_MAX_10_EXP__)
	#undef __FLT64_MAX_10_EXP__
#endif
#define __FLT64_MAX_10_EXP__ 308

#if defined(__FLT32_HAS_INFINITY__)
	#undef __FLT32_HAS_INFINITY__
#endif
#define __FLT32_HAS_INFINITY__ 1

#if defined(__DBL_MAX__)
	#undef __DBL_MAX__
#endif
#define __DBL_MAX__ double(1.7976931348623157e+308L)

#if defined(__cpp_raw_strings)
	#undef __cpp_raw_strings
#endif
#define __cpp_raw_strings 200710

#if defined(__INT_FAST32_MAX__)
	#undef __INT_FAST32_MAX__
#endif
#define __INT_FAST32_MAX__ 0x7fffffff

#if defined(__DBL_HAS_INFINITY__)
	#undef __DBL_HAS_INFINITY__
#endif
#define __DBL_HAS_INFINITY__ 1

#if defined(__DEC32_MIN_EXP__)
	#undef __DEC32_MIN_EXP__
#endif
#define __DEC32_MIN_EXP__ (-94)

#if defined(ARDUINO_USB_CDC_ON_BOOT)
	#undef ARDUINO_USB_CDC_ON_BOOT
#endif
#define ARDUINO_USB_CDC_ON_BOOT 0

#if defined(__INTPTR_WIDTH__)
	#undef __INTPTR_WIDTH__
#endif
#define __INTPTR_WIDTH__ 32

#if defined(__FLT32X_HAS_DENORM__)
	#undef __FLT32X_HAS_DENORM__
#endif
#define __FLT32X_HAS_DENORM__ 1

#if defined(__INT_FAST16_TYPE__)
	#undef __INT_FAST16_TYPE__
#endif
#define __INT_FAST16_TYPE__ int

#if defined(__LDBL_HAS_DENORM__)
	#undef __LDBL_HAS_DENORM__
#endif
#define __LDBL_HAS_DENORM__ 1

#if defined(__cplusplus)
	#undef __cplusplus
#endif
#define __cplusplus 201103L

#if defined(__cpp_ref_qualifiers)
	#undef __cpp_ref_qualifiers
#endif
#define __cpp_ref_qualifiers 200710

#if defined(__DEC128_MAX__)
	#undef __DEC128_MAX__
#endif
#define __DEC128_MAX__ 9.999999999999999999999999999999999E6144DL

#if defined(__INT_LEAST32_MAX__)
	#undef __INT_LEAST32_MAX__
#endif
#define __INT_LEAST32_MAX__ 0x7fffffff

#if defined(__DEC32_MIN__)
	#undef __DEC32_MIN__
#endif
#define __DEC32_MIN__ 1E-95DF

#if defined(__DEPRECATED)
	#undef __DEPRECATED
#endif
#define __DEPRECATED 1

#if defined(__cpp_rvalue_references)
	#undef __cpp_rvalue_references
#endif
#define __cpp_rvalue_references 200610

#if defined(__DBL_MAX_EXP__)
	#undef __DBL_MAX_EXP__
#endif
#define __DBL_MAX_EXP__ 1024

#if defined(__WCHAR_WIDTH__)
	#undef __WCHAR_WIDTH__
#endif
#define __WCHAR_WIDTH__ 16

#if defined(__FLT32_MAX__)
	#undef __FLT32_MAX__
#endif
#define __FLT32_MAX__ 3.4028234663852886e+38F32

#if defined(__DEC128_EPSILON__)
	#undef __DEC128_EPSILON__
#endif
#define __DEC128_EPSILON__ 1E-33DL

#if defined(CORE_DEBUG_LEVEL)
	#undef CORE_DEBUG_LEVEL
#endif
#define CORE_DEBUG_LEVEL 0

#if defined(__PTRDIFF_MAX__)
	#undef __PTRDIFF_MAX__
#endif
#define __PTRDIFF_MAX__ 0x7fffffff

#if defined(__FLT32_HAS_QUIET_NAN__)
	#undef __FLT32_HAS_QUIET_NAN__
#endif
#define __FLT32_HAS_QUIET_NAN__ 1

#if defined(__GNUG__)
	#undef __GNUG__
#endif
#define __GNUG__ 8

#if defined(__LONG_LONG_MAX__)
	#undef __LONG_LONG_MAX__
#endif
#define __LONG_LONG_MAX__ 0x7fffffffffffffffLL

#if defined(__SIZEOF_SIZE_T__)
	#undef __SIZEOF_SIZE_T__
#endif
#define __SIZEOF_SIZE_T__ 4

#if defined(__cpp_rvalue_reference)
	#undef __cpp_rvalue_reference
#endif
#define __cpp_rvalue_reference 200610

#if defined(__cpp_nsdmi)
	#undef __cpp_nsdmi
#endif
#define __cpp_nsdmi 200809

#if defined(__SIZEOF_WINT_T__)
	#undef __SIZEOF_WINT_T__
#endif
#define __SIZEOF_WINT_T__ 4

#if defined(__LONG_LONG_WIDTH__)
	#undef __LONG_LONG_WIDTH__
#endif
#define __LONG_LONG_WIDTH__ 64

#if defined(__cpp_initializer_lists)
	#undef __cpp_initializer_lists
#endif
#define __cpp_initializer_lists 200806

#if defined(__FLT32_MAX_EXP__)
	#undef __FLT32_MAX_EXP__
#endif
#define __FLT32_MAX_EXP__ 128

#if defined(__cpp_hex_float)
	#undef __cpp_hex_float
#endif
#define __cpp_hex_float 201603

#if defined(__GXX_ABI_VERSION)
	#undef __GXX_ABI_VERSION
#endif
#define __GXX_ABI_VERSION 1013

#if defined(__FLT_MIN_EXP__)
	#undef __FLT_MIN_EXP__
#endif
#define __FLT_MIN_EXP__ (-125)

#if defined(__cpp_lambdas)
	#undef __cpp_lambdas
#endif
#define __cpp_lambdas 200907

#if defined(__INT_FAST64_TYPE__)
	#undef __INT_FAST64_TYPE__
#endif
#define __INT_FAST64_TYPE__ long long int

#if defined(__FP_FAST_FMAF)
	#undef __FP_FAST_FMAF
#endif
#define __FP_FAST_FMAF 1

#if defined(__FLT64_DENORM_MIN__)
	#undef __FLT64_DENORM_MIN__
#endif
#define __FLT64_DENORM_MIN__ 4.9406564584124654e-324F64

#if defined(__DBL_MIN__)
	#undef __DBL_MIN__
#endif
#define __DBL_MIN__ double(2.2250738585072014e-308L)

#if defined(ARDUINO_ARCH_ESP32)
	#undef ARDUINO_ARCH_ESP32
#endif
#define ARDUINO_ARCH_ESP32 1

#if defined(__FLT32X_EPSILON__)
	#undef __FLT32X_EPSILON__
#endif
#define __FLT32X_EPSILON__ 2.2204460492503131e-16F32x

#if defined(ARDUINO_heltec_wifi_lora_32_V2)
	#undef ARDUINO_heltec_wifi_lora_32_V2
#endif
#define ARDUINO_heltec_wifi_lora_32_V2 1

#if defined(__FLT64_MIN_10_EXP__)
	#undef __FLT64_MIN_10_EXP__
#endif
#define __FLT64_MIN_10_EXP__ (-307)

#if defined(__DEC128_MIN__)
	#undef __DEC128_MIN__
#endif
#define __DEC128_MIN__ 1E-6143DL

#if defined(__REGISTER_PREFIX__)
	#undef __REGISTER_PREFIX__
#endif
#define __REGISTER_PREFIX__

#if defined(__UINT16_MAX__)
	#undef __UINT16_MAX__
#endif
#define __UINT16_MAX__ 0xffff

#if defined(__DBL_HAS_DENORM__)
	#undef __DBL_HAS_DENORM__
#endif
#define __DBL_HAS_DENORM__ 1

#if defined(__FLT32_MIN__)
	#undef __FLT32_MIN__
#endif
#define __FLT32_MIN__ 1.1754943508222875e-38F32

#if defined(__UINT8_TYPE__)
	#undef __UINT8_TYPE__
#endif
#define __UINT8_TYPE__ unsigned char

#if defined(__FLT_MANT_DIG__)
	#undef __FLT_MANT_DIG__
#endif
#define __FLT_MANT_DIG__ 24

#if defined(__LDBL_DECIMAL_DIG__)
	#undef __LDBL_DECIMAL_DIG__
#endif
#define __LDBL_DECIMAL_DIG__ 17

#if defined(__VERSION__)
	#undef __VERSION__
#endif
#define __VERSION__ "8.4.0"

#if defined(__UINT64_C)
	#undef __UINT64_C
#endif
#define __UINT64_C(c) c ## ULL

#if defined(__cpp_unicode_characters)
	#undef __cpp_unicode_characters
#endif
#define __cpp_unicode_characters 200704

#if defined(LoRaWAN_DEBUG_LEVEL)
	#undef LoRaWAN_DEBUG_LEVEL
#endif
#define LoRaWAN_DEBUG_LEVEL 0

#if defined(__GCC_ATOMIC_INT_LOCK_FREE)
	#undef __GCC_ATOMIC_INT_LOCK_FREE
#endif
#define __GCC_ATOMIC_INT_LOCK_FREE 2

#if defined(__FLT32_MANT_DIG__)
	#undef __FLT32_MANT_DIG__
#endif
#define __FLT32_MANT_DIG__ 24

#if defined(__FLOAT_WORD_ORDER__)
	#undef __FLOAT_WORD_ORDER__
#endif
#define __FLOAT_WORD_ORDER__ __ORDER_LITTLE_ENDIAN__

#if defined(HAVE_CONFIG_H)
	#undef HAVE_CONFIG_H
#endif
#define HAVE_CONFIG_H 1

#if defined(__SCHAR_WIDTH__)
	#undef __SCHAR_WIDTH__
#endif
#define __SCHAR_WIDTH__ 8

#if defined(__INT32_C)
	#undef __INT32_C
#endif
#define __INT32_C(c) c

#if defined(__DEC64_EPSILON__)
	#undef __DEC64_EPSILON__
#endif
#define __DEC64_EPSILON__ 1E-15DD

#if defined(__ORDER_PDP_ENDIAN__)
	#undef __ORDER_PDP_ENDIAN__
#endif
#define __ORDER_PDP_ENDIAN__ 3412

#if defined(__DEC128_MIN_EXP__)
	#undef __DEC128_MIN_EXP__
#endif
#define __DEC128_MIN_EXP__ (-6142)

#if defined(__FLT32_MAX_10_EXP__)
	#undef __FLT32_MAX_10_EXP__
#endif
#define __FLT32_MAX_10_EXP__ 38

#if defined(__INT_FAST32_TYPE__)
	#undef __INT_FAST32_TYPE__
#endif
#define __INT_FAST32_TYPE__ int

#if defined(__UINT_LEAST16_TYPE__)
	#undef __UINT_LEAST16_TYPE__
#endif
#define __UINT_LEAST16_TYPE__ short unsigned int

#if defined(__INT16_MAX__)
	#undef __INT16_MAX__
#endif
#define __INT16_MAX__ 0x7fff

#if defined(__SIZE_TYPE__)
	#undef __SIZE_TYPE__
#endif
#define __SIZE_TYPE__ unsigned int

#if defined(__UINT64_MAX__)
	#undef __UINT64_MAX__
#endif
#define __UINT64_MAX__ 0xffffffffffffffffULL

#if defined(__INT8_TYPE__)
	#undef __INT8_TYPE__
#endif
#define __INT8_TYPE__ signed char

#if defined(__ELF__)
	#undef __ELF__
#endif
#define __ELF__ 1

#if defined(__xtensa__)
	#undef __xtensa__
#endif
#define __xtensa__ 1

#if defined(__FLT_RADIX__)
	#undef __FLT_RADIX__
#endif
#define __FLT_RADIX__ 2

#if defined(__INT_LEAST16_TYPE__)
	#undef __INT_LEAST16_TYPE__
#endif
#define __INT_LEAST16_TYPE__ short int

#if defined(__LDBL_EPSILON__)
	#undef __LDBL_EPSILON__
#endif
#define __LDBL_EPSILON__ 2.2204460492503131e-16L

#if defined(__UINTMAX_C)
	#undef __UINTMAX_C
#endif
#define __UINTMAX_C(c) c ## ULL

#if defined(__SIG_ATOMIC_MAX__)
	#undef __SIG_ATOMIC_MAX__
#endif
#define __SIG_ATOMIC_MAX__ 0x7fffffff

#if defined(__GCC_ATOMIC_WCHAR_T_LOCK_FREE)
	#undef __GCC_ATOMIC_WCHAR_T_LOCK_FREE
#endif
#define __GCC_ATOMIC_WCHAR_T_LOCK_FREE 2

#if defined(__SIZEOF_PTRDIFF_T__)
	#undef __SIZEOF_PTRDIFF_T__
#endif
#define __SIZEOF_PTRDIFF_T__ 4

#if defined(MBEDTLS_CONFIG_FILE)
	#undef MBEDTLS_CONFIG_FILE
#endif
#define MBEDTLS_CONFIG_FILE "mbedtls/esp_config.h"

#if defined(__FLT32X_MANT_DIG__)
	#undef __FLT32X_MANT_DIG__
#endif
#define __FLT32X_MANT_DIG__ 53

#if defined(__FLT32X_MIN_EXP__)
	#undef __FLT32X_MIN_EXP__
#endif
#define __FLT32X_MIN_EXP__ (-1021)

#if defined(__DEC32_SUBNORMAL_MIN__)
	#undef __DEC32_SUBNORMAL_MIN__
#endif
#define __DEC32_SUBNORMAL_MIN__ 0.000001E-95DF

#if defined(__INT_FAST16_MAX__)
	#undef __INT_FAST16_MAX__
#endif
#define __INT_FAST16_MAX__ 0x7fffffff

#if defined(__FLT64_DIG__)
	#undef __FLT64_DIG__
#endif
#define __FLT64_DIG__ 15

#if defined(__UINT_FAST32_MAX__)
	#undef __UINT_FAST32_MAX__
#endif
#define __UINT_FAST32_MAX__ 0xffffffffU

#if defined(__UINT_LEAST64_TYPE__)
	#undef __UINT_LEAST64_TYPE__
#endif
#define __UINT_LEAST64_TYPE__ long long unsigned int

#if defined(__FLT_HAS_QUIET_NAN__)
	#undef __FLT_HAS_QUIET_NAN__
#endif
#define __FLT_HAS_QUIET_NAN__ 1

#if defined(__FLT_MAX_10_EXP__)
	#undef __FLT_MAX_10_EXP__
#endif
#define __FLT_MAX_10_EXP__ 38

#if defined(__LONG_MAX__)
	#undef __LONG_MAX__
#endif
#define __LONG_MAX__ 0x7fffffffL

#if defined(__DEC128_SUBNORMAL_MIN__)
	#undef __DEC128_SUBNORMAL_MIN__
#endif
#define __DEC128_SUBNORMAL_MIN__ 0.000000000000000000000000000000001E-6143DL

#if defined(__FLT_HAS_INFINITY__)
	#undef __FLT_HAS_INFINITY__
#endif
#define __FLT_HAS_INFINITY__ 1

#if defined(__cpp_unicode_literals)
	#undef __cpp_unicode_literals
#endif
#define __cpp_unicode_literals 200710

#if defined(__UINT_FAST16_TYPE__)
	#undef __UINT_FAST16_TYPE__
#endif
#define __UINT_FAST16_TYPE__ unsigned int

#if defined(__DEC64_MAX__)
	#undef __DEC64_MAX__
#endif
#define __DEC64_MAX__ 9.999999999999999E384DD

#if defined(__INT_FAST32_WIDTH__)
	#undef __INT_FAST32_WIDTH__
#endif
#define __INT_FAST32_WIDTH__ 32

#if defined(ARDUINO)
	#undef ARDUINO
#endif
#define ARDUINO 108010

#if defined(__CHAR16_TYPE__)
	#undef __CHAR16_TYPE__
#endif
#define __CHAR16_TYPE__ short unsigned int

#if defined(__PRAGMA_REDEFINE_EXTNAME)
	#undef __PRAGMA_REDEFINE_EXTNAME
#endif
#define __PRAGMA_REDEFINE_EXTNAME 1

#if defined(__SIZE_WIDTH__)
	#undef __SIZE_WIDTH__
#endif
#define __SIZE_WIDTH__ 32

#if defined(__INT_LEAST16_MAX__)
	#undef __INT_LEAST16_MAX__
#endif
#define __INT_LEAST16_MAX__ 0x7fff

#if defined(__DEC64_MANT_DIG__)
	#undef __DEC64_MANT_DIG__
#endif
#define __DEC64_MANT_DIG__ 16

#if defined(__INT64_MAX__)
	#undef __INT64_MAX__
#endif
#define __INT64_MAX__ 0x7fffffffffffffffLL

#if defined(__UINT_LEAST32_MAX__)
	#undef __UINT_LEAST32_MAX__
#endif
#define __UINT_LEAST32_MAX__ 0xffffffffU

#if defined(__FLT32_DENORM_MIN__)
	#undef __FLT32_DENORM_MIN__
#endif
#define __FLT32_DENORM_MIN__ 1.4012984643248171e-45F32

#if defined(__GCC_ATOMIC_LONG_LOCK_FREE)
	#undef __GCC_ATOMIC_LONG_LOCK_FREE
#endif
#define __GCC_ATOMIC_LONG_LOCK_FREE 2

#if defined(__SIG_ATOMIC_WIDTH__)
	#undef __SIG_ATOMIC_WIDTH__
#endif
#define __SIG_ATOMIC_WIDTH__ 32

#if defined(__INT_LEAST64_TYPE__)
	#undef __INT_LEAST64_TYPE__
#endif
#define __INT_LEAST64_TYPE__ long long int

#if defined(__INT16_TYPE__)
	#undef __INT16_TYPE__
#endif
#define __INT16_TYPE__ short int

#if defined(__INT_LEAST8_TYPE__)
	#undef __INT_LEAST8_TYPE__
#endif
#define __INT_LEAST8_TYPE__ signed char

#if defined(__DEC32_MAX_EXP__)
	#undef __DEC32_MAX_EXP__
#endif
#define __DEC32_MAX_EXP__ 97

#if defined(__INT_FAST8_MAX__)
	#undef __INT_FAST8_MAX__
#endif
#define __INT_FAST8_MAX__ 0x7fffffff

#if defined(__INTPTR_MAX__)
	#undef __INTPTR_MAX__
#endif
#define __INTPTR_MAX__ 0x7fffffff

#if defined(__cpp_range_based_for)
	#undef __cpp_range_based_for
#endif
#define __cpp_range_based_for 200907

#if defined(__FLT64_HAS_QUIET_NAN__)
	#undef __FLT64_HAS_QUIET_NAN__
#endif
#define __FLT64_HAS_QUIET_NAN__ 1

#if defined(__FLT32_MIN_10_EXP__)
	#undef __FLT32_MIN_10_EXP__
#endif
#define __FLT32_MIN_10_EXP__ (-37)

#if defined(__EXCEPTIONS)
	#undef __EXCEPTIONS
#endif
#define __EXCEPTIONS 1

#if defined(__LDBL_MANT_DIG__)
	#undef __LDBL_MANT_DIG__
#endif
#define __LDBL_MANT_DIG__ 53

#if defined(__DBL_HAS_QUIET_NAN__)
	#undef __DBL_HAS_QUIET_NAN__
#endif
#define __DBL_HAS_QUIET_NAN__ 1

#if defined(__FLT64_HAS_INFINITY__)
	#undef __FLT64_HAS_INFINITY__
#endif
#define __FLT64_HAS_INFINITY__ 1

#if defined(__SIG_ATOMIC_MIN__)
	#undef __SIG_ATOMIC_MIN__
#endif
#define __SIG_ATOMIC_MIN__ (-__SIG_ATOMIC_MAX__ - 1)

#if defined(__INTPTR_TYPE__)
	#undef __INTPTR_TYPE__
#endif
#define __INTPTR_TYPE__ int

#if defined(__UINT16_TYPE__)
	#undef __UINT16_TYPE__
#endif
#define __UINT16_TYPE__ short unsigned int

#if defined(__WCHAR_TYPE__)
	#undef __WCHAR_TYPE__
#endif
#define __WCHAR_TYPE__ short unsigned int

#if defined(__SIZEOF_FLOAT__)
	#undef __SIZEOF_FLOAT__
#endif
#define __SIZEOF_FLOAT__ 4

#if defined(__UINTPTR_MAX__)
	#undef __UINTPTR_MAX__
#endif
#define __UINTPTR_MAX__ 0xffffffffU

#if defined(__INT_FAST64_WIDTH__)
	#undef __INT_FAST64_WIDTH__
#endif
#define __INT_FAST64_WIDTH__ 64

#if defined(__DEC64_MIN_EXP__)
	#undef __DEC64_MIN_EXP__
#endif
#define __DEC64_MIN_EXP__ (-382)

#if defined(__cpp_decltype)
	#undef __cpp_decltype
#endif
#define __cpp_decltype 200707

#if defined(__FLT32_DECIMAL_DIG__)
	#undef __FLT32_DECIMAL_DIG__
#endif
#define __FLT32_DECIMAL_DIG__ 9

#if defined(__INT_FAST64_MAX__)
	#undef __INT_FAST64_MAX__
#endif
#define __INT_FAST64_MAX__ 0x7fffffffffffffffLL

#if defined(__GCC_ATOMIC_TEST_AND_SET_TRUEVAL)
	#undef __GCC_ATOMIC_TEST_AND_SET_TRUEVAL
#endif
#define __GCC_ATOMIC_TEST_AND_SET_TRUEVAL 1

#if defined(UNITY_INCLUDE_CONFIG_H)
	#undef UNITY_INCLUDE_CONFIG_H
#endif
#define UNITY_INCLUDE_CONFIG_H 1

#if defined(__FLT_DIG__)
	#undef __FLT_DIG__
#endif
#define __FLT_DIG__ 6

#if defined(__UINT_FAST64_TYPE__)
	#undef __UINT_FAST64_TYPE__
#endif
#define __UINT_FAST64_TYPE__ long long unsigned int

#if defined(__INT_MAX__)
	#undef __INT_MAX__
#endif
#define __INT_MAX__ 0x7fffffff

#if defined(__INT64_TYPE__)
	#undef __INT64_TYPE__
#endif
#define __INT64_TYPE__ long long int

#if defined(__FLT_MAX_EXP__)
	#undef __FLT_MAX_EXP__
#endif
#define __FLT_MAX_EXP__ 128

#if defined(__DBL_MANT_DIG__)
	#undef __DBL_MANT_DIG__
#endif
#define __DBL_MANT_DIG__ 53

#if defined(__cpp_inheriting_constructors)
	#undef __cpp_inheriting_constructors
#endif
#define __cpp_inheriting_constructors 201511

#if defined(__INT_LEAST64_MAX__)
	#undef __INT_LEAST64_MAX__
#endif
#define __INT_LEAST64_MAX__ 0x7fffffffffffffffLL

#if defined(__FP_FAST_FMAF32)
	#undef __FP_FAST_FMAF32
#endif
#define __FP_FAST_FMAF32 1

#if defined(__DEC64_MIN__)
	#undef __DEC64_MIN__
#endif
#define __DEC64_MIN__ 1E-383DD

#if defined(__WINT_TYPE__)
	#undef __WINT_TYPE__
#endif
#define __WINT_TYPE__ unsigned int

#if defined(__UINT_LEAST32_TYPE__)
	#undef __UINT_LEAST32_TYPE__
#endif
#define __UINT_LEAST32_TYPE__ unsigned int

#if defined(__SIZEOF_SHORT__)
	#undef __SIZEOF_SHORT__
#endif
#define __SIZEOF_SHORT__ 2

#if defined(__LDBL_MIN_EXP__)
	#undef __LDBL_MIN_EXP__
#endif
#define __LDBL_MIN_EXP__ (-1021)

#if defined(__FLT64_MAX__)
	#undef __FLT64_MAX__
#endif
#define __FLT64_MAX__ 1.7976931348623157e+308F64

#if defined(__WINT_WIDTH__)
	#undef __WINT_WIDTH__
#endif
#define __WINT_WIDTH__ 32

#if defined(__INT_LEAST8_MAX__)
	#undef __INT_LEAST8_MAX__
#endif
#define __INT_LEAST8_MAX__ 0x7f

#if defined(__FLT32X_MAX_10_EXP__)
	#undef __FLT32X_MAX_10_EXP__
#endif
#define __FLT32X_MAX_10_EXP__ 308

#if defined(__SSP__)
	#undef __SSP__
#endif
#define __SSP__ 1

#if defined(__WCHAR_UNSIGNED__)
	#undef __WCHAR_UNSIGNED__
#endif
#define __WCHAR_UNSIGNED__ 1

#if defined(__LDBL_MAX_10_EXP__)
	#undef __LDBL_MAX_10_EXP__
#endif
#define __LDBL_MAX_10_EXP__ 308

#if defined(__ATOMIC_RELAXED)
	#undef __ATOMIC_RELAXED
#endif
#define __ATOMIC_RELAXED 0

#if defined(__DBL_EPSILON__)
	#undef __DBL_EPSILON__
#endif
#define __DBL_EPSILON__ double(2.2204460492503131e-16L)

#if defined(__XTENSA_WINDOWED_ABI__)
	#undef __XTENSA_WINDOWED_ABI__
#endif
#define __XTENSA_WINDOWED_ABI__ 1

#if defined(__UINT8_C)
	#undef __UINT8_C
#endif
#define __UINT8_C(c) c

#if defined(__FLT64_MAX_EXP__)
	#undef __FLT64_MAX_EXP__
#endif
#define __FLT64_MAX_EXP__ 1024

#if defined(__INT_LEAST32_TYPE__)
	#undef __INT_LEAST32_TYPE__
#endif
#define __INT_LEAST32_TYPE__ int

#if defined(__SIZEOF_WCHAR_T__)
	#undef __SIZEOF_WCHAR_T__
#endif
#define __SIZEOF_WCHAR_T__ 2

#if defined(__INT_FAST8_TYPE__)
	#undef __INT_FAST8_TYPE__
#endif
#define __INT_FAST8_TYPE__ int

#if defined(__GNUC_STDC_INLINE__)
	#undef __GNUC_STDC_INLINE__
#endif
#define __GNUC_STDC_INLINE__ 1

#if defined(__FLT64_HAS_DENORM__)
	#undef __FLT64_HAS_DENORM__
#endif
#define __FLT64_HAS_DENORM__ 1

#if defined(__FLT32_EPSILON__)
	#undef __FLT32_EPSILON__
#endif
#define __FLT32_EPSILON__ 1.1920928955078125e-7F32

#if defined(__DBL_DECIMAL_DIG__)
	#undef __DBL_DECIMAL_DIG__
#endif
#define __DBL_DECIMAL_DIG__ 17

#if defined(__STDC_UTF_32__)
	#undef __STDC_UTF_32__
#endif
#define __STDC_UTF_32__ 1

#if defined(__INT_FAST8_WIDTH__)
	#undef __INT_FAST8_WIDTH__
#endif
#define __INT_FAST8_WIDTH__ 32

#if defined(__DEC_EVAL_METHOD__)
	#undef __DEC_EVAL_METHOD__
#endif
#define __DEC_EVAL_METHOD__ 2

#if defined(__FLT32X_MAX__)
	#undef __FLT32X_MAX__
#endif
#define __FLT32X_MAX__ 1.7976931348623157e+308F32x

#if defined(ESP_PLATFORM)
	#undef ESP_PLATFORM
#endif
#define ESP_PLATFORM 1

#if defined(__XTENSA__)
	#undef __XTENSA__
#endif
#define __XTENSA__ 1

#if defined(__ORDER_BIG_ENDIAN__)
	#undef __ORDER_BIG_ENDIAN__
#endif
#define __ORDER_BIG_ENDIAN__ 4321

#if defined(ARDUINO_PARTITION_default_8MB)
	#undef ARDUINO_PARTITION_default_8MB
#endif
#define ARDUINO_PARTITION_default_8MB 1

#if defined(__cpp_runtime_arrays)
	#undef __cpp_runtime_arrays
#endif
#define __cpp_runtime_arrays 198712

#if defined(__UINT64_TYPE__)
	#undef __UINT64_TYPE__
#endif
#define __UINT64_TYPE__ long long unsigned int

#if defined(__UINT32_C)
	#undef __UINT32_C
#endif
#define __UINT32_C(c) c ## U

#if defined(__INTMAX_MAX__)
	#undef __INTMAX_MAX__
#endif
#define __INTMAX_MAX__ 0x7fffffffffffffffLL

#if defined(__cpp_alias_templates)
	#undef __cpp_alias_templates
#endif
#define __cpp_alias_templates 200704

#if defined(__BYTE_ORDER__)
	#undef __BYTE_ORDER__
#endif
#define __BYTE_ORDER__ __ORDER_LITTLE_ENDIAN__

#if defined(__FLT_DENORM_MIN__)
	#undef __FLT_DENORM_MIN__
#endif
#define __FLT_DENORM_MIN__ 1.4012984643248171e-45F

#if defined(__INT8_MAX__)
	#undef __INT8_MAX__
#endif
#define __INT8_MAX__ 0x7f

#if defined(__LONG_WIDTH__)
	#undef __LONG_WIDTH__
#endif
#define __LONG_WIDTH__ 32

#if defined(__OPTIMIZE_SIZE__)
	#undef __OPTIMIZE_SIZE__
#endif
#define __OPTIMIZE_SIZE__ 1

#if defined(__UINT_FAST32_TYPE__)
	#undef __UINT_FAST32_TYPE__
#endif
#define __UINT_FAST32_TYPE__ unsigned int

#if defined(__CHAR32_TYPE__)
	#undef __CHAR32_TYPE__
#endif
#define __CHAR32_TYPE__ unsigned int

#if defined(__FLT_MAX__)
	#undef __FLT_MAX__
#endif
#define __FLT_MAX__ 3.4028234663852886e+38F

#if defined(__cpp_constexpr)
	#undef __cpp_constexpr
#endif
#define __cpp_constexpr 200704

#if defined(__INT32_TYPE__)
	#undef __INT32_TYPE__
#endif
#define __INT32_TYPE__ int

#if defined(__SIZEOF_DOUBLE__)
	#undef __SIZEOF_DOUBLE__
#endif
#define __SIZEOF_DOUBLE__ 8

#if defined(__cpp_exceptions)
	#undef __cpp_exceptions
#endif
#define __cpp_exceptions 199711

#if defined(__FLT_MIN_10_EXP__)
	#undef __FLT_MIN_10_EXP__
#endif
#define __FLT_MIN_10_EXP__ (-37)

#if defined(__FLT64_MIN__)
	#undef __FLT64_MIN__
#endif
#define __FLT64_MIN__ 2.2250738585072014e-308F64

#if defined(__INT_LEAST32_WIDTH__)
	#undef __INT_LEAST32_WIDTH__
#endif
#define __INT_LEAST32_WIDTH__ 32

#if defined(__INTMAX_TYPE__)
	#undef __INTMAX_TYPE__
#endif
#define __INTMAX_TYPE__ long long int

#if defined(__DEC128_MAX_EXP__)
	#undef __DEC128_MAX_EXP__
#endif
#define __DEC128_MAX_EXP__ 6145

#if defined(__FLT32X_HAS_QUIET_NAN__)
	#undef __FLT32X_HAS_QUIET_NAN__
#endif
#define __FLT32X_HAS_QUIET_NAN__ 1

#if defined(__ATOMIC_CONSUME)
	#undef __ATOMIC_CONSUME
#endif
#define __ATOMIC_CONSUME 1

#if defined(ARDUINO_BOARD)
	#undef ARDUINO_BOARD
#endif
#define ARDUINO_BOARD heltec_wifi_lora_32_V2

#if defined(__GNUC_MINOR__)
	#undef __GNUC_MINOR__
#endif
#define __GNUC_MINOR__ 4

#if defined(__INT_FAST16_WIDTH__)
	#undef __INT_FAST16_WIDTH__
#endif
#define __INT_FAST16_WIDTH__ 32

#if defined(__UINTMAX_MAX__)
	#undef __UINTMAX_MAX__
#endif
#define __UINTMAX_MAX__ 0xffffffffffffffffULL

#if defined(__DEC32_MANT_DIG__)
	#undef __DEC32_MANT_DIG__
#endif
#define __DEC32_MANT_DIG__ 7

#if defined(__FLT32X_DENORM_MIN__)
	#undef __FLT32X_DENORM_MIN__
#endif
#define __FLT32X_DENORM_MIN__ 4.9406564584124654e-324F32x

#if defined(__DBL_MAX_10_EXP__)
	#undef __DBL_MAX_10_EXP__
#endif
#define __DBL_MAX_10_EXP__ 308

#if defined(__LDBL_DENORM_MIN__)
	#undef __LDBL_DENORM_MIN__
#endif
#define __LDBL_DENORM_MIN__ 4.9406564584124654e-324L

#if defined(__INT16_C)
	#undef __INT16_C
#endif
#define __INT16_C(c) c

#if defined(__STDC__)
	#undef __STDC__
#endif
#define __STDC__ 1

#if defined(__FLT32X_DIG__)
	#undef __FLT32X_DIG__
#endif
#define __FLT32X_DIG__ 15

#if defined(__PTRDIFF_TYPE__)
	#undef __PTRDIFF_TYPE__
#endif
#define __PTRDIFF_TYPE__ int

#if defined(__ATOMIC_SEQ_CST)
	#undef __ATOMIC_SEQ_CST
#endif
#define __ATOMIC_SEQ_CST 5

#if defined(__UINT32_TYPE__)
	#undef __UINT32_TYPE__
#endif
#define __UINT32_TYPE__ unsigned int

#if defined(__FLT32X_MIN_10_EXP__)
	#undef __FLT32X_MIN_10_EXP__
#endif
#define __FLT32X_MIN_10_EXP__ (-307)

#if defined(__UINTPTR_TYPE__)
	#undef __UINTPTR_TYPE__
#endif
#define __UINTPTR_TYPE__ unsigned int

#if defined(REGION_EU868)
	#undef REGION_EU868
#endif
#define REGION_EU868 1

#if defined(__DEC64_SUBNORMAL_MIN__)
	#undef __DEC64_SUBNORMAL_MIN__
#endif
#define __DEC64_SUBNORMAL_MIN__ 0.000000000000001E-383DD

#if defined(__DEC128_MANT_DIG__)
	#undef __DEC128_MANT_DIG__
#endif
#define __DEC128_MANT_DIG__ 34

#if defined(__LDBL_MIN_10_EXP__)
	#undef __LDBL_MIN_10_EXP__
#endif
#define __LDBL_MIN_10_EXP__ (-307)

#if defined(__SIZEOF_LONG_LONG__)
	#undef __SIZEOF_LONG_LONG__
#endif
#define __SIZEOF_LONG_LONG__ 8

#if defined(__cpp_user_defined_literals)
	#undef __cpp_user_defined_literals
#endif
#define __cpp_user_defined_literals 200809

#if defined(__GCC_ATOMIC_LLONG_LOCK_FREE)
	#undef __GCC_ATOMIC_LLONG_LOCK_FREE
#endif
#define __GCC_ATOMIC_LLONG_LOCK_FREE 1

#if defined(__FLT32X_MIN__)
	#undef __FLT32X_MIN__
#endif
#define __FLT32X_MIN__ 2.2250738585072014e-308F32x

#if defined(F_CPU)
	#undef F_CPU
#endif
#define F_CPU 240000000L

#if defined(__LDBL_DIG__)
	#undef __LDBL_DIG__
#endif
#define __LDBL_DIG__ 15

#if defined(__FLT_DECIMAL_DIG__)
	#undef __FLT_DECIMAL_DIG__
#endif
#define __FLT_DECIMAL_DIG__ 9

#if defined(__UINT_FAST16_MAX__)
	#undef __UINT_FAST16_MAX__
#endif
#define __UINT_FAST16_MAX__ 0xffffffffU

#if defined(__GCC_ATOMIC_SHORT_LOCK_FREE)
	#undef __GCC_ATOMIC_SHORT_LOCK_FREE
#endif
#define __GCC_ATOMIC_SHORT_LOCK_FREE 2

#if defined(__INT_LEAST64_WIDTH__)
	#undef __INT_LEAST64_WIDTH__
#endif
#define __INT_LEAST64_WIDTH__ 64

#if defined(__UINT_FAST8_TYPE__)
	#undef __UINT_FAST8_TYPE__
#endif
#define __UINT_FAST8_TYPE__ unsigned int

#if defined(_GNU_SOURCE)
	#undef _GNU_SOURCE
#endif
#define _GNU_SOURCE 1

#if defined(__ATOMIC_ACQ_REL)
	#undef __ATOMIC_ACQ_REL
#endif
#define __ATOMIC_ACQ_REL 4

#if defined(__ATOMIC_RELEASE)
	#undef __ATOMIC_RELEASE
#endif
#define __ATOMIC_RELEASE 3



#endif  //_VMICRO_INTELLISENSE

#endif  //_VMICRO_INTELLISENSE_GCC_CORE
