#include<iostream>
#include<climits>
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

int sum_replacement(Tree* node)
{
    if(node==NULL)
        return 0;
    node->data=sum_replacement(node->left)+sum_replacement(node->right)+node->data;
    return node->data;
}

void preorder(Tree* node)       //root->left->right
{
    cout<<node->data<<" ";
    if(node->left!=NULL)
        preorder(node->left);
    if(node->right!=NULL)
        preorder(node->right);
}

int main()
{
    Tree* root=new Tree(1);
    Tree*t2= root->left=new Tree(2);
    Tree*t3=root->right=new Tree(3);
    Tree*t4=root->right->right=new Tree(4);
    Tree*t5=root->right->right->left= new Tree(5);

    // Tree*t6=t3->left=new Tree(6);
    // Tree*t7=t3->left->left=new Tree(7);
    // Tree*t8=t3->left->left->right= new Tree(8);
    // Tree*t9=t5->right=new Tree(9);
    sum_replacement(root);
    preorder(root);

}