#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define PASSWORD_LENGTH 10

/**
 * main - Generates a random valid password for the 101-crackme program.
 *
 * Return: 0 on success.
 */
int main(void)
{
    char password[PASSWORD_LENGTH + 1];
    const char charset[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int i;

    srand(time(NULL)); /* Initialize the random number generator */

    /* Generate random characters for the password */
    for (i = 0; i < PASSWORD_LENGTH; i++)
    {
        int index = rand() % (sizeof(charset) - 1);
        password[i] = charset[index];
    }

    password[PASSWORD_LENGTH] = '\0'; /* Add null terminator */

    printf("%s\n", password);

    /* Run 101-crackme with the generated password */
    char command[100];
    snprintf(command, sizeof(command), "./101-crackme \"%s\"", password);
    system(command);

    return 0;
}
