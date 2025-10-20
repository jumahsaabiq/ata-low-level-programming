#include <stdio.h>

/**
 * main - determines if an integer is positive, negative, or zero
 * description: The program takes an integer input and prints whether
 * it is positive, negative, or zero. Handles invalid input gracefully.
 * return: 0
*/

int main(void)
{
    int number;
    int result;

    printf("Enter an integer: ");
    result = scanf("%d", &number);

    if (result != 1)
    {
        printf("Invalid input. Please enter a valid integer.\n");
        return 1;
    }

    if (number > 0)
        printf("%d is a positive number.\n", number);
    else if (number < 0)
        printf("%d is a negative number.\n", number);
    else
        printf("%d is zero.\n", number);

    return 0;
}
