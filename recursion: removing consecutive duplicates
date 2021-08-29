#include <iostream>
#include<string>

using namespace std;

string rdup( string s)
{
    if( s.length()==1)
        return s;
        
    char x= s[0];
    s=rdup(s.substr(1)); 
    
    if(x==s[0]) return s; //x is duplicate neglect it
     
    else  return x+s; // add x back in front of s 
}

int main()
{
    string s="111122233334455556777";
    cout<<endl<<rdup(s);
}
