#include<stdio.h>
int main()
{
    int r=2,c=2;
    int i,j;
    int arr[r][c];
    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        {
            printf("Enetr the matrics value:");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<=r;i++)
    {
        for(j=0;j<=c;j++)
        
        {
            printf("%d%d ",i,j);
        }
        printf("\n");
    }
}
