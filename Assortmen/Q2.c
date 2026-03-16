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

    int max = a[0][0];

    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            if(a[i][j] > max)
            {
                max = a[i][j];
            }
        }
    }

    printf("The largest element is: %d",max);

    return 0;
}