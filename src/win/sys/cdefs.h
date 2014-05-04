
#ifndef _TIRPC_SYS_CDEFS
#define _TIRPC_SYS_CDEFS

#if defined(_WIN32)

#define static_inline __inline
#define attribute_unused

#else
#define attribute_unused __attribute__ ((unused))
#endif /* _WIN32 */

#endif /* _TIRPC_SYS_CDEFS */
