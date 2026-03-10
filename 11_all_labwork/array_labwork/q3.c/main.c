#include<stdio.h>

int main()
{
    int a[5],b[5],c[5];
    int i;
    
    printf("enter array a eleaments: \n");
    
    for(i=1;i<=5;i++)
    {
        
        printf("a[%d]=",i);
        
        scnaf("%d",&a[i]);
    }
    
      printf("enter array b eleaments: \n");
    
    for(i=1;i<=5;i++)
    {
        
        printf("b[%d]=",i);
        scnaf("%d",&b[i]);
    }
    
      printf("enter array a eleaments: \n");
    
    for(i=1;i<=5;i++)
    {
        
        printf("c[%d]=",i);
        scnaf("%d",c[i]);
    }
    
    
    
    return 0;
}