#include <iostream>
using namespace std;

class LL
{
    public:
        int data;
        LL* next;
};

LL* createlist( int n)
{
    LL* head=new LL();
    LL* temp=head;
    
    for(int i=1;i<=n;i++)
    {
        LL* newnode= new LL();
        temp->data=i;
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

LL* lastk( LL* head, int n, int k)
{
    LL* end=head;
    LL* start;
    
    for(int i=1; i<n-k; i++)
        end=end->next;        //i=n-k-1, end=n-k
    
    start=end->next;
    end->next=NULL;
    
    LL* newhead=start;
    while(start->next!=NULL)
        start=start->next;
    
    start->next=head;
    
    return newhead;
}

int main()
{
    int n; cin>>n;
    LL* head=createlist(n);
    printlist(head);
    
    int k; cin>>k;
    head=lastk(head, n, k);
    printlist(head);
    
    return 0;
}
