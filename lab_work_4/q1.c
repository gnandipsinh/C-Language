//         1
//       2 1
//     3 2 1
//   4 3 2 1
// 5 4 3 2 1

#include <stdio.h>
int main()
{
    int i, j, k, n = 5;

    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= n - i; j++)
            printf("  ");

        for (k = i; k >= 1; k--)
            printf("%d ", k);

        printf("\n");
    }
    return 0;
}
