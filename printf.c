#include "main.h"

int _printf(const char *const format, ...)
{
	convert p[] = {
		{'s', printf_string},
		{'c', printf_char},
		{'%', print_percent},
		{'i', print_i},
		{'d', print_d},
		{'0', NULL},
	};

	va_list args;
	int i = 0, j = 0, length = 0;

	va_start(args, format);
	if (format == NULL || (format[0] == '%' && format[1] == '\0'))
		return (-1);

	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			while (p[j].ph != '\0')
			{
				if (p[j].ph == format[i + 1])
				{
					length += p[j].function(args);
					i = i + 1;
					break;
				}
				j++;
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
