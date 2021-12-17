#include<iostream>
#include<stack>
using namespace std;

string prefix(string s)
{
    stack <char> st;
    string ans="";
    for(int i=s.size()-1; i>-1; i--)            //reverse traversal
    {
        char c=s[i];
        if(c==')' || c=='*' || c=='/')          //higher precedence can go over lower ones
            st.push(c);
        
        else if(c=='(')                         // end of bracket
        {
            while(st.top()!=')')
            {
                ans=st.top()+ans;
                st.pop();
            }
            st.pop();                            // pop (
        }

        else if(c=='+' || c=='-')
        {
            while(!st.empty() && (st.top()=='/' || st.top()=='*'))  //lower precedence operators cannot go above higher ones
            {
                ans=st.top()+ans;
                st.pop();
            }
            st.push(c);
        }

        else
            ans=c+ans;      //operands
    }

    while(!st.empty())
    {
        ans=st.top()+ans;
        st.pop();
    }

    return ans;
}

int main()
{
    string s="d+c/f-a*(b+c/d)";
    cout<<"Infix: "<<s<<" \nPrefix: "<<prefix(s);
}