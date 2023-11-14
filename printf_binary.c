#include"main.h"
/**
 * write_binary  - prints the binary conversion of number .
 * @num: unsigned integer to convert 
 *
 * Return: the number of printed characters .
 */
int write_binary( int num){
int counter ;
int length ,n , size,i;
n = num;
char* str;

counter = 0;
length = 0;
if (num == 0){
write_char(48);
counter += 1;
}

else if (num >0){
while(n != 0){
length++ ;
n /= 2 ;
}
str = (char*)malloc(sizeof(char)*(length+1));
for (i = 0 ; i < length ; i++){
if (num%2 == 0)
*(str+i) = 48 ;
else
*(str+i) = 49 ;
num /= 2 ;
}
*(str+length) = '\0';
counter += write_reverse(str);
free(str);
return (counter);
}
else
return (0);
}

