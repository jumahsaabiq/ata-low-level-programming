#include <stdio.h>

/**
 * get_fixed_number - returns a fixed integer value
 * Return: 100
 */
int get_fixed_number(void)
{
    return 100;
}

/**
 * main - entry point
 * Description: calls get_fixed_number and prints the result
 * Return: 0
 */
int main(void)
{
    int num = get_fixed_number();
    printf("Fixed number is: %d\n", num);
    return 0;
}
