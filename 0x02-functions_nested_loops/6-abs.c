#include "main.h"
#include <stdio.h>

/**
 * _abs - Returns the absolute value of an integer number.
 * @c: The number to check.
 *
 * Return: The absolute value of @c.
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
		return (c);
	}
	else
	{
		return (c * -1);
	}
}

