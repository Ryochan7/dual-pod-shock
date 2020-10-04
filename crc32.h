#ifndef _IPXE_CRC32_H
#define _IPXE_CRC32_H

//FILE_LICENCE ( GPL2_OR_LATER_OR_UBDL );

#include <stdint.h>

#ifdef __cplusplus
extern "C"
{
#endif

uint32_t crc32_le ( uint32_t seed, const void *data, int len );

#ifdef __cplusplus
}
#endif

#endif

