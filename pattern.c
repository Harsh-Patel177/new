#include <stdio.h>
int main()
{
    int row=3,i,j,k;
    printf("enter the row: \n");
    scanf("%d",&row);

    for (i=0;i<row;i++)
    {
        for(j=i;j<=row;j++)
        {
            printf(" ");
        }
        for(k=i;k>=0;k--)
        {
            printf("* ");
        }
        printf("\n");
    }
    return 0;
}