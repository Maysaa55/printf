#include "main.h"

/**
 * printf_char - write a character to std output
 * @str: the character to print 
 *
 * Return - the number of printed characters 
 */
int write_char(char str)
{
 write(1, &str , 1);
 return (1);
}

