#include <stdio.h>
int main()
{
    const int unit = 180;
    int durian, answer;
    printf("Please enter the number of durian you witch to purchase : ");
    scanf("%d", &durian);
    answer = durian * unit;
    printf("You want durian %d price per result %d \n", durian, unit);
    printf("Total  price to be paid : %d $ ", answer);
    return 0;
}