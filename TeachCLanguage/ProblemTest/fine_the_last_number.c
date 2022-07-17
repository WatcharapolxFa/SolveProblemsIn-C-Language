#include <stdio.h>
int main()
{
    int number, check;
    printf("Enter an integer N = ");
    scanf("%d", &number);
    check = number % 10;

    switch (check)
    {
    case (0):
        printf("ZERO");
        break;
    case (1):
        printf("ONE");
        break;
    case (2):
        printf("TWO");
        break;
    case (3):
        printf("Three");
        break;
    case (4):
        printf("FOUR");
        break;
    case (5):
        printf("FIVE");
        break;
    case (6):
        printf("SIX");
        break;
    case (7):
        printf("SEVEN");
        break;
    case (8):
        printf("EIGHT");
        break;
    case (9):
        printf("NINE");
        break;

    default:
        break;
    }
    return 0;
}