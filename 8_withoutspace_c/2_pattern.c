#include<stdio.h>   

int main()         
{
    int i, j;       
    int num = 5;    

    // Outer loop → controls rows (1 to 5)
    // row loop
    for(i = 1; i <= num; i++)  
    {
        // Inner loop → prints numbers from 1 to i 
        // column loop
        for(j = 1; j <= i; j++)  
        {
            printf("%d", j);   // Print value of j
        }

        printf("\n"); 
        // Move to next line after each row
    }

    return 0;  
}

// output 
// 1
// 12
// 123
// 1234
// 12345