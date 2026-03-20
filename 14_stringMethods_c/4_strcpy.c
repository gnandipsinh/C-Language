#include<stdio.h>

#include<string.h>

int main()
{
    char str1[20];
    char str2[]="Hello";

    strcpy(str1,str2);

    printf("copied string = %s",str1);
    

    return 0;
}

