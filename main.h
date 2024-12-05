#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

typedef struct

{
	char ph;

	int (*function)(va_list args);

} convert;

int _putchar(char c);
int _printf(const char *format, ...);
int printf_char(va_list val);
int printf_string(va_list val);
int _strlen(char *str);
int _strlenc(const char *str);
int print_percent(va_list args);
int print_i(va_list args);
int print_d(va_list args);

#endif