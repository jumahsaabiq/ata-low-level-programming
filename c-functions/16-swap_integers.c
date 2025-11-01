#include <stdio.h>

/* Function prototype */
void swap_integers(int *a, int *b);

/**
 * main - entry point
 * Description: Swaps two integers using pointers
 * Return: 0
 */
int main(void)
{
    int num1, num2;

    printf("Enter first number: ");
    scanf("%d", &num1);

    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    swap_integers(&num1, &num2);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}

/**
 * swap_integers - swaps two integer values using pointers
 * @a: pointer to first integer
 * @b: pointer to second integer
 * Return: void
 */
void swap_integers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
