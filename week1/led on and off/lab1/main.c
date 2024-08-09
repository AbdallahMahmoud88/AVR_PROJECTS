/*
 * main.c
 *
 *  Created on: ??þ/??þ/????
 *      Author: NV_User
 */

#include "types.h"
#include <util/delay.h>
#define DDRA *((u8*)0x3A)
#define PORTA *((u8*)0x3B)
#define PINA *((volatile u8*)0x39)
int main(void){
	//Pin 4 in DDRA is output
	DDRA |=1;
	while(1){
	//PIN 4 in PORTA is high
	PORTA |=1;
	_delay_ms(1000);
	PORTA &=~1;
	_delay_ms(1000);
	}
	return 0;
}
