#include <stdio.h>
#define PI 3.14159

int main() {
    int choice;
    double radius, length, width, base, height, area;

    printf("Menu:\n");
    printf("1. Calculate Area of Circle\n");
    printf("2. Calculate Area of Rectangle\n");
    printf("3. Calculate Area of Triangle\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            scanf("%lf", &radius);
            if (radius <= 0) {
                printf("Invalid input! Radius must be positive.\n");
                break;
            }
            area = PI * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter the length of the rectangle: ");
            scanf("%lf", &length);
            printf("Enter the width of the rectangle: ");
            scanf("%lf", &width);
            if (length <= 0 || width <= 0) {
                printf("Invalid input! Length and width must be positive.\n");
                break;
            }
            area = length * width;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter the base of the triangle: ");
            scanf("%lf", &base);
            printf("Enter the height of the triangle: ");
            scanf("%lf", &height);
            if (base <= 0 || height <= 0) {
                printf("Invalid input! Base and height must be positive.\n");
                break;
            }
            area = 0.5 * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;

        case 4:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice! Please enter a number between 1 and 4.\n");
    }

    return 0;
}
