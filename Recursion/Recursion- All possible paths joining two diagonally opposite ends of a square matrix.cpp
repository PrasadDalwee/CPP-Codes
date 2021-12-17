#include <iostream>
using namepsace std;

int paths(int i, int j, int k)
{
    if(i==k && j==k) return 1;
    else if(i>k or j>k) return 0;
    
    return paths(i+1,j,k)+paths(i,j+1,k);
}
using namespace std;

int main()
{
    int k;
    cin>>k;                         //no. of sides of matrix
    cout<<paths(0,0,k-1);           // all paths from 0,0 to k-1,k-1

    return 0;
}
