#include <stdio.h>

int counter = 5;  // Global variable

void printGlobal(void)
{
    printf("Global counter: %d\n", counter);
}

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    int counter = 10;  // Local variable

    printGlobal();
    printf("Local counter: %d\n", counter);

    return 0;
}
