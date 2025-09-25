// This program demonstrates the use of a static variable in C.

#include <stdio.h>

/**
 * incrementCounter - function that uses a static variable
 * description: Keeps its value across multiple function calls
 * return: the updated counter value
*/
int incrementCounter(void)
{
    static int counter = 0;  // Static variable initialized only once
    counter++;
    return counter;
}

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    printf("Call 1: %d\n", incrementCounter());
    printf("Call 2: %d\n", incrementCounter());
    printf("Call 3: %d\n", incrementCounter());

    return 0;
}
