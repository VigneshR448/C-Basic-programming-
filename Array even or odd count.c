#include<stdio.h>
int main()
{
    int arr[200],n,i,odd=0,even=0;
    scanf("%d",&n); // giving array size
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);  // giving input to the array
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)  // checking the input is odd or even 
        {
            even++; // if even it will add
        }
        else
        {
            odd++; // if odd it will add
        }
    }
        printf("Even: %d\n",even);
        printf("Odd: %d",odd);     // printing the result even and odd counts
        
}
