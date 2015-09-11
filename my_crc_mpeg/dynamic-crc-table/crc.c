#include <inttypes.h>
#include "crc.h"

static uint32_t crc32_table[256];

extern void crc32_table_init(void)
{
	uint32_t i, j, k;

	for( i = 0; i < 256; i++ )
	{
		k = 0;
		for( j = (i << 24) | 0x800000; j != 0x80000000; j <<= 1 )
			k = (k << 1) ^ (((k ^ j) & 0x80000000) ? 0x04c11db7 : 0);

		crc32_table[i] = k;
	}
}

uint32_t crc32_mpeg2(const uint8_t *s, uint16_t length)
{
	uint32_t i_crc = 0xffffffff;
	uint16_t i;
	    
	for( i = 0; i < length; i++ )
		i_crc = (i_crc << 8) ^ crc32_table[((i_crc >> 24) ^ s[i]) & 0xff];
		
	return i_crc;	
}