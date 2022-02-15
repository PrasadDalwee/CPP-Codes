#include<iostream>
using namespace std;

struct BST
{
    int data;
    BST* left=NULL;
    BST* right=NULL;
    BST(int val)
    {
        data=val;
    }
};

BST* insert(BST* root, int val)
{
    if(!root)
        return new BST(val);
    if(val<root->data)
        root->left=insert(root->left,val);
    else
        root->right=insert(root->right,val);

    return root;
}

void inorder(BST* root)
{
    if(!root)
        return;
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}

BST* searchnode(BST* root, int val) //returns pointer to searched element
{
    if(!root)
    {
        cout<<"\nNot present in BST\n";
        return root;
    }
    if(root->data==val)
    {    
        cout<<"\nElement Found\n";
        return root;
    }
    
    if(val<root->data)
        return searchnode(root->left,val);
    else
        return searchnode(root->right,val);
}

BST* deletenode(BST* root, int val)
{
    if(!root)
    {
        cout<<"Node not found\n";
        return root;
    }

    if(root->data==val)
    {
        cout<<"Node deleted\n";
        if(!root->left)
            return root->right;
        if(!root->right)
            return root->left;

        BST *parent=root, *predecessor=root->left;
        while(!predecessor->left)
        {
            parent=predecessor;
            predecessor=predecessor->left;
        }

        root->data=predecessor->data;
        parent->left=predecessor->right;

        return root;
    }

    if(val<root->data)
        root->left=deletenode(root->left,val);
    else
        root->right=deletenode(root->right,val);
    
    return root;
}

int main ()
{
    BST* root= insert(NULL,4);
    insert(root,5);
    insert(root,3);
    insert(root,7);
    insert(root,2);
    insert(root,6);
    insert(root,8);

    inorder(root);
    
    //search
    BST* loc=searchnode(root,5);
    (!loc)? cout<<"not found\n": cout<<loc->data<<endl;

    //delete
    root=deletenode(root,4); //bcoz root can also be deleted
    cout<<endl<<root->data<<endl;
    inorder(root);
}