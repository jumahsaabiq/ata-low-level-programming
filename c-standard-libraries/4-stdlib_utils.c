#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
    char input[50];
    int number;
    int i;

    /* String to integer conversion */
    printf("Enter a number as a string (e.g., \"456\"): ");
    scanf("%49s", input);

    number = atoi(input);
    printf("String \"%s\" converted to integer: %d\n\n", input, number);

    /* Random number generation */
    srand(time(NULL));
    printf("Generating 3 random numbers:\n");
    for (i = 1; i <= 3; i++)
    {
        printf("Random number %d: %d\n", i, rand());
    }

    return 0;
}
