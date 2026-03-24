// Take Nothing , Return Something

#include<stdio.h>

int sum()
{
    int a,b;

    printf("enter a  number");
    scanf("%d",&a);

    printf("enter a second number");
    scanf("%d",&b);

    return a+b;  
}

int main()
{
    int result;

    result = sum();

    printf("Sum = %d", result);

    return 0;
}