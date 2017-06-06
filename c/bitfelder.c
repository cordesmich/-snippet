/*
 * bitfelder.c
 *
 * Created: 14.12.2011 18:11:04
 *  Author: Michael
 */ 

#include <avr/io.h>

// Example
/* struct {
unsigned uint8_t bit_0:1;	// 1 Bit für bStatus_1
unsigned uint8_t bit_1:1;	// 1 Bit für bStatus_2
unsigned uint8_t bit_2:1;
unsigned uint8_t bit_3:1;
unsigned uint8_t bit_4:1;
unsigned uint8_t bit_5:1;
unsigned uint8_t bit_6:1;
unsigned uint8_t bit_7:1;

unsigned char bNochNBit:1;	// Und hier noch mal ein Bit
unsigned char b2Bits:2;		// Dieses Feld ist 2 Bits breit
							// All das hat in einer einzigen Byte-Variable Platz.
							// die 3 verbleibenden Bits bleiben ungenutzt
} x; */




typedef struct {
	uint8_t flag1:1;
	uint8_t flag2:1;
	uint8_t flag3:1;
	uint8_t flag4:1;
	uint8_t flag5:1;
	uint8_t flag6:1;
	uint8_t flag7:1;
	uint8_t flag8:1;
}bitfield_t;

typedef union {
	uint8_t val;
	bitfield_t bits;
}bitsnbytes_t;

bitsnbytes_t structA, structB, structC;



int main(void)
{
    uint8_t test = 0xAA;
	structC.val = test;
	
	structA.bits.flag1 = 1;
	structB.bits.flag2 = 1;
	structC.val = structA.val | structB.val;
	
	while(1)
    {
        //TODO:: Please write your application code 
    }
}