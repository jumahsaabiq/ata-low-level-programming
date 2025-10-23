#include <stdio.h>

/**
 * main - finds the largest of three integers
 * description: The program takes three integers as input from the user
 * and determines which one is the largest using if...else statements.
 * return: 0
*/

int main(void)
{
    int num1, num2, num3, largest;

    printf("Enter three integers: ");
    scanf("%d %d %d", &num1, &num2, &num3);

    if (num1 >= num2 && num1 >= num3)
    {
        largest = num1;
    }
    else if (num2 >= num1 && num2 >= num3)
    {
        largest = num2;
    }
    else
    {
        largest = num3;
    }

    printf("%d is the largest number.\n", largest);

    return 0;
}
