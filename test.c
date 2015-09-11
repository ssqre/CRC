#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// #include "lib_crc.h"
#include "crc.h"

void main( int argc, char *argv[] ) 
{
	char str[] = "123456789";
	int i;
	unsigned long crc_32 = 0xFFFFFFFFL;
#if 0
	for(i=0; i<strlen(str); i++)
	{
		crc_32 = update_crc_32(crc_32, str[i]);
	}
#endif

	//crc32_table_init();
	crc_32 = crc32_mpeg2(str, strlen(str));
	
	//crc_32 ^= 0x00000000L;

	printf("result: 0x%08lX\n", crc_32);
	
	//crc_32 ^= 0xffffffffL;
	
	//printf("result: 0x%08lX\n", crc_32);
}
