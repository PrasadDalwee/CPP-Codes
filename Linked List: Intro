#include <iostream>
using namespace std;

class LL
{
    public:
    int data;
    LL* next; //a pointer of type LL i.e a pointer which points the data type of LL
};

int main()
{
   LL* node1=new LL();      //new LL() creates an memory allocation for requested object 
   LL* node2=new LL();      //and returns its address, as the address is to be used for 
   LL* node3=new LL() ;     //data type LL we define a new pointer variable of type LL to catch it.
   
   node1->data=1;           // note: we are not using objects of classes
   node2->data=2;           // we are using pointers to memory allocation for the objects
   node3->data=3;           // therefore we use -> to access the attributes of pointed nodes 
   node1->next=node2;
   node2->next=node3;
   

   cout<<node1->data<<" "<<node1->next<<" "<<node2<<endl;
   cout<<node2->data<<" "<<node2->next<<" "<<node3<<endl;
   cout<<node3->data<<" "<<node3->next<<endl;

    return 0;
}
