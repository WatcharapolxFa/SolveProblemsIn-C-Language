#include <stdio.h>

int main()
{
    const float pi = 3.14;
    float inputNumber, sum;
    printf("Please enter a value of radians. :");
    scanf("%f", &inputNumber);
    sum = pi * (inputNumber * inputNumber);
    printf("The answer to the area of the circle %.2f", sum);
    return 0;
}