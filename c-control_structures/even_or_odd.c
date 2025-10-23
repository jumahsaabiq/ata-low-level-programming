#include <stdio.h>

/**
 * main - checks whether a number is even or odd
 * description: The program takes an integer input from the user and
 * determines whether it is even or odd using the modulus operator (%).
 * return: 0
*/

int main(void)
{
    int number;

    printf("Enter an integer: ");
    scanf("%d", &number);

    if (number % 2 == 0)
    {
        printf("%d is an even number.\n", number);
    }
    else
    {
        printf("%d is an odd number.\n", number);
    }

    return 0;
}
