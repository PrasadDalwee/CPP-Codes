#include<iostream>
#include<climits>
#include<stdlib.h>
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

int balanced_height_tree(Tree* node, int &bal)   // abs(L subtree - R subtree)<=1 for every node
{
    if(node==NULL)
        return 0;
    int l=balanced_height_tree(node->left,bal);
    int r=balanced_height_tree(node->right,bal);
    if(abs(l-r)>1) 
        bal=0; 

    return max(l,r)+1;
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
    int bal=1;
    balanced_height_tree(root,bal);
    if(bal)
        cout<<"\n balanced";
    else
        cout<<"\n not balanced";

}