// This program demonstrates char variables and ASCII values in C.

#include <stdio.h>

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    char c = 'A';

    printf("Character: %c\n", c);
    printf("ASCII value: %d\n", c);
    printf("Next character: %c\n", c + 1);

    return 0;
}
