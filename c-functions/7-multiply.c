#include <stdio.h>

/**
 * multiply - returns the product of two integers
 * @a: first integer
 * @b: second integer
 * Return: product of a and b
 */
int multiply(int a, int b)
{
    return (a * b);
}

/**
 * main - entry point
 * Description: takes two integers, calls multiply(), and prints the product
 * Return: 0
 */
int main(void)
{
    int a, b, result;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    result = multiply(a, b);
    printf("Result of multiplication: %d\n", result);

    return 0;
}
