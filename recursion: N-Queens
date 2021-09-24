// place each new queen in a new row, iterate over columns and backtrack if no column is safe 
// diagonals and columns will be checked only for the possible positions of previous queens

#include <iostream>
#include<vector>

using namespace std;

bool check(vector<vector<int>> &arr,int row, int col, int n)
{
    for(int i=0;i<row;i++)                                      //check column
        if( arr[i][col]==1) return false;
    
    for(int a=row,b=col; a>=0 && b>=0;a--,b--)                  //check north-west diagonal
        if(arr[a][b]==1) return false;
    
    for(int a=row,b=col; a>=0 && b<n; a--,b++)                  //check north-east diagonal
        if(arr[a][b]==1) return false;
    
    return true; 
}
 
 
bool nqueens(vector<vector<int>> &arr, int row, int n)
{

    if(row>=n) return true;
    
    for(int i=0;i<n;i++)
        if(check(arr,row,i,n))                              //place new queen if safe 
        {
            arr[row][i]=1; 
            
            if(nqueens(arr,row+1,n))                        //recursion
                return true;
            else arr[row][i]=0;                             //backtracking
        }
    
    return false;
}

int main()
{
    int n;
    cin>>n;
    vector <vector<int>> arr(n,vector <int> (n,0));
    
    nqueens(arr,0,n);
    
    for(int i=0;i<n;i++)
    {
        cout<<endl;
        
        for(int j=0;j<n;j++)
            cout<<arr[i][j]<<" ";
    }
}
