#include<stdio.h>
int main()
{
int n,digit,sum=0;
scanf("%d",&n);
while(n>0)
{
digit=n%10;
sum=sum+digit;
n=n/10;
}
printf("%d",sum);
}
