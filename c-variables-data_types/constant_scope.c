// This program demonstrates the use of const and what happens if you try to modify it.

#include <stdio.h>

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    const int value = 100;  // const = keyword, value cannot be changed

    // value = 200;  // ❌ Error: assignment of read-only variable 'value'

    printf("Constant value: %d\n", value);

    return 0;
}
