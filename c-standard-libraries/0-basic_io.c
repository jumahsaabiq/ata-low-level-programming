#include <stdio.h>
#include <stdlib.h>

/**
 * main - demonstrates basic input/output using stdio.h
 *
 * Return: 0 on success
 */
int main(void)
{
    char name[100];
    char age_str[20];
    char height_str[20];
    int age;
    float height;

    /* Prompt for name */
    printf("Enter your name: ");
    fflush(stdout);
    fgets(name, sizeof(name), stdin);

    /* Remove newline */
    for (int i = 0; name[i]; i++)
    {
        if (name[i] == '\n')
        {
            name[i] = '\0';
            break;
        }
    }

    /* Prompt for age */
    printf("Enter your age: ");
    fflush(stdout);
    fgets(age_str, sizeof(age_str), stdin);
    age = atoi(age_str);

    /* Prompt for height */
    printf("Enter your height (in meters): ");
    fflush(stdout);
    fgets(height_str, sizeof(height_str), stdin);
    height = atof(height_str);

    /* Output formatted info */
    printf("Hello, %s! You are %d years old and %.2f meters tall.\n",
           name, age, height);

    return 0;
}
