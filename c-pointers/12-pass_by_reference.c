#include <stdio.h>

/* Function that increments the value pointed to by num_ptr */
void increment(int *num_ptr)
{
    (*num_ptr)++;
}

int main(void)
{
    int num = 5;

    printf("Value before function call: %d\n", num);
    increment(&num); // pass address of num
    printf("Value after function call: %d\n", num);

    return 0;
}
