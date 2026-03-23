#include <stdio.h>

int main()
{
    char str1[] = "Hello";
    char str2[] = "Hello";
    int i, result = 0;

    for (i = 0; str1[i] != '\0' || str2[i] != '\0'; i++)
    {
        if (str1[i] != str2[i])
        {
            result = str1[i] - str2[i];
            break;
        }
    }

    printf("Result = %d", result);

    return 0;
}