#include "main.h"
/**
 * _putchar - Entry point
 * @c: char
 * Return: char
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
