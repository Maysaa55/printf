# include "main.h"

/**
* write_rot13  - prints reversed string .
* @str: the string to reverse
*
* Return: the number of printed characters .
*/
int write_rot13(char *str)
{
char letter;
if(str != NULL){
while (*str != '\0')
{
letter = *str;
letter += 13;
write(1, &letter, 1);
str += 1;
}
return (strlen(str));
}
else 
return (0);
}

