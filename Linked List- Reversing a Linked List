#include <iostream>
using namespace std;

class LL
{
  public:
    int data;
    LL* next;
};

LL* create(int n)
{
    LL* head=new LL();
    LL* temp=head;
    for(int i=1;i<=n;i++)
    {
        LL* temp2=new LL();
        temp->data=i;
        temp->next=temp2;
        temp=temp->next;
    }
    
    temp->data=NULL;
    return head;
}

void printlist(LL* head)
{
    LL* temp=head;
    while(temp->data!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    cout<<endl<<endl;
}

LL* reverse(LL* head)
{
    LL* curr=head->next;
    LL* prev=head;
    LL* forward;
    
    while(curr->data!=NULL)
    {
        forward=curr->next;
        curr->next=prev;
        prev=curr;
        curr=forward;
    }
    
    head->next=curr;
    return prev;
}

int main()
{
    int n;
    cin>>n;
    
    LL* head=create(n);
    printlist(head);
    
    head=reverse(head);
    printlist(head);
    return 0;
}
