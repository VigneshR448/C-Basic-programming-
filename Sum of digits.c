#include<stdio.h>
int main()
{
  int n,digit,sum=0;
printf("Enter the n value:");
scanf("%d",&n);
while(n)
{
digit=n%10;
sum=sum+digit;
n=n/10;
}
printf("Sum of digit:%d",sum);
}
