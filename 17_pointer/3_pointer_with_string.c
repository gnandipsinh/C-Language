#include <stdio.h>

int main()

{

    int *ptr, i;

    int a[] = {10,20,30,40,50};

    ptr = a;

    for (i = 0; i <= 4; i++)
    {
        printf("\n% u = > % d\n", ptr + i, *(ptr + i));
    }

    return 0;
}