#include<iostream>
#include<climits>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    
    int csum=0, mx=INT_MIN, st=0, end=0, m_st=0, m_end=0;
    
    for(int i=0;i<n;i++)
    {
        csum+=arr[i];
        end=i;                //to mark the end of current subarray
        
        if(csum>mx)           //saving the details of new subarray with greater sum
        {
            mx=csum;
            m_st=st;
            m_end=end;
        }
        
        else if(csum<=0)
        {
            st=i;                 //if csum <=0, that means this subarray will actually decrease our sum therefore, we need to skip this
            end=i;                  // marks the beginning of new subarray
            csum=0;                // as we are skipping the subarray therefore now csum should be 0
        }
    }
    
    cout<<" max sum:"<<mx<<" form: "<<m_st<<" - "<<m_end;
}
