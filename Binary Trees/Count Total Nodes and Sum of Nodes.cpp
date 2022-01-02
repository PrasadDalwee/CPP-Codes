#include<iostream>
#include<queue>
using namespace std;

class Tree
{
    public:
    int data;
    Tree* left=NULL;
    Tree* right=NULL;

    Tree(int x)
    {
        data=x;
    }
};

int CountNodes(Tree* root)
{
    if(root==NULL)
        return 0;
    
    return 1 + CountNodes(root->left) + CountNodes(root->right);
    
}

int CountSum(Tree* root)
{
    if(root==NULL)
        return 0;
    return root->data + CountSum(root->left) + CountSum(root->right);
}

int main()
{
    Tree* root=new Tree(1);
    root->left=new Tree(2);
    root->right=new Tree(3);
    root->right->right=new Tree(4);
    root->right->right->left= new Tree(5);

    cout<<"Total Nodes: "<<CountNodes(root);
    cout<<"\nTotal Sum: "<<CountSum(root)<<endl;
}