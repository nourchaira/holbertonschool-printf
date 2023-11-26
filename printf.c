// printf.c
#include "main.h"
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...) {
    va_list args;
    va_start(args, format);

    int count = 0;
    while (*format) {
        if (*format != '%') {
            putchar(*format);
            count++;
        } else {
            format++; // Move to the character after '%'
            switch (*format) {
                case 'c':
                    putchar(va_arg(args, int));
                    count++;
                    break;
                case 's':
                    count += printf("%s", va_arg(args, char *));
                    break;
                case '%':
                    putchar('%');
                    count++;
                    break;
                default:
                    putchar('%'); // Handle invalid specifier, just print '%'
                    count++;
                    break;
            }
        }
        format++;
    }

    va_end(args);
    return count;
}
