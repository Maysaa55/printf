#include "main.h"
/**
 * write_string - print a string
 * @str : string pointer
 *
 * Return: string length
 */
int write_string(char  *str)
{
	if (str != NULL)
	{
	write(1, str, strlen(str));
	return (strlen(str));
	}
	return (0);
}

