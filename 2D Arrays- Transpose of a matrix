#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    int arr[n][n];   //2d array for matrix
    
    for(int i=0;i<n;i++) //taking input
    {
        for(int j=0;j<n;j++)
        {
            cin>>arr[i][j];
        }
    }
    
    int sw;
    
    for(int i=0;i<n;i++) //swapping elements
    {
        for(int j=i+1;j<n;j++)
        {
            sw=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=sw;
        }
    }
    
    cout<<endl<<endl;
    
     for(int i=0;i<n;i++) //printing matrix
    {
        for(int j=0;j<n;j++)
        {
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
