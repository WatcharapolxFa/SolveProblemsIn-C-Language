#include <stdio.h>
int main()
{

    int age;
    printf("How old are you : ");
    scanf("%d", &age);
    if (age >= 60)
    {
        printf("Old ");
    }
    else if (age >= 50 && age <= 59)
    {
        printf("Middle man");
    }
    else
    {
        printf("Young");
    }
    return 0;
}