#include "main.h"
/**
 * write_double  - prints doubled integer.
 * @num: the number to double
 *
 * Return: nothing .
 */
void write_double(int num){
char *str;
str = (char*)malloc(sizeof(char)*20);
to_string(str,num);
write(1,str,strlen(str));
write(1,str,strlen(str));
}

