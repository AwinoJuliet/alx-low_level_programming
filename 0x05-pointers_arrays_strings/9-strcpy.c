#include "main.h"
#include <unistd.h>

/**
 * _strcpy - Copies a string from source to destination.
 * @dest: The buffer to copy the string to.
 * @src: The source string to be copied.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, const char *src)
{
    int index = 0;
    while (src[index] != '\0')
    {
        dest[index] = src[index];
        index++;
    }
    dest[index] = '\0';
    return dest;
}
