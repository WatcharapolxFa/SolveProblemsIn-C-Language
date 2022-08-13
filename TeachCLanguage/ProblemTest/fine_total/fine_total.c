#include <stdio.h>
int main()
{
    int final, mid, hw, sum;
    while (1)
    {
        printf("Enter final exam scores = ");
        scanf("%d", &final);
        if (final > 50 || final < 0)
        {
            printf("Error, enter with in 0-50 range.");
            break;
        }

        printf("Enter midterm exam scores = ");
        scanf("%d", &mid);
        if (mid > 30 || mid < 0)
        {
            printf("Error, enter with in 0-30 range.");
            break;
        }
        printf("Enter homework scores= ");
        scanf("%d", &hw);
        if (hw > 20 || hw < 0)
        {
            printf("Error, enter with in 0-20 range.");
            break;
        }
        sum = final + mid + hw;
        printf("Total =  %d", sum);
        break;
    }

    return 0;
}