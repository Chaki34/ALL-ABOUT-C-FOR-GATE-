// Simple calculator


#include <stdio.h>

int main(void) {
    double a, b;
    char operator;

    printf("===== Simple C Calculator =====\n");

    printf("Enter first number: ");
    scanf("%lf", &a);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &b);

    switch (operator) {
        case '+':
            printf("Result = %.2lf\n", a + b);
            break;

        case '-':
            printf("Result = %.2lf\n", a - b);
            break;

        case '*':
            printf("Result = %.2lf\n", a * b);
            break;

        case '/':
            if (b != 0) {
                printf("Result = %.2lf\n", a / b);
            } else {
                printf("Error: Division by zero!\n");
            }
            break;

        default:
            printf("Invalid operator!\n");
    }

    return 0;
}
