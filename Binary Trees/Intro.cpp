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

int main()
{
    Tree* root= new Tree(1);
    Tree* leaf1= new Tree(2);
    Tree* leaf2= new Tree(3);

    root->right=leaf2;
    root->left=leaf1;

    cout<<root->data<<" \n"<<root->left->data<<" "<<root->right->data<<endl;
}