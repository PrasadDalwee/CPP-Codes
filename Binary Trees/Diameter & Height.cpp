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

int height(Tree* root)
{
    if(root==NULL) 
        return 0;
    
    return 1+max(height(root->left),height(root->right)); //1+ max(height of left subtree, right subtree)
}

int solve_diameter(Tree* root, int& res)
{
    if(root==NULL)
        return 0;
    
    int l=solve_diameter(root->left,res);
    int r=solve_diameter(root->right,res);

    int temp=max(l,r)+1;    // temp provides the subtree height 
    res=max(res,l+r+1);    //res holds the max value achieved 

    return temp;
}

int diameter(Tree* root) //no. of nodes in traversal of furthest nodes (root may or may not be in this path)
{
    int res=INT_MIN;
    solve_diameter(root,res);
    return res;
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


    cout<<"Total height: "<<height(root);
    cout<<"\nDiameter: "<<diameter(root);
}