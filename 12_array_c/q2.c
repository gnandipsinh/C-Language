#include<stdio.h>

int main()
{
    int a[100], i, n, sum=0;
    float avg;

    printf("Enter array size: ");
    scanf("%d",&n);

    printf("Enter array elements:\n");

    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum = sum + a[i];
    }

    avg = (float)sum/n;

    printf("Average of an Array: %.2f",avg);

    return 0;
}