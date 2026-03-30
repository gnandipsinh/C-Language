#include <stdio.h>

int main()
{
    int *ptr;
    int a = 5;

    ptr = &a;

    printf("Address  is %u", ptr + 1);

    return 0;
}