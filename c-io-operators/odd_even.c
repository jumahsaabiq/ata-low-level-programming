/**
 * main - the main function
 * description: Accepts an integer and checks whether it is odd or even
 * return: 0
*/
#include <stdio.h>

int main(void)
{
    int num;

    printf("Enter an integer: ");
    scanf("%d", &num);

    if (num % 2 == 0)
        printf("%d is Even\n", num);
    else
        printf("%d is Odd\n", num);

    return 0;
}
