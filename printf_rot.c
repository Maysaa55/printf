#include "main.h"
/**
* write_rot13 - prints rot13ed string
* @str: the string to cinvert
*
* Return: the number of printed characters
*/
int write_rot13(char *str)
{
	char letter;
	int counter;

	counter = 0;

	if (str != NULL)
	{
		while (*str != '\0')
		{
			letter = *str;
			if ((letter >= 'A' && letter <= 'M') || (letter >= 'a' && letter <= 'm'))
				letter += 13;
			else if ((letter >= 'N' && letter <= 'Z') || (letter >= 'n' && letter <= 'z'))
				letter -= 13;

			write(1, &letter, 1);
			counter++;
			str++;
		}
		return (counter);
	}
	else
		return (0);
}

