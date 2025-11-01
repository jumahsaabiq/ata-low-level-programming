#include <stdio.h>

/**
 * print_message_n_times - prints "Hello from function!" n times
 * @n: number of times to print the message
 * Return: void
 */
void print_message_n_times(int n)
{
    int i;

    for (i = 0; i < n; i++)
        printf("Hello from function!\n");
}

/**
 * main - entry point
 * Description: reads a number and calls print_message_n_times
 * Return: 0
 */
int main(void)
{
    int n;

    printf("Enter a number of times: ");
    scanf("%d", &n);

    print_message_n_times(n);

    return 0;
}
