/**
 * main - the main function
 * description: Takes the radius of a circle from the user and prints its area
 * return: 0
*/
#include <stdio.h>

int main(void)
{
    float radius, area;
    const float PI = 3.14;

    printf("Input the radius of the circle: ");
    scanf("%f", &radius);

    area = PI * radius * radius;

    printf("The area of the circle is: %.4f\n", area);

    return 0;
}
