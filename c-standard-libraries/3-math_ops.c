#include <stdio.h>
#include <math.h>

int main(void)
{
    double num, base, exponent, result;

    /* --- Square Root --- */
    printf("Enter a positive number to find its square root: ");
    while (scanf("%lf", &num) != 1 || num < 0)
    {
        printf("Invalid input. Enter a positive number: ");
        while (getchar() != '\n'); /* clear input buffer */
    }
    result = sqrt(num);
    printf("Square root of %.2lf is %.2lf\n\n", num, result);

    /* --- Power --- */
    printf("Enter a base number: ");
    while (scanf("%lf", &base) != 1)
    {
        printf("Invalid input. Enter a valid base number: ");
        while (getchar() != '\n');
    }

    printf("Enter an exponent: ");
    while (scanf("%lf", &exponent) != 1)
    {
        printf("Invalid input. Enter a valid exponent: ");
        while (getchar() != '\n');
    }

    result = pow(base, exponent);
    printf("%.2lf raised to the power of %.2lf is %.2lf\n", base, exponent, result);

    return 0;
}
