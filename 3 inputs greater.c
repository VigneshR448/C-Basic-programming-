#include <stdio.h>
int main() 
{
    int a, b, c;
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);
    if(a > b && a > c)
{
        printf("Greatest number: %d\n", a);
    }
    else if(b > c) {
        printf("Greatest number: %d\n", b);
    }
    else {
        printf("Greatest number: %d\n", c);
    }
return 0;
}
