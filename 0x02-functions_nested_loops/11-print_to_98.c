#include <stdio.h>

/**
 * print_to_98 - Prints all natural numbers from n to 98.
 * @n: The starting number.
 */
void print_to_98(int n)
{
	while (n != 98)
	{
		printf("%d, ", n);

		if (n > 98)
			n--;
		else
			n++;
	}

	printf("%d\n", n);
}

int main(void)
{
	int start_number = 50;
	print_to_98(start_number);
	return 0;
}
