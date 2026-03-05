// A
// B A
// C B A
// D C B A
// E D C B A


#include<stdio.h>

int main()
{
    int i, j;
    char ch;

    for(i = 0; i < 5; i++)
    {
        ch = 'A' + i;
        for(j = 0; j <= i; j++)
        {
            printf("%c ", ch - j);
        }
        printf("\n");
    }

    return 0;
}