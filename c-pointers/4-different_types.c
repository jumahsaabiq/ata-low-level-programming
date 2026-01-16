#include <stdio.h>

int main(void)
{
    char c = 'A';
    float f = 3.14;
    double d = 123.456;

    // Pointers for each variable
    char *ptr_c = &c;
    float *ptr_f = &f;
    double *ptr_d = &d;

    // Print values and addresses
    printf("Character: %c, Address: %p, Value via pointer: %c\n", c, (void *)&c, *ptr_c);
    printf("Float: %f, Address: %p, Value via pointer: %f\n", f, (void *)&f, *ptr_f);
    printf("Double: %lf, Address: %p, Value via pointer: %lf\n", d, (void *)&d, *ptr_d);

    return 0;
}
