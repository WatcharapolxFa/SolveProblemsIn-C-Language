#include <stdio.h>

int gcd(int a, int b)
{

    int min = a < b ? a : b;
    for (int i = min; i >= 1; i--)
    {

        if (a % i == 0 && b % i == 0)
        {

            return i;
        }
    }
}

int gcdEuclid(int a, int b)
{
    int t;

    while (b != 0)
    {
        t = b;
        b = a % b;
        a = t;
    }
    return a;
}

int main()
{
    int a;
    int b;
    printf("Enter number :");
    scanf("%d", &a);
    printf("Enter number :");
    scanf("%d", &b);
    printf("gcd(%d, %d) = %d\n", a, b, gcdEuclid(a, b));
    return 0;
}