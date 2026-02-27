#include<stdio.h>

int main()
  {
    int i, j; // Declare two integer variables (i for rows, j for columns)

    // Outer loop - controls the number of rows
    for(i = 1; i <= 5; i++)   
    {
        // Inner loop - prints numbers from 1 to 5 in each row
        for(j = 1; j <= 5; j++)  
        {
            printf("%d", j);  // Print the value of j (1 2 3 4 5)
        }

        printf("\n");  // Move to the next line after printing one row
    }


    return 0;
}

// output 
// 12345
// 12345
// 12345
// 12345
// 12345