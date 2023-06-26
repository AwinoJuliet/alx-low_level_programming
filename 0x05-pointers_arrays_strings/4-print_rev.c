#include "main.h"

/**
 * print_rev - Prints a string in reverse.
 * @s: The string to be printed.
 *
 * Return: void.
 */
void print_rev(char *s)
{
	int len = 0;
	int i = 0;

	while (s[i])
	{
		len++;
		i++;
	}

	for (i = len - 1; i >= 0; i--)
	{
		_putchar(s[i]);
	}

	_putchar('\n');
}
