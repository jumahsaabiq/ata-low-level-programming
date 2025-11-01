#include <stdio.h>

/**
 * subtract - returns the result of subtracting b from a
 * @a: first integer
 * @b: second integer
 * Return: difference of a and b
 */
int subtract(int a, int b)
{
    return (a - b);
}

/**
 * main - entry point
 * Description: takes two integers, calls subtract(), and prints result
 * Return: 0
 */
int main(void)
{
    int a, b, result;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    result = subtract(a, b);
    printf("Result of subtraction: %d\n", result);

    return 0;
}
