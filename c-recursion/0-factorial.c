#include <stdio.h>

/**
 * factorial - recursively calculates the factorial of a non-negative integer
 * @n: the integer whose factorial is to be calculated
 *
 * Return: the factorial of n
 */
long long factorial(int n)
{
    if (n == 0 || n == 1)  /* Base case */
        return 1;
    else                   /* Recursive case */
        return n * factorial(n - 1);
}

int main(void)
{
    int n;
    long long result;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;
    }

    result = factorial(n);
    printf("The factorial of %d is: %lld\n", n, result);

    return 0;
}
