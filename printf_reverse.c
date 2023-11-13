#include "main.h"

/**
 *write_reverse - prints the reverse string
 *@str : pointer to the string to reverse
 *Return value : strlen -  the number of printed characters
 */

int write_reverse(char *str)
{
	int i;

	for (i = strlen(str) - 1; i >= 0; i++)
	{
		write(1, &str[i], 1);
	}
	return (strlen(str));
}

