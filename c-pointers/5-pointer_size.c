#include <stdio.h>

int main(void)
{
    int *ptr_int;
    char *ptr_char;
    float *ptr_float;
    void *ptr_void;

    printf("Size of int* : %zu bytes\n", sizeof(ptr_int));
    printf("Size of char*: %zu bytes\n", sizeof(ptr_char));
    printf("Size of float*: %zu bytes\n", sizeof(ptr_float));
    printf("Size of void*: %zu bytes\n", sizeof(ptr_void));

    return 0;
}
