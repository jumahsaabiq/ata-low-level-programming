#include <stdio.h>

/**
 * main - prints all command-line arguments except the program name
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int i;

    /* Start from 1 to skip the program name */
    for (i = 1; i < argc; i++)
    {
        printf("%s\n", argv[i]);
    }

    return 0;
}
