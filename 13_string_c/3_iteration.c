#include <stdio.h>

int main()
{
    // static
    char a[5] = {'g', 'o', 'o', 'd'};

    printf("%c\n", a[0]);
    printf("%c\n", a[1]);
    printf("%c\n", a[2]);
    printf("%c\n", a[3]);
    printf("%c\n", a[4]);

    // dynamic

   

    for (int i = 0; i <= 4; i++)
    {
        printf("%C", a[i]);
    } 

    return 0;
}