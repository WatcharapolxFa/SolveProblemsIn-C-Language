#include <stdio.h>
int main()
{
    float sum[7];
    for (int i = 1; i < 6; i++)
    {
        printf("Enter the number you want to find the mean digit %d : ", i);
        scanf("%f", &sum[i]);
        sum[6] += sum[i];
    }
    sum[6] = sum[6] / 5;
    printf("Mean : %.2f", sum[6]);
    return 0;
}