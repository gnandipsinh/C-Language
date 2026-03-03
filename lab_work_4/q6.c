// 5 4 3 2 1
//   5 4 3 2
//     5 4 3
//       5 4
//         5

#include <stdio.h>
int main()
{
    int i, j, k, n = 5;

    for (i = n; i >= 1; i--)

    {

        for (j = 1; j <= n - i; j++)

            printf("  ");


        for (k = n; k >= n - i + 1; k--)

            printf("%d ", k);


        printf("\n");
        
    }
    return 0;
}