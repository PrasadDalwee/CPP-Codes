
#include <iostream>

using namespace std;

int rec(int a)
{
    if(a==1)
        return 0;
        
    if (a==2)
         return 1;
     
    return( rec(a-1)+rec(a-2) );
}

int main()
{
    cout<<endl<<rec(5);        // prints nth element in fib series

    return 0;
}
