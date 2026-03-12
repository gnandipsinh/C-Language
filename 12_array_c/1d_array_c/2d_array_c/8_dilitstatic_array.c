#include<stdio.h>

int main()
{
    int arr[10][10];
    int row, col, i, j, r, c;

    printf("Enter number of rows: ");
    scanf("%d",&row);

    printf("Enter number of columns: ");
    scanf("%d",&col);

    printf("Enter elements:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Enter row and column to delete: ");
    scanf("%d %d",&r,&c);

    arr[r][c] = 0;

    printf("Array after deletion:\n");

    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}