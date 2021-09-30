#include<iostream>
using namespace std;

int main()
{
    int n,m;
    cin>>n>>m;
    
    int arr[n][m];
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
            cin>>arr[i][j];
    }
    
    
    int cst=0,rst=0,cend=m-1,rend=n-1,i=0,j=0;
    
    while( cst<=cend || rst<=rend)                     //after final element cst will be greater than cend and rst>rend
    {
        //down
        while( i<=rend)
        {
            cout<<arr[i][j]<<" ";
            i++;
        }
        i=rend;                     //i has to be reset as its value will be rend+1 when exiting while
        cst++;                              //column covered
        j++;                        //the final element of this loop is starting of another, to avoid printing same element again we increment 
        
        
        //right
        while(j<=cend)
        {
            cout<<arr[i][j]<<" ";
            j++;
        }
        j=cend;
        rend--;
        i--;
        
        //up
        while(i>=rst)
        {
            cout<<arr[i][j]<<" ";
            i--;
        }
        cend--;
        i=rst;
        j--;
        
        //down
        while(j>=cst)
        {
            cout<<arr[i][j]<<" ";
            j--;
        }
        j=cst;
        rst++;
        i++;
    }
    
    return 0;
}
