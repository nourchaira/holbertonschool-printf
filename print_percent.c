#include "main.h"

/**
 * print_percent - prints the character '%'.
 * @args: unused argument.
 * Return: 1 (the number of characters printed).
 */
int print_percent(va_list args)
{
	(void)args;
	_putchar('%');
	return (1);
}
