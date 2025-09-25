// This program demonstrates float and double variables in C.

#include <stdio.h>

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    float fnum = 12.34f;        // float with 2 decimal places
    double dnum = 123.456789;   // double with 6 decimal places

    printf("Float: %.2f\n", fnum);     // formatted to 2 decimal places
    printf("Double: %.6lf\n", dnum);   // formatted to 6 decimal places

    return 0;
}
