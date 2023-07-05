/**
 * factorial - prints factorial of any number.
 * @n: contains an integer number.
 * Return: factorial value of an integer number.
 */

int factorial(int n)
{
    if (n == 0 || n == 1)
    {
        return 1;
    }
    else if (n < 0)
    {
        return -1;
    }
    return n * factorial(n - 1);
}
