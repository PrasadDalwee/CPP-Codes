// Two pointers approach -> O(n) complexity

#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)                       //input array
    {
        cin>>arr[i];
    }
    
    int st=0, end=0;                               // initializing two pointers to mark start and end of subarray
    int sum, Curr_Sum=arr[0];            
    
    cin>>sum;                                     //input sum
    
    while(end<n)
    {
        if(sum==Curr_Sum)                           //  subarray found
        {
            cout<<endl<<st<<" "<<end;
            return 0;
        }
        
        else if(Curr_Sum<sum || st==end)              // making sure end always moves when st==end, and moving end forward when current sum is less        
        {
            end++;
            Curr_Sum+=arr[end];
        }
        
        else if( Curr_Sum>sum && st<end)            //making sure st doesn't cross end, and moving st forward when current sum is more 
        {
            Curr_Sum-=arr[st];
            st++;
            
        }
    }
    cout<<endl<<"not found";
    return 0;
}
