#include<iostream>
using namespace std;

struct BST
{
    int data;
    BST* left=NULL;
    BST* right=NULL;

    BST(int c)
    {
        data=c;
    }
};

BST* insert(BST* root, int val)
{
    if(!root)
        return new BST(val);

    if(val<root->data)
        root->left=insert(root->left,val);
    if(val>root->data)
        root->right=insert(root->right,val);

    return root;
}

void inorder(BST* root)     //inorder traversal pf BST always give sorted order
{
    if(!root)
        return;
    
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

int main()
{
    BST* root= insert(NULL,4);
    insert(root,5);
    insert(root,3);
    insert(root,7);
    insert(root,2);
    insert(root,6);
    insert(root,8);

    inorder(root);
}