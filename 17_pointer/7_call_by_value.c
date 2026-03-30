#include <stdio.h>

int callByValue(int num)
{

    num = 100;
}

int main()
{

    int numargument = 10;
    int result = callByValue(numargument);

    printf("num argument %d\n", numargument);

    return 0;
}