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
	DDRA = 0xff;
	while(1){

		for(int i=0;i<=7;i++){
			//DDRA |=(1<<i); making that work but the previous better
			PORTA |=(1<<i);
			_delay_ms(500);
		}
		for(int i=0;i<=7;i++){
			//DDRA |=(1<<i);
			PORTA &=~(1<<i);
			_delay_ms(500);
		}

	}
	return 0;
}
