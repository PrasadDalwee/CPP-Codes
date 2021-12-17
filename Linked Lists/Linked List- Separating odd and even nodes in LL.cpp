#include <iostream>
using namespace std;

class LL
{
    public:
        int data;
        LL* next;
};

LL* createlist(int n)  //manual creation
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

void separate(LL* head)
{
    LL* odd=head;
    LL* even=head->next;
    LL* st=head->next;
    while(true)
    {
        if(even->next==NULL)
            break;
            
        odd->next=even->next;
        odd=odd->next;
        
        if(odd->next==NULL)
            break;
        even->next=odd->next;
        even=even->next;
    }
    
    odd->next=st;
    even->next=NULL;
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

int main()
{
    cout<<"Length of linked list:  ";
    int n1;
    cin>>n1;
    
    LL* head1=createlist(n1);

    cout<<"\nList: ";
    printlist(head1);
    
    cout<<"\nOdd-Even Separated List: ";
    separate(head1);
    printlist(head1);

    return 0;
}
