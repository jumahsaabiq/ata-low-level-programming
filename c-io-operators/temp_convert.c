/**
 * main - the main function
 * description: Converts a temperature from Celsius to Fahrenheit
 * return: 0
*/
#include <stdio.h>

int main(void)
{
    float celsius, fahrenheit;

    printf("Enter temperature in Celsius: ");
    scanf("%f", &celsius);

    fahrenheit = (celsius * 9 / 5) + 32;

    printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

    return 0;
}
