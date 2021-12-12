#include <iostream>
#include<string>
using namespace std;

#define n 5 //macro to define n as 5 i.e.len of stack=5

class stack
{
    int top=-1;
    int arr[n];
  public:
    bool empty()
    {
        return top<=-1;
    }
    
    int Top()
    {
        return top;
    }
    
    void push(int x)
    {
        if (top>=n-1)
        {
            cout<<"\t\tStack Overflow\n";
            return;
        }
        
        top++;   
        arr[top]=x;
    }
    
    void pop()
    {
        if(top<0)
            {cout<<"\tStack Underflow\n"; top=-1; return;}
            
        else
            cout<<"\telement removed="<<arr[top]<<endl;
        top--;
    }
};

int main()
{
    string s="GO";
    stack st;
    cout<<"Commands: push, pop, top, empty, exit\n\n";
    
    while(s!="exit")
    {
        cout<<"\n Command: ";
        cin>>s;
        
        if(s=="push")
        {
            int x;
            cout<<"\telement to push= ";
            cin>>x;
            st.push(x);
        }
        
        else if(s=="pop")
            st.pop();
        
        else if(s=="top")
            cout<<"\ttop->"<<st.Top()<<endl;
        
        else if(s=="empty")
            if(st.empty()) cout<<"\tstack is empty\n";
            else cout<<"\tstack is not empty\n";
        
    }
    return 0;
}
