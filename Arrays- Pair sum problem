#include <iostream>

using namespace std;

int main()
{
    int n;           //array size
    cin>>n;
    
    int arr[n];       //array
    for(int i=0;i<n; i++)
        cin>>arr[i];
        
    int x; cin>>x;           //i/p: pair sum to check if exists
    
    int st=0,end=n-1, ans=-1;
    
    while(st<end)                       // two point approach
    {
        int sum=arr[st]+arr[end];
        
        if(x==sum)
        {
            ans=1;
            break;
        }
        
        else if(x<sum)
            st++;
        else if(x>sum)
            end--;
    }
    
    if(ans<0)
        cout<<"False";
        
    else
        cout<<"\n True \n X1:"<<arr[st]<<" X2:"<<arr[end];
        
    return 0;
}
