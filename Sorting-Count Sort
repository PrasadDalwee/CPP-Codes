#include <iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)        //input
        cin>>arr[i];
        
    int count[2000]={0};
    
    for(auto i: arr)            //count 
       { 
           count[i]++;
       }
    
    for (int i=1;i<2000;i++)    //summing index
        count[i]+=count[i-1];
    
    
    int ans[n];
    for (auto i: arr)       //placing
    {
        ans[count[i]-1]=i;
        count[i]--;
    }
    
    for(auto i: ans)     //o/p
        cout<<i<<" ";
    
    
    return 0;
}
