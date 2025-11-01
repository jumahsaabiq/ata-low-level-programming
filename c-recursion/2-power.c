#include <stdio.h>

/**
 * _pow_recursion - returns x raised to the power of y
 * @x: the base integer
 * @y: the exponent integer
 *
 * Return: result of x^y, or -1 if y is negative
 */
int _pow_recursion(int x, int y)
{
    if (y < 0)
        return -1;
    if (y == 0)
        return 1;
    return x * _pow_recursion(x, y - 1);
}

int main(void)
{
    int x, y;
    printf("Enter first integer: ");
    scanf("%d", &x);
    printf("Enter second integer: ");
    scanf("%d", &y);

    int result = _pow_recursion(x, y);
    if (result == -1)
        printf("%d raised to the power of %d is: -1 (Error)\n", x, y);
    else
        printf("%d raised to the power of %d is: %d\n", x, y, result);

    return 0;
}
