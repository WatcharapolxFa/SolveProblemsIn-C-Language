#include <stdio.h>

int main()
{
    float gram;
    int oz = 1;
    for (int i = 0; i < 9999; i++)
    {
        if (oz == 0)
        {
            break; /* code */
        }
        // oz = 0;
        printf("Oz you want to change: ");
        scanf("%d", &oz);
        gram = oz * 28.3495;
        printf("%d oz = %f gram\n", oz, gram);
        printf("===================\n");
    }

    return 0;
}