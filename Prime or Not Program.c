#include<stdio.h>
int main()
{
    int n,c=0;
    printf("Enter the n value:");
    scanf("%d",&n);
    for(int i=1;i<n;i++)
    {
        if(n%i==0)
        c++;
        
    }
    printf("%d\n",n);
    if(c==1)
    printf("prime");
    else
    printf("Not prime");

}
