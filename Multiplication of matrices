#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    int a,b,c;  //for multiplication of matrices it is necessary that their sizes should be in order of a X b, b X c 
    cin>>a;
    cin>>b;
    cin>>c;
    
    cout<<endl;
    
    int A[a][b], B[b][c];
    
    for(int i=0;i<a;i++)          //input A[a][b]
    {
        for(int j=0;j<b;j++)
        {
            cin>>A[i][j];
        }
    }
    cout<<endl;
    
    for(int i=0;i<b;i++)            // input B[b][c]
    {
        for(int j=0;j<c;j++)
        {
            cin>>B[i][j];
        }
    }
    
    cout<<endl; 
    
    
    int C[a][c];            //multiplication of matrices of order of aXb and bXc gives aXc order matrix
    
    for(int i=0;i<a;i++)          //setting C[a][c]=0, to avoid garbage values 
    {
        for(int j=0;j<c;j++)
        {
            C[i][j]=0;
        }
    }
    
    for( int x=0; x<a; x++)             // looping in C[a][] and A[a][]
    {
        for( int y=0; y<c; y++)          // looping in C[.][c] and B[.][c]
        {
            for( int z=0; z<b; z++)     // Looping in B[b][.]
            {
                C[x][y]+=A[x][z]*B[z][y];
            }
        }
    }

    
    
    for(int i=0;i<a;i++)          //output C[a][c]
    {
        for(int j=0;j<c;j++)
        {
            cout<<C[i][j]<<" ";
        }
        cout<<" \n";
    }
    
}
