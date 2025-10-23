#include <stdio.h>

/**
 * main - prints the multiplication table of a given integer
 * description: The program takes an integer input and prints
 * its multiplication table up to 10 using a for loop.
 * return: 0
*/

int main(void)
{
    int n, i;

    printf("Enter an integer: ");
    scanf("%d", &n);

    printf("Multiplication table of %d:\n", n);

    for (i = 1; i <= 10; i++)
    {
        printf("%d x %d = %d\n", n, i, n * i);
    }

    return 0;
}
