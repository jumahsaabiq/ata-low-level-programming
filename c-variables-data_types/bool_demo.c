// This program demonstrates the use of _Bool and <stdbool.h> in C.

#include <stdio.h>
#include <stdbool.h>

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    _Bool flag = 1;

    printf("The value of flag is %d\n", flag);

    return 0;
}
