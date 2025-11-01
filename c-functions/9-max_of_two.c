#include <stdio.h>

/**
 * find_max - returns the larger of two integers
 * @a: first integer
 * @b: second integer
 * Return: the maximum of a and b
 */
int find_max(int a, int b)
{
    if (a > b)
        return a;
    else
        return b;
}

/**
 * main - entry point
 * Description: reads two integers, calls find_max, and prints the result
 * Return: 0
 */
int main(void)
{
    int a, b, max;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    max = find_max(a, b);
    printf("Maximum number is: %d\n", max);

    return 0;
}
