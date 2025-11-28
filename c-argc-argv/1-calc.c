#include <stdio.h>
#include <stdlib.h>

/**
 * main - simple command-line calculator (addition and subtraction)
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
    int num1, num2, result;
    char op;

    /* Check for exactly 3 arguments */
    if (argc != 4)
    {
        printf("Usage: ./calc <number1> <operator> <number2>\n");
        return 0;
    }

    num1 = atoi(argv[1]);
    op = argv[2][0];
    num2 = atoi(argv[3]);

    /* Operator handling */
    if (op == '+')
    {
        result = num1 + num2;
    }
    else if (op == '-')
    {
        result = num1 - num2;
    }
    else
    {
        printf("Error: Invalid operator. Use '+' or '-'.\n");
        return 0;
    }

    printf("Result: %d\n", result);

    return 0;
}
