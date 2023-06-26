#include "main.h"
#include <unistd.h>

/**
 * _strcpy - Reverse a string and copy it to another buffer.
 * @dest: The buffer to copy the reversed string to.
 * @src: The source string to be reversed.
 *
 * Return: A pointer to the destination buffer.
 */
char *_strcpy(char *dest, const char *src)
{
    int src_len = 0;
    int i;

    // Calculate the length of the source string
    while (src[src_len] != '\0')
        src_len++;

    // Copy characters from source string to destination in reverse order
    for (i = 0; i < src_len; i++)
        dest[i] = src[src_len - i - 1];

    dest[i] = '\0'; // Add null terminator to the destination string

    return dest;
}
