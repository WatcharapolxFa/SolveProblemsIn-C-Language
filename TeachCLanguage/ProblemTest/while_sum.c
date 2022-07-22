#include <stdio.h>
int main()
{
    int number = 0, sum = 0;
    printf("Enter a  number : ");
    scanf("%d", &number);
    while (number != 0)
    {
        sum += number;
        printf("Enter a  number : ");
        scanf("%d", &number);
    }
    printf("Sum = %d ", sum);

    return 0;
}