#include <stdio.h>
int main()
{
    int grad[3],homeWork[3],min[3],fin[3];
    for (int i =0 ; i<3;i++){
        printf("std[%d] Home work(40):=",i);
        scanf("%d", &homeWork[i]);
        printf("std[%d] Min(30):=",i);
        scanf("%d", &min[i]);
        printf("std[%d] Fin(30):= ",i);
        scanf("%d", &fin[i]);
    }
    
    // if (grad >= 80 && grad <= 100)
    // {
    //     printf("Grad A !!!");
    // }
    // else if (grad >= 75 && grad <= 79)
    // {
    //     printf("Grad B+");
    // }
    // else if (grad >= 70 && grad <= 74)
    // {
    //     printf("Grad B");
    // }
    return 0;
}