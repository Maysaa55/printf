#include "main.h"

/**
 *write_char - write a character to std output
 *@str: the character to print
 *
 * Return:  1
 */

int write_char(int str)
{
	write(1, &str, 1);
	return (1);
}

