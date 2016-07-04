**UART0 driver**

----------
UART0 is used in communication with the computer.

it provides

```void UART0_Init(int,int)```: Takes baud rate and the clock as input.


```void UART0_SendString(char *)```: Sends string.


```void UART0_SendInt(int)```: Send a positive integer.


```void UART0_SendChr(char)```: Send a char.


```char UART0_ReadChr(void)```: Read a char.


```void UART0_ReadString(char*)```: Read a string.

you can define TERMINATE_STRING in UART.h to what will terminate string, for examle Putty sends '\r' when eneter is pressed.

Check main.c for an example. 