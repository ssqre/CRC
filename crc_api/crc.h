#ifndef CRC_H
#define CRC_H

#include <inttypes.h>

extern uint16_t crc16(const void *buffer, uint16_t length, uint16_t init, int lsb);

extern uint32_t crc32(const void *buffer, uint16_t length, uint32_t init, int lsb);

#endif