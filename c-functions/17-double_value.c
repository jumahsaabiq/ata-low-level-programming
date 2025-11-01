#include <stdio.h>

/* Function prototype */
void double_value(int *num);

/**
 * main - entry point
 * Description: Doubles an integer value using a pointer
 * Return: 0
 */
int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    printf("Original value: %d\n", number);

    double_value(&number);

    printf("Doubled value: %d\n", number);

    return 0;
}

/**
 * double_value - doubles the integer value pointed to by num
 * @num: pointer to an integer
 * Return: void
 */
void double_value(int *num)
{
    *num = *num * 2;
}
