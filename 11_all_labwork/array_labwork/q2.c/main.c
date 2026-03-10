#include<stdio.h>

int main()
{
    int a[5];
    int i, sum=0;
    float avg;

    printf("Enter 5 array elements:\n");

    for(i = 0; i < 5; i++)
    {
        printf("a[%d] = ", i);
        scanf("%d", &a[i]);
        sum=sum+a[i];
    }

    avg=sum/5.0;

    printf("\naverage of an Array: %f", avg);

    return 0;
}