#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    cout<<endl;
    
    for(int i=0;i<n;i++)   //i/p array
    {
        cin>>arr[i];
    }
    
    int mx=pow(10,6);                // we are assuming any +ve int<10^6 can appear,
    int R[mx]={0};               //intializing the complete array with 0, note: this method only works if int is 0
    
    //fill_n(Array, upto which loc., integer to be filled) ;        //fill(R,mx+2,-1)  //for initializing with any other int we use this method from <algorithm> header file
    
    for(int i=0;i<n;i++)
    {
        if(R[arr[i]]==0)
        {
            R[arr[i]]=1;
        }
        
        else{
            cout<<endl<<arr[i];         // no. has already appeared, and thus it is the first repeating element
            return 0;
        }
    }
    
    cout<<endl<<" No repition found";
}
