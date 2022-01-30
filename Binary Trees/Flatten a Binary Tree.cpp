// to do: flatten the tree in prefix order (TLR) without using any other data structure s.t. all the left nodes should point to NULL
#include<iostream>
using namespace std;

class Tree
{
    public:
        int data;
        Tree* left=NULL;
        Tree* right=NULL;
        Tree(int v)
        {
            data=v;
        }
};

Tree* flatten(Tree* root)
{
    if(!root->left && !root->right)
        return root;

    Tree* left=root->left;
    Tree* right=root->right;
    Tree* tail;

    if(left!=NULL)
    {
        tail=flatten(root->left);
        root->right=left;
        tail->right=right;
    }

    if(right!=NULL)
        tail=flatten(right);

    return tail;
}

int main()
{
    Tree* root=new Tree(1);
    Tree*t2= root->left=new Tree(2);
    Tree*t3=root->right=new Tree(3);
    Tree*t4=root->right->right=new Tree(4);
    Tree*t5=root->right->right->left= new Tree(5);

    Tree*t6=t3->left=new Tree(6);
    Tree*t7=t3->left->left=new Tree(7);
    Tree*t8=t3->left->left->right= new Tree(8);
    Tree*t9=t5->right=new Tree(9);
    Tree*t10=t7->left=new Tree(10);
    Tree*t11=t7->left->left=new Tree(11);

    flatten(root);
    while(root)
    {
        cout<<root->data<<"->";
        root=root->right;
    }
}