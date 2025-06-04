#include <stdio.h>
int main()
{
int a,b;
scanf("%d %d",&a,&b);
if(a<0)
{
    printf("a=%d Negative\n",a);
}
 else if(a>0)
{
    printf("a=%d Positive\n",a);
}
else
{
    printf("a=%d Equal Zero\n",a);
}

if(b<0)
{
    printf("b=%d Negative",b);
}
else if(b>0)
{
    printf("b=%d Positive",b);
}
else
{
    printf("b=%d Equal Zero",b);
}
    return 0;
}
