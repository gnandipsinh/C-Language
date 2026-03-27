#include <stdio.h>

int main()
{
    int *p;
    int a[] = {1, 2, 3, 4, 5};

    p = a;

    printf("%u => %d", p, *p);

    return 0;
}