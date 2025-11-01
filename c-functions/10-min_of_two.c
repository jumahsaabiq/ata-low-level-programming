#include <stdio.h>

/**
 * find_min - returns the smaller of two integers
 * @a: first integer
 * @b: second integer
 * Return: the minimum of a and b
 */
int find_min(int a, int b)
{
    if (a < b)
        return a;
    else
        return b;
}

/**
 * main - entry point
 * Description: reads two integers, calls find_min, and prints the result
 * Return: 0
 */
int main(void)
{
    int a, b, min;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    min = find_min(a, b);
    printf("Minimum number is: %d\n", min);

    return 0;
}
