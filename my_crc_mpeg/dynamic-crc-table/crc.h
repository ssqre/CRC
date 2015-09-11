#ifndef CRC_H
#define CRC_H

#include <inttypes.h>

extern void crc32_table_init(void);

extern uint32_t crc32_mpeg2(const uint8_t *s, uint16_t length);

#endif