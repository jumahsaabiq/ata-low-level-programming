#include <stdio.h>

/* Function prototype */
void greet_user(char *name);

/**
 * main - entry point
 * Description: reads user's name and calls greet_user
 * Return: 0
 */
int main(void)
{
    char name[100];

    printf("Enter your name: ");
    scanf("%99s", name);

    greet_user(name);

    return 0;
}

/**
 * greet_user - prints a greeting message
 * @name: user's name
 * Return: void
 */
void greet_user(char *name)
{
    printf("Hello, %s! Welcome to the program.\n", name);
}
