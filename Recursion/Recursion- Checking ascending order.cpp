#include <iostream>

using namespace std;

int asc(int arr[],int n)
{
    if(n==1)                        // terminates recursion
        return arr[0];
    
    int b=asc(arr,n-1);             //initiates recursion
       
    if(b<0 || arr[n-1]<b)           //if current or previous case found error
        return -1;
    
    if(arr[n-1]>b)
        return arr[n-1];
}

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    
    int ans=asc(arr,n);
    
    if(ans>0)
    {
        cout<<"ascending";
    }
    
    else cout<<"not ascending";
    return 0;
}
