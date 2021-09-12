#include <iostream>
#include<string>

using namespace std;

int path( int start, int end)
{
    if(start==end) return 1;
    if(start>end) return 0;
    
    int count=0;
    
    for(int i=1;i<=6;i++)
       count+= path(start+i,end);
    
   return count;
}

int main()
{
    int start=0;
    int end;
    cin>>end;
    cout<<path(start,end);

    return 0;
}
