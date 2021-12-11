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

void addintersection(LL* head1, LL* head2, int x)
{

    LL* start=createlist(x);
    LL* t1=head1;
    LL* t2=head2;
    
    while(t1->next!=NULL)
        t1=t1->next;
        
    while(t2->next!=NULL)
        t2=t2->next;
        
    t1->next=start;
    t2->next=start;
}

LL* intersection(LL* head1,LL* head2, int s1, int s2)
{
    LL* t1=head1;
    LL* t2=head2;
    
    if(s1>s2)
    {
        for(int i=0;i<s1-s2;i++)
            t1=t1->next;
    }
    
    else if(s1<s2)
    {
        for(int i=0;i<s2-s1;i++)
            t2=t2->next;
    }
    
    while(t1!=NULL)     //both are equal now
    {
        if(t1==t2)      //intersection
            return t1;
            
        t1=t1->next;
        t2=t2->next;
    }
    
}

int main()
{
    cout<<"Lengths of initial 2 linked lists:";
    int n1,n2; cin>>n1>>n2;
    LL* head1=createlist(n1);
    LL* head2=createlist(n2);
    printlist(head1);
    printlist(head2);
    
    cout<<"\n\nLength of the intersection to be added to the 2 linked lists:";
    int x; cin>>x;
    
    addintersection(head1,head2,x);
    
    cout<<"\n\n";
    printlist(head1);
    printlist(head2);
    
    LL* intersect=intersection(head1,head2,n1+x,n2+x);
    cout<<"\n Intersection found:";
    printlist(intersect);
    return 0;
}
