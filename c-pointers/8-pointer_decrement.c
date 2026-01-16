#include <stdio.h>

int main(void)
{
    int arr[2] = {10, 20};
    int *ptr = &arr[1]; // pointer to second element

    printf("Array elements: [%d, %d]\n", arr[0], arr[1]);
    printf("Initial pointer address (pointing to 20): %p\n", (void *)ptr);
    printf("Value at initial pointer: %d\n", *ptr);

    ptr--; // decrement pointer

    printf("Address after decrement: %p\n", (void *)ptr);
    printf("Value at new pointer address: %d\n", *ptr);

    return 0;
}
