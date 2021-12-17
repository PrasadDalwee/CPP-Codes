#include<iostream>
#include<stack>
using namespace std;

int postfixEval(string s)
{
    stack <int> st;
    for(int i=0; i<s.length(); i++)    //we are traversing from start
    {
        if(s[i]>='0' && s[i]<='9')
            st.push(s[i]-'0');
        
        else
        {
            int b=st.top();   //b-first
            st.pop();
            int a=st.top();     //a-second
            st.pop();

            switch (s[i])
            {
                case '+':
                    st.push(a+b);
                    break;
                
                case '-':
                    st.push(a-b);
                    break;
                
                case '*':
                    st.push(a*b);
                    break;
                
                case '/':
                    st.push(a/b);
                    break;

            }
        }
    }
    
    return st.top();
}

int main()
{
    string s="432+*";
    int x=postfixEval(s);
    cout<<"\n Answer= "<<x;
}
