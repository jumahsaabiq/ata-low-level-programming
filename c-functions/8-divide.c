#include <stdio.h>

/**
 * divide - divides two integers
 * @a: first integer (dividend)
 * @b: second integer (divisor)
 * Return: result of division, or 0 if divisor is 0
 */
int divide(int a, int b)
{
    if (b == 0)
        return 0;
    return (a / b);
}

/**
 * main - entry point
 * Description: takes two integers, calls divide(), and prints the result
 * Return: 0
 */
int main(void)
{
    int a, b, result;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    result = divide(a, b);
    printf("Result of division: %d\n", result);

    return 0;
}
