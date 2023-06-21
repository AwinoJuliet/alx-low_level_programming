#include "main.h"

/**
 * _isalpha - checks for alphabetic lowercase characters
 * @c: the character to be checked
 *
 * Return: 1 if @c is an alphabetic lowercase character, 0 otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
