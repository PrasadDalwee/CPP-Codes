#include<iostream>
using namespace std;

int main()
{   
    int n; cin>>n;
    char arr[n];
    cin>>arr;
    for(int i=0;i<n/2;i++)      //as we check from start and end simultaneously we need to iterate only till n/2
    {
        if(arr[i]!=arr[n-i-1])
        {
            cout<<"not pallindrome ";
            return 0;
        }
    }
    
    cout<<" pallindrome";
    return 0;
}
