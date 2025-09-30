// This program demonstrates student records with type conversion.

#include <stdio.h>

/**
 * main - the main function
 * description: The entry point of our C program
 * return: 0
*/
int main(void)
{
    char name[] = "John";
    int age = 20;
    float gpa = 3.75;
    char grade = 'A';

    // Print first table (with float GPA)
    printf("Name\tAge\tGPA\tGrade\n");
    printf("%s\t%d\t%.2f\t%c\n", name, age, gpa, grade);

    // Print second table (GPA converted to int)
    printf("\nName\tAge\tGPA(as int)\tGrade\n");
    printf("%s\t%d\t%d\t\t%c\n", name, age, (int)gpa, grade);

    return 0;
}
