#include <stdio.h>

/**
 * add - returns the sum of two integers
 * @a: first integer
 * @b: second integer
 * Return: sum of a and b
 */
int add(int a, int b)
{
    return (a + b);
}

/**
 * main - entry point
 * Description: takes two integers from user, calls add(), and prints result
 * Return: 0
 */
int main(void)
{
    int a, b, result;

    printf("Enter the first integer: ");
    scanf("%d", &a);

    printf("Enter the second integer: ");
    scanf("%d", &b);

    result = add(a, b);
    printf("Result of addition: %d\n", result);

    return 0;
}
