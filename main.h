#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdarg.h>
#include<stdlib.h>
#include<limits.h>

int _printf(const char *format, ...);
int write_char(int str);
int write_string(char *str);
int write_int(int num);
int write_binary(unsigned int num);
int write_reverse(char *str);
int write_rot13(char *str);
int  write_double(int num);
void to_string(char *str, int num);
int _pow(int x, int y);

#endif

