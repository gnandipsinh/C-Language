#include<stdio.h>

int main()
{
    //static 

    char a[5]={'a','b','c','d'};


    printf("%s\n",a);

    //dynamic

    char b[5];

    printf("enter a eliament \n");
    scanf("%s",&b);

    printf("%s\n",b);

    return 0;
}