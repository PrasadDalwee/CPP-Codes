#include<iostream>
using namespace std;

void dec(int n)
{
    if(n==0)
        return;
        
    cout<<" "<<n;      //printing n 
    dec(n-1);           // initiating recursion after printing n to print n-1 after n
}

void asc(int n)
{
    if(n==0)
        return;
        
    asc(n-1);            //initiating recursion before cout to go till n=1 first 
    cout<<" "<<n;       //will start printing from end case i.e n=1 because of recursion
}

int main()
{
    int n;
    cin>>n;
    
    asc(n);
    cout<<"\n";
    dec(n);
    return 0;
}
