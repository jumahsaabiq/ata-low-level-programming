#include <stdio.h>

/**
 * fibonacci - returns the nth Fibonacci number recursively
 * @n: the position in the Fibonacci sequence
 *
 * Return: the nth Fibonacci number
 */
int fibonacci(int n)
{
    if (n < 0)
        return -1;  /* handle negative inputs safely */
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
    int n;

    printf("Enter an integer: ");
    if (scanf("%d", &n) != 1)
        return 1;

    printf("Fibonacci(%d) is: %d\n", n, fibonacci(n));
    return 0;
}
