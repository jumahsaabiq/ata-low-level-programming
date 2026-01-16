#include <stdio.h>

/* Function to swap two integers via pointers */
void swap_integers(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main(void)
{
    int num1 = 10, num2 = 20;

    printf("Before swap: num1 = %d, num2 = %d\n", num1, num2);

    // Pass addresses to swap function
    swap_integers(&num1, &num2);

    printf("After swap: num1 = %d, num2 = %d\n", num1, num2);

    return 0;
}
