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
    int a, b;

    printf("Enter the first integer: ");  /* notice the space after colon */
    scanf("%d", &a);

    printf("Enter the second integer: "); /* notice the space after colon */
    scanf("%d", &b);

    print_sum(a, b);

    return 0;
}
