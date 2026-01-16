#include <stdio.h>

int main(void)
{
    int arr[5] = {1, 2, 3, 4, 5};
    int *ptr = arr; // array name behaves like pointer to first element

    printf("Address of array[0]: %p\n", (void *)&arr[0]);
    printf("Address of array (array name): %p\n", (void *)arr);
    printf("Value of ptr (address of array[0]): %p\n", (void *)ptr);

    return 0;
}
