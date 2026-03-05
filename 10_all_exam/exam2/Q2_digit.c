#include<stdio.h>

int main()
{
    int num, count = 0, temp;

    printf("Enter any number: ");

    scanf("%d", &num);


    temp = num;   

    for( ; temp != 0; temp = temp / 10)
    {
        count++;
    }

    printf("Total number of digits: %d", count);
    

    return 0;
}