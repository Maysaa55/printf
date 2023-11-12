#include "main.h"
int _printf(const char *format, ...)
{
 va_list ptr;
 va_start(ptr, format);
 int counter ;
 counter = 0;
 char specifier;
 if (format != NULL)
 {
  while (*format)
  {
   if (*format != '%')
   {
    write(1, &(*format), 1);
    counter += 1;
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
     return -1;
   }
   format++;
  }
 }
 va_end(ptr);
}

