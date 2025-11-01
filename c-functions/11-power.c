#include <stdio.h>

/**
 * calculate_power - calculates base raised to the power of exponent
 * @base: the base number
 * @exponent: the exponent (non-negative)
 * Return: result of base^exponent
 */
int calculate_power(int base, int exponent)
{
    int result = 1;
    int i;

    for (i = 0; i < exponent; i++)
        result *= base;

    return result;
}

/**
 * main - entry point
 * Description: reads base and exponent, calls calculate_power, and prints result
 * Return: 0
 */
int main(void)
{
    int base, exponent, result;

    printf("Enter base: ");
    scanf("%d", &base);

    printf("Enter exponent: ");
    scanf("%d", &exponent);

    result = calculate_power(base, exponent);
    printf("%d to the power of %d is: %d\n", base, exponent, result);

    return 0;
}
