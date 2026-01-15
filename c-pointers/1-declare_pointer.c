#include <stdio.h>

int main(void)
{
    int num = 100;       // integer variable
    int *ptr = &num;     // pointer to integer, storing address of num

    printf("Value of num: %d\n", num);
    printf("Address of num: %p\n", (void *)&num);
    printf("Value of ptr (address of num): %p\n", (void *)ptr);

    return 0;
}
