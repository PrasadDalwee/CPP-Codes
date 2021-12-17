
#include <iostream>
#include<stack>
using namespace std;


int main()
{
    stack <int> st;
    st.push(1);

    while(!st.empty())
    {
        cout<<st.top()<<" ";
        st.pop();
    }
    cout<<st.top();
    cout<<"exit";       //basically if we pop an empty stack program stops
}
