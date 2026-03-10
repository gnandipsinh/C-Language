#include<stdio.h>

int main()
{
    int a[5];
    int i, length;

    printf("Enter 5 array elements:\n");

    for(i = 0; i < 5; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
    }

    length = sizeof(a) / sizeof(a[0]);

    printf("\nLength of an Array: %d", length);

    return 0;
}