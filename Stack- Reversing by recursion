// condition: We use only one single stack, we do not make copies or use looping constructs

#include <iostream>
#include<stack>
using namespace std;

void placeAtBottom(int top, stack <int> &st)
{
    if(st.empty())
    {
        st.push(top);
        return;
    }
    int stacktop=st.top();
    st.pop();
    placeAtBottom(top,st);
    st.push(stacktop);
}

void reverse(stack <int> &st)
{
    if(st.empty())
      return;
      
    int top=st.top();
    st.pop();
    reverse(st);
    placeAtBottom(top,st);
}



void print(stack <int> st)
{
    if(st.empty())
        {
            cout<<"\n";
            return;
        }
    int top=st.top();
    cout<<" "<<top;
    st.pop();
    print(st);
    st.push(top);
}

int main()
{
    stack <int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    st.push(6);
    st.push(7);
    cout<<"stack: ";
    print(st);
    reverse(st);
    cout<<"\nreversed stack: ";
    print(st);
    return 0;
}
