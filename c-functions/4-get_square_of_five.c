#include <stdio.h>
#include <math.h>

/**
 * get_square_of_five - returns the square of 5 using pow()
 * Return: 25
 */
int get_square_of_five(void)
{
    /* Use pow() to calculate 5 squared */
    double result = pow(5.0, 2.0);
    return (int)result;
}

/**
 * main - entry point
 * Description: calls get_square_of_five and prints the result
 * Return: 0
 */
int main(void)
{
    int square = get_square_of_five();
    printf("Square of 5 is: %d\n", square);
    return 0;
}
