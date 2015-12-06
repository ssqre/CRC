
#ifndef CRC_H
#define CRC_H

#include "dsata_types.h"

extern U16 crc16(const void *buffer, U16 length);
extern U32 crc32(const void *buffer, U16 length);

#endif