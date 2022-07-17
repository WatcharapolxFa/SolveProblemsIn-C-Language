#include <stdio.h>
int main()
{
    /* code */

    int count = 10;
    for (int j = 0; j < count; j++)
    {
        printf("*\n");
        for (int i = 0; i < count;)
        {
            printf("* * * \n");
            i = i + 2;
        }
    }

    // int count = 5;
    // while (count <= 10)
    // {
    //     printf("Hello % d \n", count);
    //     count++;
    // }

    // int n = 10;
    // do
    // {
    //     printf("%d\n", n);
    //     n++;
    // } while (n <= 10);
    return 0;
}
