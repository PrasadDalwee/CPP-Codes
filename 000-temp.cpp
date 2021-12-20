
#include <iostream>
#include<stack>
using namespace std;


int main()
{
    
    // if we pop an empty stack program stops
    //a=b=c=3, assigns 3 to a,b,c;
    // arr[n], arr is pointer to first element, *ptr prints value arr+1 will point to second element
    // dynamic array of size n: int *arr=new int(n) |or| int *arr; arr=new int(n); creates arr[n]
    
    int *arr;
    arr=new int(3);
    arr[2]=555;
    cout<<arr[2]<<" "<<*(arr+2);
}
