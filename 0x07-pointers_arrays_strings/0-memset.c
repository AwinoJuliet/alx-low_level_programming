#include <stdio.h>

/**
 * simple_print_buffer - Prints buffer in hexadecimal format
 * @buffer: The address of memory to print
 * @size: The size of the memory to print
 *
 * Return: Nothing
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
	unsigned int i;

	i = 0;
	while (i < size)
	{
		if (i % 10)
			printf(" ");
		if (!(i % 10) && i)
			printf("\n");
		printf("0x%02x", buffer[i]);
		i++;
	}
	printf("\n");
}

char *_memset(char *s, char b, unsigned int n);

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	char buffer[98] = {0x00};

	simple_print_buffer(buffer, 98);
	_memset(buffer, 0x01, 95);
	printf("-------------------------------------------------\n");
	simple_print_buffer(buffer, 98);
	return (0);
}

