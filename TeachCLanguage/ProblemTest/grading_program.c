#include <stdio.h>
#define area 3.14 * (r * r)
int main()
{
    // float r;
    // printf("radius : ");
    // scanf("%f", &r);
    // printf("%.2f", area);
    int grad = 0;
    printf("Enter you point :");
    scanf("%d", &grad);
    if (grad >= 80 && grad <= 100)
    {
        printf("Grad A !!!");
    }
    else if (grad >= 75 && grad <= 79)
    {
        printf("Grad B+");
    }
    else if (grad >= 70 && grad <= 74)
    {
        printf("Grad B");
    }
    else if (grad >= 65 && grad <= 69)
    {
        printf("Grad C+");
    }
    else if (grad >= 60 && grad <= 64)
    {
        printf("Grad C");
    }
    else if (grad >= 55 && grad <= 59)
    {
        printf("Grad D+");
    }
    else if (grad >= 50 && grad <= 54)
    {
        printf("Grad D");
    }
    else if (grad >= 0 && grad <= 49)
    {
        printf("Grad F");
    }
    else
    {
        printf("End");
    }

    return 0;
}