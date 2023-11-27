#include "main.h"
#include <stddef.h>

/**
 * printf_string - print a string.
 * @val: argument.
 * Return: the length of the string.
 */
int printf_string(va_list args)
{
	char *str;
	int i;
	int length;

	str = va_arg(args, char *);
	if (str == NULL)
	{
		str = "(null)";
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
	else
	{
		length = _strlen(str);
		for (i = 0; i < length; i++)
			_putchar(str[i]);
		return (length);
	}
}
