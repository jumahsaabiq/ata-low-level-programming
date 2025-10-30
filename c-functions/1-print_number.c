#include <stdio.h>

/**
 * print_number - prints an integer value
 * @num: the integer to print
 */
void print_number(int num)
{
    printf("The number is: %d\n", num);
}

/**
 * main - entry point
 * Return: 0 on success
 */
int main(void)
{
    int number;

    printf("Enter a number: ");
    scanf("%d", &number);

    print_number(number);

    return 0;
}
