#include <iostream>
#include<string>
using namespace std;

string replace_pi( string s, int pos)
{
    if(pos>=s.size())         //reached end of string
    return s;
    
    if(s[pos]=='p' && s[pos+1]=='i')
    {
        s=s.substr(0,pos)+"3.14"+s.substr(pos+2,s.size()); //replacing 3.14 by taking substrings before and after our encountered pi
        pos+=2;              //we took out pi and replaced 3.14 which is extra 2 digits
    }
    
    s=replace_pi(s,pos+1);      //s is altered and passed in each iteration, when the function reaches end it will
                                //start returning the final string which will be stored in s and again returned till we exit loop
    return s;
}

int main()
{
    string s;
    getline(cin,s);
    cout<<replace_pi(s,0);
    return 0;
}
