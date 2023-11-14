#include "main.h"
/**
 * write_double - prints doubled integer
 * @num: the number to double
 *
 * Return: i
 */
int write_double(int num)
{
	int i;

	i = 0;
	i += write_int(num);
	i += write_int(num);
	return (i);
}

