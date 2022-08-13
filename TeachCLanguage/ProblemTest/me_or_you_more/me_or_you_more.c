#include <stdio.h>
int main()
{
    int number1, number2, check;
    printf("Enter number 1 or 2 :");
    scanf("%d%d", &number1, &number2);

    if (number1 > number2)
    {
        check = number1;
    }
    else
    {
        check = number2;
    }
    printf("Maximum is : %d", check);
    return 0;
}