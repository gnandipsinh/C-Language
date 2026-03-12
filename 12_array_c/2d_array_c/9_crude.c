#include <stdio.h>

int main()
{
    int arr[10][10];
    int row, col, i, j;
    int choice, r, c, value;

    printf("Enter number of rows: ");
    scanf("%d", &row);

    printf("Enter number of columns: ");
    scanf("%d", &col);

    printf("Enter elements:\n");
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    do
    {
        printf("\n--- MENU ---\n");
        printf("1. Read (Display)\n");
        printf("2. Update\n");
        printf("3. Delete\n");
        printf("4. Exit\n");

        printf("Enter choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Array elements are:\n");
            for (i = 0; i < row; i++)
            {
                for (j = 0; j < col; j++)
                {
                    printf("%d ", arr[i][j]);
                }
                printf("\n");
            }
            break;

        case 2:
            printf("Enter row and column to update: ");
            scanf("%d %d", &r, &c);

            if (r < 1 || r > row || c < 1 || c > col)
            {
                printf("Invalid position\n");
            }
            else
            {
                printf("Enter new value: ");
                scanf("%d", &value);

                arr[r-1][c-1] = value;
                printf("Value updated successfully.\n");
            }
            break;

        case 3:
            printf("Enter row and column to delete: ");
            scanf("%d %d", &r, &c);

            if (r < 1 || r > row || c < 1 || c > col)
            {
                printf("Invalid position\n");
            }
            else
            {
                arr[r-1][c-1] = 0;
                printf("Element deleted.\n");
            }
            break;

        case 4:
            printf("Program ended.\n");
            break;

        default:
            printf("Invalid choice.\n");
        }

    } while (choice != 4);

    return 0;
}