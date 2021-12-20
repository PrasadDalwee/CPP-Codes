#include<iostream>
using namespace std;

class Queue
{
    int size=0, capacity, *arr, front=-1, back=-1;

    public:
        
        Queue(int c)
        {
            capacity=c;
            arr =new int(capacity);
            cout<<"\nQueue of capacity="<<capacity<<" is generated.\n";
        }

        void fb()
        {
            cout<<"\t\tfront: "<<front<<" back: "<<back<<" size: "<<size<<endl<<endl;
        }

        void enqueue()
        {
            if(size>=capacity)
            {
                cout<<"\tQueue Overflow\n";
                fb();
                return;
            }
            int x;
            cout<<"\tenter element->: ";
            cin>>x;
            if(size==0)
            {
                front=(front+1)%capacity;
            }
            back=(back+1)%capacity;
            arr[back]=x;
            size++;
            fb();
        }

        void dequeue()
        {
            if(size==0)
            {
                cout<<"\tQueue Underflow"<<endl;fb();
                return;
            }

            cout<<"\telement removed="<<arr[front]<<endl;
            if (size==1)
                front=back=(front+1)%capacity;
            else
                front=(front+1)%capacity;

            size--;
            fb();
        }

        void peek()
        {
            if(size==0)
                cout<<"\tQueue is empty\n";
            else
                cout<<"\telement at front="<<arr[front]<<endl;
            fb();
        }

        void atback()
        {
            if(size==0)
                cout<<"\tQueue is empty\n";
            else
                cout<<"\telement at back="<<arr[back]<<endl;   
            fb();
        }
        
        void empty()
        {
            if(size==0)
                cout<<"\tQueue is empty\n";
            else
                cout<<"\tQueue is not empty\n";   
            fb();
        }
};



int main()
{
    
    char c='.';
    cout<<" Enter Desired capacity of Queue: ";
    int n; cin>>n;
    Queue q(n);
    cout<<"\n\n Commands: e-> Enqueue  d->dequeue  p->peek  b->back  m->empty x->exit\n";
    while(c!='x')
    {
        cout<<"\ncommad: ";cin>>c;
        switch (c)
        {
            case 'e':
                q.enqueue();
                break;
            case 'd':
                q.dequeue();
                break;
            case 'p':
                q.peek();
                break;
            case 'b':
                q.atback();
                break;
            case 'm':
                q.empty();
                break;  
            
            default:
                break;
        }
    }


}