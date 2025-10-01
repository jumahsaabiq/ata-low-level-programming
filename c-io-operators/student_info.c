/**
 * main - the main function
 * description: Asks the user to enter their name, age, and grade,
 *              then displays the details in one sentence.
 * return: 0
*/
#include <stdio.h>

int main(void)
{
    char name[100];
    int age;
    float grade;

    printf("Enter your name: ");
    scanf("%99s", name);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("Enter your grade: ");
    scanf("%f", &grade);

    printf("Hello %s! Your grade is %.2f and you are %d years old.\n", name, grade, age);

    return 0;
}
