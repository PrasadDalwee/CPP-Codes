#include<iostream>
using namespace std;

int First(int a[], int n, int i)
{
    if(a[i]==n)
    {
        return i;
    }
    
    return(First(a,n,i+1));
}

int Last(int a[], int n, int i)
{
    if(a[i]==n)
    {
        return i;
    }
    
    return(First(a,n,i-1));
}

int main()
{
    int n; //array size
    cin>>n;
    int arr[n];
    
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    int x;    
    cin>>x; //to find : note this no. should definitely exist in array as we haven't considered not found case
    
    cout<<"First occurence: "<<First(arr,x,0);
    
    cout<<"\nLast occurence: "<<Last(arr,x,n-1);
    
    return 0;
}
