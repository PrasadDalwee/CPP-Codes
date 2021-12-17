#include<iostream>
#include<stack>
using namespace std;

int prefixEval(string s)
{
    stack <int> st;
    for(int i=s.length()-1; i>-1; i--)    //we are traversing from end
    {
        if(s[i]>='0' && s[i]<='9')
            st.push(s[i]-'0');
        
        else
        {
            int a=st.top();
            st.pop();
            int b=st.top();
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
                
                default:
                    break;
            }
        }
    }
    
    return st.top();
}

int main()
{
    string s="*+432";
    int x=prefixEval(s);
    cout<<"\n Answer= "<<x;
}