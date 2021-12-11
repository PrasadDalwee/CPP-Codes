#include <iostream>
using namespace std;

class LL
{
    public:
        int data;
        LL* next;
};

LL* createlist( int n)  //manual creation
{
    LL* head=new LL();
    LL* temp=head;
    
    cout<<"List ("<<n<<") ->";
    for(int i=1;i<=n;i++)
    {
        LL* newnode= new LL();
        
        int x; cin>>x;
        temp->data=x;
        if(i==n)
            temp->next=NULL;
        else
            temp->next=newnode;
        temp=newnode;
    }
    
    return head;
}

void printlist( LL* head)
{
    LL* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL\n";
}

LL* merge( LL* head1, LL* head2)
{
    LL* t1=head1;
    LL* t2=head2;
    LL* t=new LL(); //dummy node
    LL* head=t;     
    
    while(t1!=NULL && t2!=NULL)
    {
        if(t1->data<=t2->data)
        {
            t->next=t1;
            t1=t1->next;
            t=t->next;
        }
        else
        {
            t->next=t2;
            t2=t2->next;
            t=t->next;
        }
    }
    
    while(t1!=NULL)
    {
        t->next=t1;
        t1=t1->next;
        t=t->next;
    }
    
    while(t2!=NULL)
    {
        t->next=t2;
        t2=t2->next;
        t=t->next;
    }
    
    t=NULL;
    return head->next;
}

int main()
{
    cout<<"Lengths of 2 linked lists:  ";
    int n1,n2; cin>>n1>>n2;
    LL* head1=createlist(n1);
    LL* head2=createlist(n2);
    cout<<"\nList 1: ";
    printlist(head1);
    cout<<"List 2: ";
    printlist(head2);
    
    LL* head=merge(head1,head2);
    cout<<"\n\nMerged List: ";
    printlist(head);
    return 0;
}
