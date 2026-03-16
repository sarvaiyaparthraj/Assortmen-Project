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

    printf("The transpose matrix is:\n");

    for(int i=0;i<c;i++)
    {
        for(int j=0;j<r;j++)
        {
            printf("%d ",a[j][i]);
        }
        printf("\n");
    }

    return 0;
} 