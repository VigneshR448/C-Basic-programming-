#include<stdio.h>
int main()
{
    int r,c,sum=0;
    int i,j;
    printf("Enter the row and column:");
    scanf("%d %d",&r,&c);
    int arr[r][c];
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("Enetr the matrics value:");
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        if(i==j){
        sum=sum+arr[i][j];
        }
    }
     printf("%d ",sum);
     return 0;
}
