#include <iostream>
#include<string>

using namespace std;

string move_x( string s)
{
    if(s.length()==1) return s;
 
    char p=s[0];                       // separates each char one by one in each iteration
    s=move_x(s.substr(1));
    
    if(p=='x') return s+p;            //if char is x it will go in end
    
    else return p+s;                  //if not it will be placed back while back tracking
    
}

int main()
{
    string s="xx12xx3x4x5x";
    cout<<endl<<move_x(s);
}
