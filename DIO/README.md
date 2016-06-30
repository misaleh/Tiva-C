**Digital Input Output Driver**

----------

The driver provides 4 functions 

 ```
  void DIO_PortInit(uint32 port, uint32 pins, uint32 Pullup)
  ```
  It initializes port as digital port,(disables analog and alternative functions) it also unlocks it if it has lock.
  
  *port:* which port there is defines which can you choose from them , PortA, PortB, PortC, PortD, PortE, PortF.
  
  *pins:* which pins will be used.
  
  *Pullup:* if there is pins(will be defined as input later) will have pull up resistor
  
    ```
  void DIO_PortRead(uint32 port , uint32 mask, puint32 data)
   ```
    Read from certain port.
  
  *port:* which port there is defines which can you choose from them , PortA, PortB, PortC, PortD, PortE, PortF.
  
  *mask:* which pins will be read.
  
  *data:* pointer to the varaible in which data is read in.
   
    ```
  void DIO_PortDirection(uint32 port, uint32 mask, uint32 value)
   ```
   
  *port:* which port there is defines which can you choose from them , PortA, PortB, PortC, PortD, PortE, PortF.
  
  *mask:* which pins will be read.
  
  *value:* the value to be written, there is 2 defines   ```INPUT  ``` and   ```OUTPUT  ```  that can be used
 
  ```
  void DIO_PortWrite(uint32 port, uint32 mask, uint32 value)  
  ```
  *port:* which port there is defines which can you choose from them , PortA, PortB, PortC, PortD, PortE, PortF.
  
  *mask:* which pins will be read.
  
  *value:* the value to be written, there is 2 defines   ```HIGH  ``` and   ```LOW  ```  that can be used
  
  *Check* the example in main.c for more understanding  to how to use it.