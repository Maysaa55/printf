#ifndef MAIN_H
#define MAIN_H

#include<stdio.h>
#include<string.h>
#include<unistd.h>
#include<stdarg.h>
#include<stdlib.h>

int _printf(const char *format, ...);
int write_char(int str);
int write_string(char* str);
void write_int(int num);
void write_binary(int num);
int write_reverse(char* str);
int write_rot13(char* str);
void write_decimal(int num);


#endif

