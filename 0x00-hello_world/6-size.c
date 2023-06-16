#include <stdio.h>

int main(void)
{
    char D;
    int A;
    long int B;
    float F;

printf("size of a char: %lu byte(s)\n", (unsigned long)sizeof(D));
printf("size of an int: %lu byte(s)\n", (unsigned long)sizeof(A));
printf("size of long int: %lu byte(s)\n", (unsigned long)sizeof(B));
printf("size of float: %lu byte(s)\n", (unsigned long)sizeof(F));
return (0);
}

