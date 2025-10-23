#include <stdio.h>

/**
 * main - counts the number of digits in an integer
 * description: The program takes an integer as input and
 * counts the number of digits using a do-while loop.
 * return: 0
*/

int main(void)
{
    int n, count = 0;

    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n == 0)
    {
        count = 1;
    }
    else
    {
        if (n < 0)
            n = -n;

        do
        {
            n /= 10;
            count++;
        } while (n != 0);
    }

    printf("Number of digits: %d\n", count);

    return 0;
}
