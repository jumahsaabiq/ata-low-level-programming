// This program demonstrates declaring constants using #define and const.

#include <stdio.h>

#define PI_DEFINE 3.14  // Constant defined using #define

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    const float PI_CONST = 3.14;  // Constant defined using const

    printf("PI using #define: %.2f\n", PI_DEFINE);
    printf("PI using const: %.2f\n", PI_CONST);

    return 0;
}
