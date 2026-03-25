// Take Nothing , Return Nothing

#include <stdio.h>

void  process()
{

    int a, b, c;
    int sum, avg;

    printf("enter a frist number ");
    scanf("%d", &a);

    printf("enter a second number ");
    scanf("%d", &b);

    printf("enter a third number ");
    scanf("%d", &c);

    sum = a + b + c;
    avg = sum / 3;

    printf("sum is = %d\n",sum);

    printf("average is = %d",avg);

  
}

int main()
{

    process();

    return 0;
}

