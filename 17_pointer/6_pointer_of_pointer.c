#include <stdio.h>

int main()
{
    int num = 24;

    int *p;

    p = &num;

    printf("%u=>%d\n",p,*p);

    int **p2;

    p2=&p;


    printf("%u=>%d\n",p2,**p2);

    **p2=100;

    printf("changed num %d",num);

    

    return 0;
}