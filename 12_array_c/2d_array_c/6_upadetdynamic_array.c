#include<stdio.h>

int main()
{
    int arr[10][10];
    int row, col, i, j, r, c, value;

    printf("Enter number of rows: ");
    scanf("%d",&row);

    printf("Enter number of columns: ");
    scanf("%d",&col);

    // CREATE
    printf("Enter elements:\n");
    for(i=0;i<row;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }

    // UPDATE
    printf("Enter row and column to update: ");
    scanf("%d %d",&r,&c);

    printf("Enter new value: ");
    scanf("%d",&value);

    arr[r][c] = value;

    printf("Updated array:\n");

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