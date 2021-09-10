#include <iostream>
#include<string>
using namespace std;

void ascii( string s, string x)
{
    
    if(s.length()==0){
        cout<<x<<endl;    
     return;}
    
    char c=s[0];
    int a=int(c);

    
    ascii(s.substr(1),x);
    ascii(s.substr(1),x+c);
    ascii(s.substr(1),x+to_string(a));

}

int main()
{
    string s;
    cin>>s;
    ascii(s,"");

    return 0;
}
