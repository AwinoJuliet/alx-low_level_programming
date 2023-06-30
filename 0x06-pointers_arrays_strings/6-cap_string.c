/**
 * cap_string - Capitalizes all words of a string.
 * @str: The input string.
 *
 * Return: A pointer to the modified string.
 */
char *cap_string(char *str)
{
    int capitalize = 1; /* Indicates whether the next character should be capitalized */

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (capitalize && islower(str[i]))
        {
            str[i] = toupper(str[i]);
        }

        capitalize = 0;

        /* Check for word separators */
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' ||
            str[i] == ',' || str[i] == ';' || str[i] == '.' ||
            str[i] == '!' || str[i] == '?' || str[i] == '"' ||
            str[i] == '(' || str[i] == ')' || str[i] == '{' || str[i] == '}')
        {
            capitalize = 1;
        }
    }

    return str;
}
