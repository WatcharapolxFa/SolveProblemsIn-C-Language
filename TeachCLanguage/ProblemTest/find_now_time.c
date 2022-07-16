#include <stdio.h>
int main()
{
    int hour, min, sec;
    while (1)
    {
        printf("Enter current Hour = ");
        scanf("%d", &hour);
        if (hour > 24 || hour < 0)
        {
            printf("Error, enter within 0-24 range.");
            break;
        }

        printf("Enter current Min = ");
        scanf("%d", &min);
        if (min > 60 || min < 0)
        {
            printf("Error, enter within 0-60 range.");
            break;
        }

        printf("Enter current Sec = ");
        scanf("%d", &sec);
        if (sec > 60 || sec < 0)
        {
            printf("Error, enter within 0-60 range.");
            break;
        }

        printf("Current time is %d:%d:%d", hour, min, sec);
        break;
    }
    return 0;
}