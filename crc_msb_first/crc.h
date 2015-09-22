#ifndef CRC32_H
#define CRC32_H

#include <inttypes.h>

extern uint16_t crc16_ccitt(const void *buffer, uint16_t length);

extern uint32_t crc32_mpeg2(const void *buffer, uint16_t length);

#endif