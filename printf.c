#include "main.h"
#include <stdarg.h>

/**
 * _printf - is a function that selects the correct function to print.
 * @format: identifier to look for.
 * Return: the length of the string.
 */
int _printf(const char *const format, ...)
{
	convert p[] = {
		{"%s", printf_string},
		{"%c", printf_char},
		{"%%", print_37},
		{"%i", print_i},
		{"%d", print_d},
	};

	va_list args;
	int i = 0, j, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			j = 4; // Number of format specifiers in the array
			while (j >= 0)
			{
				if (p[j].ph[0] == '%' && p[j].ph[1] == format[i + 1])
				{
					length += p[j].function(args);
					i = i + 2;
					break;
				}
				j--;
			}
		}
		else
		{
			_putchar(format[i]);
			length++;
			i++;
		}
	}

	va_end(args);
	return (length);
}
