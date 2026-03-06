#include<stdio.h>

int main()
{
    int a[100], i, n;

    printf("Enter array size: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("Length of an Array: %d",n);

    return 0;
}