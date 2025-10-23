#include <stdio.h>

/**
 * main - determines if an integer is positive, negative, or zero
 * description: The program takes an integer input from the user and
 * prints whether it is positive, negative, or zero.
 * return: 0
*/

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number > 0)
    {
        printf("%d is a positive number.\n", number);
    }
    else if (number < 0)
    {
        printf("%d is a negative number.\n", number);
    }
    else
    {
        printf("%d is zero.\n", number);
    }

    return 0;
}
