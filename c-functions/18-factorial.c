#include <stdio.h>

/* Function prototype */
long long calculate_factorial(int n);

/**
 * main - entry point
 * Description: Reads a non-negative integer and prints its factorial
 * Return: 0
 */
int main(void)
{
    int n;
    long long result;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Factorial is not defined for negative numbers.\n");
        return 0;
    }

    result = calculate_factorial(n);
    printf("Factorial of %d is: %lld\n", n, result);

    return 0;
}

/**
 * calculate_factorial - calculates factorial of a non-negative integer
 * @n: the integer whose factorial is to be computed
 * Return: factorial of n
 */
long long calculate_factorial(int n)
{
    long long fact = 1;
    int i;

    for (i = 1; i <= n; i++)
        fact *= i;

    return fact;
}
