#include"main.h"
/**
 * write_unsigned  - prints unsigned integers .
 * @num: the integer t print
 *
 * Return: the number of printed characters .
 */

int write_unsigned(int num)
{
  int count;

  int length;
  int n, i;
  int num1;
  count = 0;
  length = 0;
  n = num;
  if (num == 0)
  {
    write_char(48);
    return (1);
  }
  else
  {
    if (num < 0)
    {
      num *= (-1);
      n *= (-1);
    }
    while (n != 0)
    {
      length++;
      n /= 10;
    }
    for (i = 1; i <= length; i++)
    {
      num1 = (num / _pow(10, length - i)) % 10;
      switch (num1)
      {
      case (0):
      {
        count += write_char(48);
        break;
      }
      case (1):
      {
        count += write_char(49);
        break;
      }
      case (2):
      {
        count += write_char(50);
        break;
      }
      case (3):
      {
        count += write_char(51);
        break;
      }
      case (4):
      {
        count += write_char(52);
        break;
      }
      case (5):
      {
        count += write_char(53);
        break;
      }
      case (6):
      {
        count += write_char(54);
        break;
      }
      case (7):
      {
        count += write_char(55);
        break;
      }
      case (8):
      {
        count += write_char(56);
        break;
      }
      case (9):
      {
        count += write_char(57);
        break;
      }
      };
    }
    return (count);
  }

}

