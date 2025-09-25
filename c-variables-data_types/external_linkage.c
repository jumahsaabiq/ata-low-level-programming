// This program demonstrates external linkage with a global variable.

#include <stdio.h>

int number = 42;  // Global variable with external linkage
// By default, global variables have external linkage, 
// meaning they can be accessed from other files in the same program 
// (unless declared with the 'static' keyword).

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    printf("Number: %d\n", number);
    return 0;
}
