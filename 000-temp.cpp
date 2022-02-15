
#include <iostream>
#include<stack>
using namespace std;

class LL
{
    public:
        int data;
        LL* next;
};
int main()
{
    
    //  1. if we pop an empty stack program stops
    //  2. a=b=c=3, assigns 3 to a,b,c;
    //  3. arr[n], arr is pointer to first element, *ptr prints value arr+1 will point to second element
    //  4. dynamic array of size n: int *arr=new int(n) |or| int *arr; arr=new int(n); creates arr[n]
    //  5. use delete keyword to delete a pointer of some type defined(new LL()) from memory
    //  6. accessing right or left of NULL pointer stops program in Trees
    //  7. Inorder Traversal of BST always gives sorted order
    //  8. Deleting a node in BST either replace node with its inorder predecessor(i.e. least or left most) in left subtree or inorder
    //     successor(i.e. largest or right most) in right subtree
   int a=3;
   cout<<(a<<2)<<(a<<=2);
}
