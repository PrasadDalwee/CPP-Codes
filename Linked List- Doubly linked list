#include <iostream>
using namespace std;

class LL 
{
    public:
        int data;
        LL* prev;
        LL* next;
};

LL* createlist( int n )
{
    LL* head=new LL();
    
    LL* curr=head;
    LL* prevn=NULL;
    
    for (int i=1;i<=n;i++)
    {
        LL* newnode=new LL();
        
        curr->data=i;
        curr->next=newnode;
        curr->prev=prevn;
        prevn=curr;
        curr=newnode;
    }
    prevn->next=NULL;
    
    return head;
    
}

void printlist(LL* head)
{
    LL* temp=head;
    while(temp->next!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<temp->data<<"->"<<"NULL\n";
    
    
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->prev;
    }
    cout<<"NULL\n";
}

int main()
{
    int n; cin>>n;
    LL* head= createlist(n);
    printlist(head);

    return 0;
}
