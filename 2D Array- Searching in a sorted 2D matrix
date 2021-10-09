#include<iostream>
using namespace std;

int main()
{
    int a,b,x;
    cin>>a>>b;                      //input order of matrix 
    cout<<endl;
    
    int A[a][b];
    
    for(int i=0;i<a;i++)            //input matrix
    {
        for(int j=0;j<b;j++)
        {
            cin>>A[i][j];
        }
    }
    
    cout<<endl;
    
    cin>>x;                  //input no. to be searched
    
    int Y=0;
    int X=a-1;
    
    while( Y<b && X>-1 )
    {
        if(x==A[Y][X])
        {
            cout<<"Found at x="<<X<<" and y="<<Y;
            return 0;
        }
        
        else if(x>A[Y][X])        // As array is sorted and we are starting from top right end of matrix
        Y++;                     // we have only two options, if x is greater we move down
        
        else if( x<A[Y][X])
        X--;                     // if x is smaller, we move left
    }
    
    cout<<"Not found";
    return 0;
}
