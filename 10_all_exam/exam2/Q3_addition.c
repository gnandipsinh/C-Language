#include<stdio.h>

int main()
{
    int num, temp, first, last;

    printf("Enter any number: ");
    scanf("%d", &num);

    last = num % 10;  

    temp = num;        

    for( ; temp >= 10; )
    {
        temp = temp / 10;
    }

    first = temp;      

    printf("Sum of first and last digit: %d", first + last);

    return 0;
}