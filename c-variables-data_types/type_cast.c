// This program demonstrates type casting in C.

#include <stdio.h>

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    int a = 5;
    int b = 2;

    printf("Integer division: %d\n", a / b);
    printf("Float division (type cast): %.2f\n", (float)a / b);

    return 0;
}
