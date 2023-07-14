#include <stdlib.h>
#include <string.h>

/**
 * _calloc - Allocates memory for an array
 * @nmemb: The number of elements in the array
 * @size: The size of each element in bytes
 *
 * Return: Pointer to the allocated memory, or NULL on failure
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
    void *ptr;
    unsigned int total_size;

    /* Check for zero values */
    if (nmemb == 0 || size == 0)
        return NULL;

    /* Calculate the total size */
    total_size = nmemb * size;

    /* Allocate memory */
    ptr = malloc(total_size);
    if (ptr == NULL)
        return NULL;

    /* Set memory to zero */
    memset(ptr, 0, total_size);

    return ptr;
}
