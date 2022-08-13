#include <stdio.h>
#define area 3.14 * (radius * radius)
#define volume area *hight
int main()
{
    float radius, hight;
    printf("=========================================\n");
    printf("Welcome, this is a program for calculating the find the volume of a cylinder.\n");
    printf("Please enter the radius of the sphere : ");
    scanf("%f", &radius);
    printf("Please enter the height of the cylindrical : ");
    scanf("%f", &hight);
    printf("%.2f", volume);
    printf("\n=========================================");
    return 0;
}