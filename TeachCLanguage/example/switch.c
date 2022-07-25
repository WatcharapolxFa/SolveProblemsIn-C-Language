// Program to create a simple calculator
#include <stdio.h>

int main()
{
    char operation;
    double number1, number2;

    printf("Enter an operator (+(1), -(2), *(3), /(4)): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%lf %lf", &number1, &number2);

    switch (operation)
    {
    case '+':
    case '1':
        printf("%.1lf + %.1lf = %.1lf", number1, number2, number1 + number2);
        break;

    case '-':
    case '2':
        printf("%.1lf - %.1lf = %.1lf", number1, number2, number1 - number2);
        break;

    case '*':
    case '3':
        printf("%.1lf * %.1lf = %.1lf", number1, number2, number1 * number2);
        break;

    case '/':
    case '4':
        printf("%.1lf / %.1lf = %.1lf", number1, number2, number1 / number2);
        break;

    // operator doesn't match any case constant +, -, *, /
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}