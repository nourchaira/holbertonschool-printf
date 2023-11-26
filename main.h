#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stddef.h>

typedef struct {
    char *ph;
    int (*function)(va_list);
} convert;

int printf_char(va_list val);
int _putchar(char c);
int _printf(const char *format, ...);
int _strlen(char *str);
int printf_string(va_list val);
int _strlenc(const char *str);
int print_37(void);
int print_i(va_list args);
int print_d(va_list args);
int print_percent(va_list args);

#endif