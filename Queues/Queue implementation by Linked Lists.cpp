#include<iostream>
using namespace std;

class LL
{
    public:
        int data;
        LL* next;
};

class Queue
{
    LL* front;
    LL* back;
    int size=0,capacity;

    public:
        Queue(int capacity)
        {
           this->capacity=capacity;
        }

        void empty()
        {
            if(size<=0)
                cout<<"\t\tQueue is empty\n";
            else
                cout<<"\t\tQueue is not empty\n";
        }

        void peek()
        {
            if(size==0)
                {cout<<"\t\tQueue is empty\n"; return;}

            cout<<"\t\tElement at front->"<<front->data<<endl;
        }

        void atback()
        {
            if(size==0)
                {cout<<"\t\tQueue is empty\n"; return;}

            cout<<"\t\tElement at back->"<<back->data<<endl;
        }

        void enqueue(int x)
        {
            if(size>=capacity)
            {   cout<<"\t\tQueue Overflow\n"; return;   }

            LL* node = new LL();
            
            if(size==0)
                front=node;

            else
                back->next=node;
            
            node->data=x;
            back=node;
            size++;
        }

        void dequeue()
        {
            if(size<=0)
            {   cout<<"\t\tQueue Underflow\n"; return;   }

            
            cout<<"\t\tRemoved element="<<front->data<<endl;
            if(size==1)
            {
                delete front;
                delete back;
            }
            else
            {
                LL* temp=front;
                front=front->next;
                delete temp;
            }

            size--;
        }
};

int main()
{
    char s='c';
    int x;

    cout<<"Size of Queue to be generated: ";
    cin>>x;

    Queue q(x);

    cout<<"Commands: e:enqueue d:dequeue b:back p:peek m:empty x:exit\n";

    while(s!='x')
    {
        cout<<"  Command:";
        cin>>s;

        if(s=='e')
        {
            cout<<"\telement to insert: ";
            cin>>x;
            q.enqueue(x);
        }

        else if(s=='d')
            q.dequeue();

        else if(s=='b')
            q.atback();
        
        else if(s=='p')
            q.peek();

        else if(s=='m')
            q.empty();

    }

}
