#include"main.h"
/**
 * write_octal  - prints octal number .
 * @num: the converted number .
 *
 * Return: the number of printed characters .
 */
int write_octal(int num)
	{
 int count;
 int length, n, i;
 char *str;
 n = num;
 count = 0;
 length = 0;
 if (num == 0)
 {
  write_char(48);
  count += 1;
  return (1);
 }

 else if (num > 0)
 {
  while (n != 0)
  {
   length++;
   n /= 8;
  }
  str = (char *)malloc(sizeof(char) * (length + 1));
  for (i = 0; i < length; i++)
  {
   switch (num % 8)
   {
   case (0):
   {
    *(str + i) = 48;
    break;
   }
   case (1):
   {
    *(str + i) = 49;
    break;
   }
   case (2):
   {
    *(str + i) = 50;
    break;
   }
   case (3):
   {
    *(str + i) = 51;
    break;
   }
   case (4):
   {
    *(str + i) = 52;
    break;
   }
   case (5):
   {
    *(str + i) = 53;
    break;
   }
   case (6):
   {
    *(str + i) = 54;
    break;
   }
   case (7):
   {
    *(str + i) = 55;
    break;
   }
   };
   num /= 8;
  }
  *(str + length) = '\0';
  count += write_reverse(str);
  free(str);
  return (count);
 }
  return (0);
}

