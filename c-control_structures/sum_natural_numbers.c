#include <stdio.h>

/**
 * main - calculates the sum of natural numbers up to n
 * description: The program takes a positive integer n as input
 * and uses a for loop to compute the sum of natural numbers from 1 to n.
 * return: 0
*/

int main(void)
{
    int n, i, sum = 0;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n <= 0)
    {
        printf("Please enter a positive integer.\n");
        return 1;
    }

    for (i = 1; i <= n; i++)
    {
        sum += i;
    }

    printf("Sum of natural numbers up to %d is: %d\n", n, sum);

    return 0;
}
