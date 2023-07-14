#include <stdlib.h>
#include <string.h>

/**
 * string_nconcat - Concatenates two strings
 * @s1: The first string
 * @s2: The second string
 * @n: The number of characters to concatenate from s2
 *
 * Return: Pointer to the concatenated string, or NULL on failure
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
    unsigned int len1, len2, concat_len;
    char *concat;

    /* Treat NULL as an empty string */
    if (s1 == NULL)
        s1 = "";
    if (s2 == NULL)
        s2 = "";

    /* Calculate the lengths of the strings */
    len1 = strlen(s1);
    len2 = strlen(s2);

    /* Determine the length of the concatenated string */
    if (n >= len2)
        concat_len = len1 + len2 + 1;
    else
        concat_len = len1 + n + 1;

    /* Allocate memory for the concatenated string */
    concat = malloc(sizeof(char) * concat_len);
    if (concat == NULL)
        return NULL;

    /* Copy s1 to the concatenated string */
    strcpy(concat, s1);

    /* Concatenate n characters of s2 or the entire s2 if n is greater than or equal to its length */
    strncat(concat, s2, n);

    /* Null-terminate the concatenated string */
    concat[concat_len - 1] = '\0';

    return concat;
}
