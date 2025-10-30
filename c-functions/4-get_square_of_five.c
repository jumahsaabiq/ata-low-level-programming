#include <stdio.h>
#include <math.h>

/**
 * get_square_of_five - returns the square of 5 using pow()
 * Return: 25
 */
int get_square_of_five(void)
{
    return (int)pow(5, 2);
}

/**
 * main - entry point
 * Description: calls get_square_of_five and prints the result
 * Return: 0
 */
int main(void)
{
    int result = get_square_of_five();
    printf("Square of 5 is: %d\n", result);
    return 0;
}
