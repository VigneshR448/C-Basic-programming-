#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n; //i/p->size =6
    int arr[n],i,max;
    
    for(i=0;i<n;i++)
    {
        cin>>arr[i]; //i/p->  1 5 2 40 5 7
    }
    max=arr[0]; //max= 1 //max=5 
    for(i=1;i<=n;i++) 
    {
        if(max<arr[i]) //1<5 T  //5<2 F
        {
            max=arr[i]; //max=5
        }
    }
    cout<<max;  //o/p-> 40
}
