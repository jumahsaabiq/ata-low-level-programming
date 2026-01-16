#include <stdio.h>

int main(void)
{
    int norm_arr[5] = {5, 10, 15, 20, 25};
    int *ptr = norm_arr; // pointer to beginning of array

    for (int i = 0; i < 5; i++)
    {
        printf("Element %d (Value: %d, Address: %p)\n", i, *(ptr + i), (void *)(ptr + i));
    }

    return 0;
}
