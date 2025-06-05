#include<stdio.h>
int main()
{
int a,z,sum=0;
printf("Enter the a & z values:");
scanf("%d %d",&a,&z);
while(a<=z)
{
sum=sum+a;
++a;
}
printf("Sum of range is:%d",sum);
}
