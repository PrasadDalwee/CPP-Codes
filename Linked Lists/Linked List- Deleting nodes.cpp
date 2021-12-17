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
    for(int i=1;i<n;i++)                 //iteratively creates n nodes
    {
        Node* node2=new Node();
        node->next=node2;
        node2->data=i+1;
        node=node2;
    }
    
    Node* end=new Node();           //marks the end of LL with a NULL node
    node->next=end;
    end->data=NULL;
    return head;
}

Node* deletenode(int del, Node* head)
{
    if(del==head->data)              //del= data of first node 
        return head->next;
    
    Node* temp=head;
    
    while(temp->next->data!=del)    //loop till data of next node matches del
    {
        temp=temp->next;
    }
    
    temp->next=temp->next->next;    //change link 
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
    cout<<"\n\n";

    
    int del=0;
    while(del!=-1)      //type -1 to exit 
    {    
        cin>>del;                // put value of a particular node to delete it
        head=deletenode(del,head);
        
        Node* temp=head;
        
        while(temp->data!=NULL)
        {
            cout<<temp->data<<" ";
            temp=temp->next;
        }
        cout<<"\n\n";
    }
    
    return 0;
}
