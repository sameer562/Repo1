#include <stdio.h>
#include <stdint.h>

int main()
{
	uint32_t value = 0xABCF; 
	uint8_t	msg[4];
	printf("Hello World");
	(msg)[3U] = (uint8_t) (value);
	(msg)[2U] = (uint8_t) ((value) >>  8U);
	(msg)[1U] = (uint8_t) ((value) >> 16U);
	(msg)[0U] = (uint8_t) ((value) >> 24U);
	for(int i=0; i<4; i++)
	
	{
		printf("msg[%d] : 0x%X\n",i,msg[i]);
	}
	return 0;
}
