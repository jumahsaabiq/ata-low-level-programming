#include <stdio.h>

/**
 * main - demonstrates basic input/output using stdio.h
 *
 * Return: 0 on success
 */
int main(void)
{
    char name[100];
    int age;
    float height;

    /* Prompt for name */
    printf("Enter your name: ");
    scanf("%99s", name);

    /* Prompt for age */
    printf("Enter your age: ");
    scanf("%d", &age);

    /* Prompt for height */
    printf("Enter your height (in meters): ");
    scanf("%f", &height);

    /* Output formatted info */
    printf("Hello, %s! You are %d years old and %.2f meters tall.\n",
           name, age, height);

    return 0;
}
