#include<iostream>
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

void inorder(Tree* node)        //left->root->right
{
    if(node->left!=NULL)
        inorder(node->left);

    cout<<node->data<<" ";

    if(node->right!=NULL)
        inorder(node->right);
}

void preorder(Tree* node)       //root->left->right
{
    cout<<node->data<<" ";
    if(node->left!=NULL)
        preorder(node->left);
    if(node->right!=NULL)
        preorder(node->right);
}

void postorder(Tree* node)      //left->right->node
{
    if(node->left!=NULL)
        preorder(node->left);
    if(node->right!=NULL)
        preorder(node->right);
    cout<<node->data<<" ";
}

int main()
{
    Tree* root= new Tree(1);
    Tree* leaf1= new Tree(2);
    Tree* leaf2= new Tree(3);
    Tree* leaf3=new Tree(4);
    Tree* leaf4=new Tree(5);
    root->right=leaf2;
    root->left=leaf1;
    leaf1->right=leaf4;
    leaf1->left=leaf3;

    cout<<"\n\nInorder: ";inorder(root);
    cout<<"\n\nPreorder: ";preorder(root);
    cout<<"\n\nPostorder: ";postorder(root);
}