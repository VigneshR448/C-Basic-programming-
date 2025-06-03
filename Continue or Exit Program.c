#include <stdio.h>

int main()
{
    int a,b,c,d=0;
    do
    {
    printf("enter the a, b value :\n");
    scanf("%d %d",&a,&b);
    
        printf("%d\n",c=a+b);
        printf("1 continue or 0 exit\n");
        scanf("%d",&d);
}while(d==1);

    return 0;
}
