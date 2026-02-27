#include<stdio.h>

int main()
{
    int i, n;

    printf("Enter your number: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++)
    {
        if(i == n)
        {
            break;   
        }

        printf("%d\n", i);
    }

    printf("Loop stopped at i = %d\n", i);

    return 0;
}