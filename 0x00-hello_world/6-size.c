#include <stdio.h>

/**
 * main - Entry point of the program
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char D;
	int A;
	long int B;
	long long int C;
	float F;

	printf("Size of a char: %lu byte(s)\n", (unsigned long)sizeof(D));
	printf("Size of an int: %lu byte(s)\n", (unsigned long)sizeof(A));
	printf("Size of a long int: %lu byte(s)\n", (unsigned long)sizeof(B));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned long)sizeof(C));
	printf("Size of a float: %lu byte(s)\n", (unsigned long)sizeof(F));

	return (0);
}
