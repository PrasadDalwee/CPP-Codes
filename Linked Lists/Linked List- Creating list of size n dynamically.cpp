#include <iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;
};

Node* createlist(int n)
{
    Node* head=new Node();
    head->data=1;
    Node* node=head;
    
    for(int i=1;i<n;i++)            //dynamic creation of new nodes
    {
        Node* node2=new Node();
        node->next=node2;
        node2->data=i+1;
        node=node2;
    }
    
    Node* end=new Node();   //marks the end of LL
    node->next=end;
    end->data=NULL;
    return head;
}

int main()
{
    int n; cin>>n;
    Node* head=createlist(n);
    Node* temp=head;
    
    while(temp->data!=NULL)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
    return 0;
}
