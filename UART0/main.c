#include "UART.h"
#include "PLL.h"
int main(void) {
	PLL_Set80();
	UART0_Init(115200,80000000);
	char c[30] ;
	char data;
	while(1)
	{
		//UART0_SendString(c);
		//UART0_SendChr('a');
	    //	UART0_SendInt(123);
		//data  = UART0_ReadChr();
		//UART0_SendChr('\n');
	     //UART0_SendChr(data);
		//UART0_SendChr('\n');
		UART0_ReadString(c);
		UART0_SendString(c);
		UART0_Println();

	}


	return 0;
}
