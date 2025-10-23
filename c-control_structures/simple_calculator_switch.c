#include <stdio.h>

int main() {
    double num1, num2;
    char operator;

    printf("Enter two numbers: ");
    scanf("%lf %lf", &num1, &num2);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);  // Notice the space before %c to ignore leftover newline

    switch (operator) {
        case '+':
            printf("%.1f + %.1f = %.1f\n", num1, num2, num1 + num2);
            break;
        case '-':
            printf("%.1f - %.1f = %.1f\n", num1, num2, num1 - num2);
            break;
        case '*':
            printf("%.1f * %.1f = %.1f\n", num1, num2, num1 * num2);
            break;
        case '/':
            if (num2 != 0)
                printf("%.1f / %.1f = %.1f\n", num1, num2, num1 / num2);
            else
                printf("Error: Division by zero is not allowed.\n");
            break;
        default:
            printf("Invalid operator! Please use +, -, *, or /.\n");
    }

    return 0;
}
