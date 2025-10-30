#include <stdio.h>

/**
 * print_sum - prints the sum of two integers
 * @a: first integer
 * @b: second integer
 */
void print_sum(int a, int b)
{
    printf("Sum: %d\n", a + b);
}

/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
    int num1, num2;

    printf("Enter the first integer: ");
    scanf("%d", &num1);

    printf("Enter the second integer: ");
    scanf("%d", &num2);

    print_sum(num1, num2);

    return 0;
}
