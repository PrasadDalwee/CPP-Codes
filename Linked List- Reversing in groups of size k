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
        temp->data=i;
        if(i==n)
            temp->next=NULL;
        else
        {
            LL* temp2=new LL();
            temp->next=temp2;
            temp=temp->next;
        }
    }

    return head;
}

void printlist(LL* head)
{
    LL* temp=head;
    while(temp!=NULL)
    {
        cout<<temp->data<<" -> ";
        temp=temp->next;
    }
    if(temp==NULL)
        cout<<"NULL";
    cout<<endl<<endl;
}

LL* reversek(LL* head, int k)
{
    LL* curr=head;
    LL* prev;
    LL* forward=head->next;
    int cnt=k;
    
    while(cnt>1 && forward!=NULL)
    {
        prev=curr;
        curr=forward;
        forward=forward->next;
        curr->next=prev;
        
        cnt--;
    }
    if(forward==NULL)           //end of list
        head->next=NULL;
        
    else
        head->next=reversek(forward,k);
    
    return curr;
}

int main()
{
    int n;
    cin>>n;
    
    LL* head=create(n);
    printlist(head);
    
    int k;
    cin>>k;
    head=reversek(head,k);
    printlist(head);
    return 0;
}
