// we have made dequeue costly as we are reversing stack while dequeue

#include<iostream>
#include<stack>
using namespace std;

class Queue
{
    int size=0, capacity;
    stack <int> s1;
    stack <int> s2;

    public:
        void enqueue(int x)
        {
            s1.push(x);         //simply push on top
            size++;
        }

        void dequeue()
        {
            
            if(size<=0)
            {
                cout<<"underflow\n";    
                return;
            }

            while(!s1.empty())      //reverse the stack to pop its actual bottom i.e. FIFO from LIFO
            {
                s2.push(s1.top());
                s1.pop();  
            }
            cout<<s2.top()<<endl;

            s2.pop();
            size--;
        }

};

int main()
{
    Queue q;
    q.enqueue(1);
    q.enqueue(2);
    q.enqueue(3);
    q.enqueue(4);
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();
    q.dequeue();

}
