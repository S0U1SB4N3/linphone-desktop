#define SPEEX_MAJOR_VERSION 1
#define SPEEX_MINOR_VERSION 1
#define SPEEX_MICRO_VERSION 16
#define SPEEX_EXTRA_VERSION " "
#define SPEEX_VERSION "1.2rc1"

/* #undef ENABLE_VALGRIND */
/* #undef ARM4_ASM */
/* #undef ARM5E_ASM */
/* #undef ARMV7NEON_ASM */
/* #undef BFIN_ASM */
/* #undef TI_C55X */
/* #undef DISABLE_FLOAT_API */
/* #undef DISABLE_VBR */
/* #undef FIXED_DEBUG */
/* #undef VORBIS_PSYCHO */
/* #undef _USE_SSE */

#define HAVE_ALLOCA_H 1
#define HAVE_GETOPT_H 1
#define HAVE_STRING_H 1
/* #undef HAVE_SYS_AUDIOIO_H */
/* #undef HAVE_SYS_SOUNDCARD_H */

#define HAVE_GETOPT_LONG 1

#define VAR_ARRAYS
/* #undef USE_ALLOCA */
#define EXPORT __attribute__((visibility("default")))

/* #undef FIXED_POINT */
#define FLOATING_POINT

/* #undef USE_KISS_FFT */
#define USE_SMALLFT
/* #undef USE_GPL_FFTW3 */

#ifndef __cplusplus
/* #undef inline */
#endif
