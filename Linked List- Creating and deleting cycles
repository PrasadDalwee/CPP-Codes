#include <iostream>
using namespace std;

class LL
{
    public:
        int data;
        LL* next;
};

void printcycle(LL* head, int n)
{
    n=2*n;
    cout<<"\n";
    while(n>0)
    {
        cout<<head->data<<"-> ";
        head=head->next;
        if(head==NULL)
        {
            cout<<"NULL\n";
            return;
        }
        n--;
    }
    cout<<" ....\n\n";
}

LL* createcycle(int n, int cycle)
{
    LL* head=new LL();
    LL* temp=head;
    LL* cyclepoint;
    for(int i=1;i<n;i++)
    {
        LL* temp2=new LL();
        
        if(i==cycle)
            cyclepoint=temp;
        
        
        temp->data=i;
        temp->next=temp2;
        temp=temp2;
    }
    
    temp->data=n;
    if(cycle==0)
        temp->next=NULL;
    else
    temp->next=cyclepoint;
    
    return head;
}

void deletecycle(LL* head)
{
    LL* fast=head;
    LL* slow=head;
    
    while(true)
    { 
        if(fast!=NULL and fast->next!=NULL)
        {
            fast=fast->next->next;
            slow=slow->next;
            
            if(fast==slow)
                {cout<<"\n Cycle detected\n"; break;}
        }
        
        else
        {
            cout<<"\n Cycle not present\n";
            return;
        }
    }
    
    fast=head;
    LL* prev;
    while(fast->data!=slow->data)
    {
        fast=fast->next;
        prev=slow;
        slow=slow->next;
    }
    
    cout<<"Loop detected at: "<<fast->data;
    prev->next=NULL;
    
    cout<<"\nLinked List after deletion of cycle:";
    printcycle(head, fast->data);
}

int main()
{
    int n,cycle;
    //cout<<" Enter no. of nodes and looping node (0 if no loop): ";
    cin>>n>>cycle;
    LL* head=createcycle(n,cycle);
    printcycle(head,n);
    deletecycle(head);
    return 0;
}
