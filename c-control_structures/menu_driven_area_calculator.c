#include <stdio.h>

int main() {
    int choice;
    float radius, length, width, base, height, area;

    printf("Menu:\n");
    printf("1. Calculate Area of Circle\n");
    printf("2. Calculate Area of Rectangle\n");
    printf("3. Calculate Area of Triangle\n");
    printf("4. Exit\n");
    printf("Enter your choice: ");

    if (scanf("%d", &choice) != 1) {
        return 1; // invalid input
    }

    switch (choice) {
        case 1:
            printf("Enter the radius of the circle: ");
            if (scanf("%f", &radius) != 1 || radius <= 0) {
                printf("Invalid input! Radius must be positive.\n");
                return 0;
            }
            area = 3.14159f * radius * radius;
            printf("Area of Circle = %.2f\n", area);
            break;

        case 2:
            printf("Enter the length of the rectangle: ");
            if (scanf("%f", &length) != 1 || length <= 0) {
                printf("Invalid input! Length must be positive.\n");
                return 0;
            }
            printf("Enter the width of the rectangle: ");
            if (scanf("%f", &width) != 1 || width <= 0) {
                printf("Invalid input! Width must be positive.\n");
                return 0;
            }
            area = length * width;
            printf("Area of Rectangle = %.2f\n", area);
            break;

        case 3:
            printf("Enter the base of the triangle: ");
            if (scanf("%f", &base) != 1 || base <= 0) {
                printf("Invalid input! Base must be positive.\n");
                return 0;
            }
            printf("Enter the height of the triangle: ");
            if (scanf("%f", &height) != 1 || height <= 0) {
                printf("Invalid input! Height must be positive.\n");
                return 0;
            }
            area = 0.5f * base * height;
            printf("Area of Triangle = %.2f\n", area);
            break;

        case 4:
            printf("Exiting program.\n");
            break;

        default:
            printf("Invalid choice. Please enter a number between 1 and 4.\n");
    }

    return 0;
}
