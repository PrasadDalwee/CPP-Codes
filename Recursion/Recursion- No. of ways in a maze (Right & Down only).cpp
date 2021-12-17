//no. of ways to reach from 0,0 to k,k in a maze
// here we have assumed that we move only right and down

#include <iostream>
using namespace std;

int arr[4][4]={{0,1,1,1},{0,1,0,0},{0,0,0,1},{1,0,0,0}};

int ways(int i, int j)
{
    if(i==3 && j==3) return 1;
    if(arr[i][j]==1 || i>3 || j>3 ) return 0;
    return ways(i,j+1)+ways(i+1,j);
}

int main()
{
    cout<<ways(0,0);

    return 0;
}
