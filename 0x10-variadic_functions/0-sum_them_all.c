#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its parameters.
 * @n: The number of arguments passed.
 * @...: A variable number of arguments to sum.
 *
 * Return: The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	int sum = 0;

	/* Initialize the argument list */
	va_start(args, n);

	/* Sum all the arguments */
	for (i = 0; i < n; i++)
	{
		sum += va_arg(args, int);
	}

	/* Clean up the argument list */
	va_end(args);

	return sum;
}
