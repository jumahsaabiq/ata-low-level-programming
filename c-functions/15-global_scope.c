#include <stdio.h>

/* Global variable */
int global_count = 0;

/* Function prototype */
void increment_global_count(void);

/**
 * main - entry point
 * Description: demonstrates use of a global variable
 * Return: 0
 */
int main(void)
{
    increment_global_count();
    printf("Global count after 1st increment: %d\n", global_count);

    increment_global_count();
    printf("Global count after 2nd increment: %d\n", global_count);

    increment_global_count();
    printf("Global count after 3rd increment: %d\n", global_count);

    return 0;
}

/**
 * increment_global_count - increments the global variable by 1
 * Return: void
 */
void increment_global_count(void)
{
    global_count++;
}
