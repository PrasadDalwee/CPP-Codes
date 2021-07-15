#include<iostream>
#include<climits>
#include<algorithm>

using namespace std;

int kadane(int arr[], int n)            //to check max sum for an unwrapping array we use kadane's algo
{
    int sum=0;
    int mx=INT_MIN;
    
    for(int i=0;i<n;i++)
    {
        sum+=arr[i];
        if(sum>mx)                       // update max sum if higher sum is achieved
            mx=sum;
        if(sum<0)
            sum=0;                      // reset current sum to 0 if sum becomes negative
    }
    
    return mx;
}


int Circular( int arr[],int n)              //to check sum for a wrapping subarray
{
    int sum=0,mx,mn=INT_MIN;
    int rev_arr[n];
    
    for(int i=0;i<n;i++)
    {
        rev_arr[i]=-arr[i];                         // we are flipping the signs to get most negative sum possible subarray through kadane's algo
        sum+=arr[i];                               // total sum
    }
    
    int neg_sum=kadane(rev_arr,n);
    
    mx=sum+neg_sum;                               // we add the max positive sum to total so as to cancel out the negative part, giving us max sum possible in wrapping subarray
    
    //cout<<endl<<" Sum: "<<sum<<" mx: "<<mx<<endl;
    
    
    if (neg_sum ==-(sum))                       // if |sum|=neg_sum that means all negative no.s, which means single element unwrapping answer
    {
        return mn;                             // return INT_MIN because in main() it will be compared with kadane's algo which should be our answer
    }
    
    
    return mx;
    
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    cout<<max( kadane(arr,n), Circular(arr,n) );        // to check wether maximum sum can be achieved from wrapping or unwrapping subarray
    
    return 0;
}
