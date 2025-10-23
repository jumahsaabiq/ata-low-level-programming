#include <stdio.h>

/**
 * main - calculates the factorial of a non-negative integer
 * description: The program takes a non-negative integer as input
 * and uses a while loop to compute its factorial.
 * return: 0
*/

int main(void)
{
    int n, i = 1;
    unsigned long long factorial = 1;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Error! Factorial of a negative number doesn't exist.\n");
        return 1;
    }

    while (i <= n)
    {
        factorial *= i;
        i++;
    }

    printf("Factorial of %d is: %llu\n", n, factorial);

    return 0;
}
