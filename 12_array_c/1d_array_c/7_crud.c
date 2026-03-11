#include<stdio.h>

int main()
{
    int a[100], n, i, pos, value;

   
    printf("Enter number of elements: ");
    scanf("%d",&n);

    printf("Enter elements:\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }

   
    printf("\nArray elements are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

 
    printf("\n\nEnter position to update: ");
    scanf("%d",&pos);

    printf("Enter new value: ");
    scanf("%d",&value);

    a[pos-1] = value;

    printf("Array after update:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }


    printf("\n\nEnter position to delete: ");
    scanf("%d",&pos);

    for(i=pos-1;i<n-1;i++)
    {
        a[i] = a[i+1];
    }
    n--;

    printf("Array after deletion:\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

    return 0;
}