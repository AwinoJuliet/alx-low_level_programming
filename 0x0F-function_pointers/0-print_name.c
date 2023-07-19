#include <stdio.h>

/**
 * print_name - prints a name
 * @name: pointer to the name string
 * @f: pointer to a function that takes a char pointer parameter
 *
 * Return: Nothing
 */
void print_name(char *name, void (*f)(char *))
{
    if (name != NULL && f != NULL)
        f(name);
}
