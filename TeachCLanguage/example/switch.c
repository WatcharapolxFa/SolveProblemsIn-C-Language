// Program to create a simple calculator
#include <stdio.h>

int main()
{
    char operation;
    double n1, n2;

    printf("Enter an operator (+(1), -(2), *(3), /(4)): ");
    scanf("%c", &operation);
    printf("Enter two operands: ");
    scanf("%lf %lf", &n1, &n2);

    switch (operation)
    {
    case '+':
    case '1':
        printf("%.1lf + %.1lf = %.1lf", n1, n2, n1 + n2);
        break;

    case '-':
    case '2':
        printf("%.1lf - %.1lf = %.1lf", n1, n2, n1 - n2);
        break;

    case '*':
    case '3':
        printf("%.1lf * %.1lf = %.1lf", n1, n2, n1 * n2);
        break;

    case '/':
    case '4':
        printf("%.1lf / %.1lf = %.1lf", n1, n2, n1 / n2);
        break;

    // operator doesn't match any case constant +, -, *, /
    default:
        printf("Error! operator is not correct");
    }

    return 0;
}