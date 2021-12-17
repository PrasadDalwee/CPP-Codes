#include<iostream>
#include<string>
#include<stack> 
using namespace std;

string reverse(string s)
{
    string ans="",word="";
    
    s+=' '; //to make sure last word gets appended 
    
    stack<string> c;
    for(auto i:s)
    {
        if(i==' ')      //last word will not be pushed if it is not followed by space
        {
            c.push(word);
            word="";
        }
        else
            word+=i;
    }
    
    while(!c.empty())
    {
        ans+=c.top()+" ";       //top returns top element
        c.pop();
    }
    return ans;
}

int main()
{
    stack <string> st;
    string s;
    getline(cin,s);
    
    s=reverse(s);
    cout<<s;
}
