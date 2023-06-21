/**
 * print_sign - Prints the sign of a number.
 * @n: The number to check.
 *
 * Return: 1 if @n is greater than zero and prints +,
 *         0 if @n is zero and prints 0,
 *        -1 if @n is less than zero and prints -.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}

/**
 * main - Entry point of the program.
 *
 * Return: Always 0.
 */
int main(void)
{
	int number = -10;
	int result = print_sign(number);
	_putchar('\n');
	_putchar('S');
	_putchar('i');
	_putchar('g');
	_putchar('n');
	_putchar(':');
	_putchar(' ');
	char sign = result == 1 ? '+' : result == 0 ? '0' : '-';
	_putchar(sign);
	_putchar('\n');

	return (0);
}

