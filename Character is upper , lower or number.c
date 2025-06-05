#include<stdio.h>
int main()
{
  char ch;
printf("Enter the Character:%d",ch);
scanf("%d",&ch);
if(ch>='a' && ch<='z')
{
printf("Lower");
}
else if(ch>='A' && ch<='z')
{
printf("Upper");
}
else if(ch>='1' && ch>='0')
  {
printf("Number");
  }
else
{
printf("Symbol");
}
}
