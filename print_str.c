#include "main.h"

/**
 * _strlen - finds the length of a string.
 * @str: string pointer
 * Return: length of the string.
 */
int _strlen(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return i;
}
