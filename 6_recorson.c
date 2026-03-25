#include <stdio.h>

int fact(int n)

{

    if (n == 0 || n == 1)
        return 1;

    else
        return n * fact(n - 1);
}

int main()
{

    int num, result;

    printf("enter a number:");

    scanf("%d",&num);

    result=fact(num);

    printf("factorial = %d ",result);


    return 0;
}