#include <iostream>
using namespace std;

class LL
{
    public:
        int data;
        LL* next;
};

LL* create_circ_list( int n)  //manual creation
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
            temp->next=head; //creating loop
        else
            temp->next=newnode;
        temp=newnode;
    }
    
    return head;
}

LL* delete_node(LL* head, int x)
{
    LL* temp=head;
    
    while(temp->next->data!=x)
        temp=temp->next;
        
    temp->next=temp->next->next;
    
    return temp;
}

void printlist( LL* head, int n)
{
    LL* temp=head;
    n+=n;
    while(n>0)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
        n--;
    }
    cout<<"...\n";
}

int main()
{
    cout<<"Length of linked list:  ";
    int n1;
    cin>>n1;
    
    LL* head1=create_circ_list(n1);

    cout<<"\nList: ";
    printlist( head1, n1);
    
    cout<<"\ndelete: ";
    int x1; cin>>x1;
    head1=delete_node(head1,x1);
    cout<<"\nList: ";
    printlist( head1, n1);
    
    return 0;
}
