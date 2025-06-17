#include<stdio.h>
int main()
{
   int arr[100],i,n;
   scanf("%d",&n);   //declare the array size
   for(i=0;i<n;i++)
   {
       scanf("%d",&arr[i]); //giving input
   }
   for(i=0;i<n;i++)
   {
       printf("\n\n%d\n",arr[i]); // printing the ourtput
   }
   return 0;
}
