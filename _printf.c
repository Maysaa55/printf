#include "main.h" 
 /**
 * _printf  - custom printf function.
 * @format: the format string
 *
 * Return: the number of printed characters .
 */
int _printf(const char *format, ...)
{
 int counter;
 char specifier;
 va_list ptr;
 counter = 0;
 va_start(ptr, format);
 if (format != NULL)
 {
  while (*format)
  {
   if (*format != '%')
   {
    if (*format == '\\')
    {
     if (*(format + 1) == 'n')
	   
     {
      write_char('\n');
      counter += 1 ;
     }
    }
    else
    {
     write(1, &(*format), 1);
     counter += 1;
    }
   }
   else
   {
    specifier = *(++format);
    if (specifier == '%')
    {
     write(1, &specifier, 1);
     counter += 1;
    }
    else if (specifier == 's')
     counter += write_string(va_arg(ptr, char *));
    else if (specifier == 'c')
     counter += write_char(va_arg(ptr, int));
    else if(specifier == 'r')
	counter += write_reverse(va_arg(ptr, char*));
    else if(specifier == 'R')
	counter += write_rot13(va_arg(ptr, char*));
    else if(specifier == 'd')
	    counter += write_int(va_arg(ptr,int));
    else if (specifier == 'i')
	    counter += write_int(va_arg(ptr,int));
    else
     write(1, &specifier, 1);
   }
   format++;
  }
 }
 va_end(ptr);
 return (counter);
}

