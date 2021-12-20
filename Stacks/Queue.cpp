#include<iostream>
#include<queue>

using namespace std;

class Stack
{
    int size=0;
    queue<int> q1;
    queue<int> q2;

    public:
        void push(int x)
        {
            q1.push(x);
            cout<<q1.back()<<endl;
            size++;
        }

        void pop()
        {
            if(size<=0)
            {
                cout<<"Stack Underflow\n";
                return;
            }

            int c=size;
            while(c>1)
            {
                q2.push(q1.front());
                q1.pop();
                c--;
            }
            cout<<q1.front()<<endl;
            q1.pop();    
            

            while(!q2.empty())
            {
                q1.push(q2.front());
                q2.pop();
            }
            size--;

        }

};

int main()
{
    Stack st;
    st.push(4);
    st.push(2);
    st.push(3);

    st.pop();
    st.pop();
    st.pop();
    st.pop();
    st.pop();
}