#include "Reg.h"
#include "DIO.h"
#include "Types.h"

void delay(void ){
  int i = 1000000;
    while (i > 0) {
      i--;
    }
}
volatile uint32 data = 0;

int main(void) {
	uint32 led = YELLOW;
	DIO_PortInit(PortF, Pin0|Pin1|Pin2|Pin3|Pin4 , Pin0|Pin4); //inti pins from 0 to  in  portf, pull up on pins 0 , 4
	DIO_PortDirection(PortF , Pin1|Pin2|Pin3, OUTPUT); //pins 1 , 2, 3in portf are output
	DIO_PortDirection(PortF , Pin0|Pin4, INPUT);  // pins 0 and 4 are input

	while(TRUE)
	{
		DIO_PortRead(PortF,Pin0,&data);
		if(data == LOW) //active low
				led = CYAN;
		DIO_PortWrite(PortF,led,HIGH);
		delay();
		DIO_PortWrite(PortF,led,LOW);
		delay();
	}
	return 0;
}
