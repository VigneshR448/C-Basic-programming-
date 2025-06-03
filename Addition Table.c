#include<stdio.h>
int main()
{
    int num,i;
    printf("Which Multiplication Table you need:");
    scanf("%d",&num);
    for(i=0;i<=10;i++)
    {
        printf("%d * %d = %d\n",i,num,i*num);
    }
}
