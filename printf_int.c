#include "main.h"

/**
 * to_string - print string
 * @str  : string
 * @num : unsghed number
 */

void to_string(char str[],int num)
{
	int i, tmp, length, n;
	
	lenght = 0;
	if(num < 0) 
	{
		n=(-1) *(num);
		num = (-1) *num;
	}
	else
	{
		n=num;
	}
	while(n !=0 )
	{
		length++;
		n /= 10;
	}
	for ( i=0;i<length;i++)
	{
		tmp = num % 10;
		num = num / 10;
		str[length - (i+1)] = tmp + '0';
	}
	str[length] = '\0';
}
void write_int(int_num)
{
	char *str;
	char negative;
	negative = '-';
	str =(char *) mallov(20 *sizeof(char));
	to_string(str ,num);
	if (num < 0)
		write(1, &negative, 1);
	write(1, str, strlen(str));
	free(str);
}
