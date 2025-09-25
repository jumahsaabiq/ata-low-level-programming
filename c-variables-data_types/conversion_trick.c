// This program demonstrates converting a double to an int in C.

#include <stdio.h>

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    double d = 9.99;
    int i = (int)d;  // Explicit type casting from double to int

    printf("Double value: %.2lf\n", d);
    printf("Converted int value: %d\n", i);

    return 0;
}
