#include <stdio.h>

int main()
{
    int num[5];

    printf("enter your fris number");
    scanf("%d", &num[0]);

    printf("enter your second number");
    scanf("%d", &num[1]);

    printf("enter your third number");
    scanf("%d", &num[2]);

    printf("enter your fourth number");
    scanf("%d", &num[3]);

    printf("enter your fifth number");
    scanf("%d", &num[4]);

    printf("%d\n", num[0]);
    printf("%d\n", num[1]);
    printf("%d\n", num[2]);
    printf("%d\n", num[3]);
    printf("%d\n", num[4]);

    return 0;
}