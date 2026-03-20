#include<stdio.h>
#include<ctype.h>

int main()
{
    char str[] = "hello";

    for(int i = 0; str[i] != '\0'; i++)
    {
        str[i] = toupper(str[i]);
    }

    printf("Uppercase = %s", str);

    return 0;
}