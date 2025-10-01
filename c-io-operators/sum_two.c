/**
 * main - the main function
 * description: Takes two integers from the user and prints their sum
 * return: 0
*/
#include <stdio.h>

int main(void)
{
    int num1, num2, sum;

    printf("First Number: ");
    scanf("%d", &num1);

    printf("Second Number: ");
    scanf("%d", &num2);

    sum = num1 + num2;

    printf("Result: %d\n", sum);

    return 0;
}
