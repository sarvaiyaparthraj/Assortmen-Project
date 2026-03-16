#include <stdio.h>

int main()
{
    int r,c;

    printf("Enter rows: ");
    scanf("%d",&r);

    printf("Enter columns: ");
    scanf("%d",&c);

    int a[r][c];

    printf("Enter array elements:\n");

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            printf("a[%d][%d] = ",i,j);
            scanf("%d",&a[i][j]);
        }
    }

    int row,col;
    int sum = 0;

    printf("Enter row number: ");
    scanf("%d",&row);

    printf("Elements of row %d: ",row);

    for(int j=0;j<c;j++)
    {
        printf("%d ",a[row][j]);
        sum = sum + a[row][j];
    }

    printf("\nThe sum of row: %d\n",sum);

    sum = 0;

    printf("\nEnter column number: ");
    scanf("%d",&col);

    printf("Elements of column %d: ",col);

    for(int i=0;i<r;i++)
    {
        printf("%d ",a[i][col]);
        sum = sum + a[i][col];
    }

    printf("\nThe sum of column: %d",sum);

    return 0;
}