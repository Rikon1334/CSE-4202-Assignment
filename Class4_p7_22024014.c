
#include <stdio.h>

int main()
{
    int row, col, i, j;
    int first[10][10], second[10][10], sum[10][10];

    printf("Enter size of matrix: ");
    scanf("%d %d", &row, &col);

    printf("Enter first matrix: ");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &first[i][j]);
        }
    }

    printf("Enter second matrix: ");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &second[i][j]);
        }
    }

    printf("Sum of two matrices is: \n");
    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            sum[i][j] = first[i][j] + second[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }

    return 0;
}
