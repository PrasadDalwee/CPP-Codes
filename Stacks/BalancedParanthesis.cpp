#include<iostream>
#include<stack>
using namespace std;

void balanced(string s)
{
    stack <char> st;
    for(auto c: s)
    {
        if(c=='{' || c=='[' || c=='(')
            st.push(c);

        else if(!st.empty() &&  c=='}' && st.top()=='{')
            st.pop();

        else if(!st.empty() && c==']' && st.top()=='[')
            st.pop();

        else if(!st.empty() && c==')' && st.top()=='(')
            st.pop();

        else
        {
            cout<<"\nUnbalanced Paranthesis";
            return;
        }
    }

    if(st.empty())
        cout<<"\nBalanced Paranthesis";
    
    else cout<<"\nUnbalanced Paranthesis";
    
}

int main()
{
    string s="{[[()]]{}{[]}}";
    cout<<"Input= "<<s;
    balanced(s);
}