#include "uart.h"
unsigned char string_buffer[100] = "Mahmoud Abou-Hawis";
void main()
{
    Uart_Send_string(string_buffer);

}
