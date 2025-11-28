#include <stdio.h>
#include <stdlib.h>

/**
 * main - simple command-line calculator
 * description: performs addition or subtraction on two integers
 * return: 0 on success, 1 on error
*/
int main(int argc, char *argv[])
{
    int num1, num2, result;
    char op;

    if (argc != 4)
    {
        printf("Usage: ./calc <number1> <operator> <number2>\n");
        return 1;  /* error exit */
    }

    num1 = atoi(argv[1]);
    op = argv[2][0];
    num2 = atoi(argv[3]);

    if (op == '+')
    {
        result = num1 + num2;
        printf("Result: %d\n", result);
    }
    else if (op == '-')
    {
        result = num1 - num2;
        printf("Result: %d\n", result);
    }
    else
    {
        printf("Error: Invalid operator. Use '+' or '-'.\n");
        return 1; /* error exit */
    }

    return 0;
}
