#include <stdio.h>
#include <math.h>

int main(void)
{
    double num, base, exponent, result;

    /* Square Root */
    printf("Enter a positive number to find its square root: ");
    if (scanf("%lf", &num) != 1 || num < 0)
    {
        printf("Invalid input.\n");
        return 1;
    }

    result = sqrt(num);
    printf("Square root of %.2f is %.2f\n\n", num, result);

    /* Power */
    printf("Enter a base number: ");
    if (scanf("%lf", &base) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Enter an exponent: ");
    if (scanf("%lf", &exponent) != 1)
    {
        printf("Invalid input.\n");
        return 1;
    }

    result = pow(base, exponent);
    printf("%.2f raised to the power of %.2f is %.2f\n", base, exponent, result);

    return 0;
}
