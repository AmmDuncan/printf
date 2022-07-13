#ifndef MAIN_H
#define MAIN_H

#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
#include <unistd.h>

void _putchar(char c);
void putnum(int num);
int _printf(const char *format, ...);
int handle_format(char spec, va_list list);
int print_string(char *str);
int print_int(int num);
int print_binary(unsigned int num);

#endif
