#include "main.h"

/**
 * print_numbers - prints the numbers from 0 to 9
 */
void print_numbers(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	{
		c = i + '0';
		_putchar(c);
	}

	_putchar('\n');
}
