#include<stdio.h>
int main()
{
    int num,rev=0,org,rem;
    printf("Enter the number:");
    scanf("%d",&num);
    org=num;
    while(num!=0)
    {
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }
    if(org==rev)
    {
        printf("It is plaindrom: %d : %d",org,rev);
    }
    else
    {
        printf("It is not palindrom");
    }
    
}
