#include <stdio.h>
int main()
{
    int number;
    printf("Enter x :");
    scanf("%d", &number);
    if (number % 7 == 0)
    {
        printf("%d is divisible by 7", number);
    }
    else
    {
        printf("Not divisible by 7");
    }
    return 0;
}