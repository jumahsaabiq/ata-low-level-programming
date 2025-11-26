#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char input[100];
    int number;

    /* --- String to Integer Conversion --- */
    printf("Enter a number as a string (e.g., \"456\"): ");
    if (fgets(input, sizeof(input), stdin) != NULL)
    {
        /* Remove newline if present */
        char *newline = input;
        while (*newline != '\0') {
            if (*newline == '\n') {
                *newline = '\0';
                break;
            }
            newline++;
        }

        number = atoi(input);
        printf("String \"%s\" converted to integer: %d\n\n", input, number);
    }

    /* --- Random Number Generation --- */
    srand(time(NULL));
    printf("Generating 3 random numbers:\n");
    for (int i = 1; i <= 3; i++)
    {
        printf("Random number %d: %d\n", i, rand());
    }

    return 0;
}
