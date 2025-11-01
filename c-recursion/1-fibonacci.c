#include <stdio.h>

/**
 * fibonacci - calculates the nth Fibonacci number recursively
 * @n: the position in the Fibonacci sequence
 *
 * Return: the nth Fibonacci number
 */
int fibonacci(int n)
{
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}

/**
 * main - the main function
 * description: reads an integer and prints its Fibonacci number
 * Return: 0
 */
int main(void)
{
    int n;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Fibonacci(%d) is: %d\n", n, fibonacci(n));

    return 0;
}
