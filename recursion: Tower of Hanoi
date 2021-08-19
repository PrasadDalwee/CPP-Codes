#include <iostream>

using namespace std;
void ToH( int n, char src, char des, char helper )
{
    if(n==0) return;
    ToH(n-1,src,helper,des);
    cout<<" move "<<n<<" from:"<<src<<" to "<<des<<endl;
    ToH(n-1,helper,des,src);
}

int main()
{
    int n;
    cout<<"No. of blocks";
    cin>>n;
    ToH(n,'A','C','B');
    return 0;
}
