#include<iostream>
#include<deque>

using namespace std;

deque <int> SlidingWindow(int n,int arr[], int x)   //use int *arr for pass by ref
{
    deque<int> dq, ans;

    int sum=0;
    int max_sum=-999999;

    for(int i=0;i<n;i++)
    {    
        dq.push_back(arr[i]);
        sum+=arr[i];

        if(i==x-1)
        {
            if(sum>max_sum)
            {
                ans=dq;
                max_sum=sum;
            }
        }
        
        if(i>=x)
        {
            sum-=dq.front();
            dq.pop_front();
            if(sum>max_sum)
            {
                ans=dq;
                max_sum=sum;
            }
        }
    }
    cout<<"Maximum sum ="<<max_sum<<endl;
    return ans;
    
}

int main()
{
    int n; 
    cout<<"\n\n\nEnter size of array: "; 
    cin>>n;

    cout<<"Enter elements of array: "; 
    int arr[n];
    for(int i=0;i<n;i++)    
        cin>>arr[i];

    int x; cout<<"Enter size of window: "; cin>>x;
    if(x>n)
    {
        cout<<"Window cannot be bigger than array\n\n\n";
        return 0;
    }

    deque<int> dq= SlidingWindow(n,arr,x);

    cout<<"Maximum sum window=> ";
    while(!dq.empty())
    {
        cout<<dq.front()<<" ";
        dq.pop_front();
    }

}