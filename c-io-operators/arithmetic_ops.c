/**
 * main - the main function
 * description: Accepts two integers and displays their sum, difference,
 *              product, quotient, and remainder
 * return: 0
*/
#include <stdio.h>

int main(void)
{
    int num1, num2;

    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);

    printf("Sum = %d\n", num1 + num2);
    printf("Difference = %d\n", num1 - num2);
    printf("Product = %d\n", num1 * num2);

    if (num2 != 0)
    {
        printf("Quotient = %d\n", num1 / num2);
        printf("Remainder = %d\n", num1 % num2);
    }
    else
    {
        printf("Quotient = Undefined (division by zero)\n");
        printf("Remainder = Undefined (division by zero)\n");
    }

    return 0;
}
