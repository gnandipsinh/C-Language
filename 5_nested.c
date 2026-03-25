#include <stdio.h>

int mul(int a, int b)
{

    return a * b;
}

int cube(int y)
{

    return y * y * y;

}

int main()
{

    int a,b,m,c;

 

    printf("Enter frist  numbers: ");
    scanf("%d", &a);

    printf("Enter second  numbers: ");
    scanf("%d", &b);

    m = mul(a, b);
    printf("Multiplication = %d\n", m);

   
    c = cube(m);
    printf("Cube = %d\n", c);





 

    // printf("Answer = %d ",ans);

    return 0;


}
