#include <stdio.h>

/* Function prototype */
void demonstrate_local_scope(void);

/**
 * main - entry point
 * Description: demonstrates local scope of variables
 * Return: 0
 */
int main(void)
{
    int local_var = 10;

    demonstrate_local_scope();
    printf("Inside main: local_var = %d\n", local_var);

    return 0;
}

/**
 * demonstrate_local_scope - prints value of its own local variable
 * Return: void
 */
void demonstrate_local_scope(void)
{
    int local_var = 50;

    printf("Inside demonstrate_local_scope: local_var = %d\n", local_var);
}
