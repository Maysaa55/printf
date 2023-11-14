#include "main.h"
/**
 * write_double  - prints doubled integer.
 * @num: the number to double
 *
 * Return: nothing .
 */
int write_double(int num){
char *str;
int i, temp;
char negative;
temp = num;
negative = '-';
str = (char*)malloc(sizeof(char)*20);
to_string(str,num);
i = strlen(str);
if (temp < 0 ){
write(1, &negative, 1);
write(1,str,strlen(str));
write(1, &negative, 1);
write(1,str,strlen(str));
i += 1;
}
else{
write(1,str,strlen(str));
write(1,str,strlen(str));
}
free(str);
return (2*i);
}

