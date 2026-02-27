#include<stdio.h>

int main()
{
    int i = 1, n;

    printf("Enter your number: ");
    scanf("%d", &n);


start:
    if(i <= n)
    {
        printf("%d\n", i);
        i++;
        goto start;
    }

    return 0;
}   