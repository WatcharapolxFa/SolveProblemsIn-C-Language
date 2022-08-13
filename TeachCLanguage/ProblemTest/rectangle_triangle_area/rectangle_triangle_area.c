#include <stdio.h>
int main()
{
    int check;
    printf("Select 1.(Rectangle) or 2.(Triangle) :");
    scanf("%d", &check);
    int width, length, base, hight, ans;
    switch (check)
    {
    case (1):

        printf("Enter width : ");
        scanf("%d", &width);
        printf("Enter length : ");
        scanf("%d", &length);
        ans = 0.5 * (width * length);
        printf("Rectangle Area = %d", ans);
        break;
    case (2):

        printf("Enter base : ");
        scanf("%d", &base);
        printf("Enter hight : ");
        scanf("%d", &hight);
        ans = (base * hight);
        printf("Triangle Area = %d", ans);
        break;
    default:
        printf("Error");
        break;
    }
    return 0;
}