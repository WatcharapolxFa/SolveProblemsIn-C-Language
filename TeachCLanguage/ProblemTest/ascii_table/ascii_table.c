#include <stdio.h>
void asciiTable()
{
    for (int i = 0; i < 256; i++)
    {
        printf("%d : %c \n", i, i);
    }
}
int main()
{
    asciiTable();
    return 0;
}
