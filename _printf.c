#include "main.h" 
int _printf(const char *format, ...)
{
 int counter ;
 char specifier;
 va_list ptr;
 counter = 0 ;
 va_start(ptr, format);
 if (format != NULL)
 {
  while (*format)
  {
   if (*format != '%')
   {
    if (*format == '\' && *(format + 1) == 'n')
	write_char('\n');
    else {
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
    if (specifier == 's')
    counter += write_string(va_arg(ptr, char *));
    if (specifier == 'c')
     counter += write_char(va_arg(ptr, int));
    else
      return (-1);
   }
   format++;
  }
 }
 va_end(ptr);
 return (counter);
}

