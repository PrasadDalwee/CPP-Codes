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

int height(Tree* root)
{
    if(root==NULL) 
        return 0;
    
    return 1+max(height(root->left),height(root->right)); //1+ max(height of left subtree, right subtree)
}

int diameter(Tree* root) //no. of nodes in traversal of furthest nodes (root may or may not be in this path)
{
    
}

int main()
{
    Tree* root=new Tree(1);
    root->left=new Tree(2);
    root->right=new Tree(3);
    root->right->right=new Tree(4);
    root->right->right->left= new Tree(5);

    cout<<"Total height: "<<height(root);
}