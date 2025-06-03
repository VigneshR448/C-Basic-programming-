#include<stdio.h>
#include<string.h>
int main()
{
    char arr[]={"india"};
    char input;
    int i=0;
    printf("Enter the char:");
    scanf("%c",&input);
    for(i=0;i<=5;i++)
    {
        if(arr[i]==input)
        {
            printf("%d",i);
        }
    }
}
