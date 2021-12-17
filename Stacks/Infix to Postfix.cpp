#include<iostream>
#include<stack>
using namespace std;

string postfix(string s)
{
    stack <char> st;
    string ans="";

    for(int i=0; i<s.size(); i++)
    {
        char c=s[i];

        if(c=='(' || c=='*' || c=='/')      //currently * and / are of the highest precedence so no precedence check is required
            st.push(c);
        
        else if(c==')')
        {
            while(st.top()!='(')            //popping till the bracket becomes empty
            {
                ans+=st.top();
                st.pop();
            }
            st.pop();           //pop (
        }

        else if(c=='+' || c=='-')
        {
            while(!st.empty() && (st.top()=='*'||st.top()=='/'))   //lower precedences cannot be placed above higher ones
            {
                ans+=st.top();
                st.pop();
            }

            st.push(c);
        }

        else
            ans+=c;     //operands
    }

    while(!st.empty())      //appending all remaining operators
    {
        ans+=st.top();
        st.pop();
    }
    
    return ans;
}

int main()
{
    string s="a*b+c/d*e-a*(b+c/d)";
    cout<<"Infix: "<<s<<" \nPostfix: "<<postfix(s);
}