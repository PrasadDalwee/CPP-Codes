#include<iostream>
#include<deque>
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


Tree*  LCA(Tree* root, int val1, int val2)
{
    if(!root)
        return NULL;

    //cout<<root->data<<endl;

    if(root->data==val1 || root->data==val2)
        return root;

    Tree* L=LCA(root->left,val1,val2);
    Tree* R=LCA(root->right,val1,val2);

    if(L!=NULL && R!=NULL)
        return root;

    else return L!=NULL? L:R;
}

int find(Tree* root, int n1, int n2)
{
    if(!root)
        return 0;
    
    if(root->data==n1 || root->data==n2)
        return 1;

    int L= find(root->left,n1,n2);
    int R= find(root->right,n1,n2);

    if(L!=0 && R!=0)    //at LCA
        return L+R;

    if(L!=0 || R!=0)   
        return L+R+1;

    return 0;
}

int distance(Tree* root, int n1, int n2)
{
    return find(LCA(root,n1,n2),n1,n2);  //use find to calculate dist from LCA 
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

    cout<<distance(root,2,3)<<endl;
}