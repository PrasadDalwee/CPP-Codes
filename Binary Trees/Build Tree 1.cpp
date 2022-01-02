
//Build Tree from inorder and preorder sequence


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

int search(int inorder[], int start, int end, int curr)
{
    for(int i=start;i<=end;i++)
    {
        if(inorder[i]==curr)
            return i;
    }

    return -1;
}

//Preorder and Inorder
Tree* build1(int inorder[], int preorder[], int start, int end)
{
        static int idx=0;       //marks index in preorder array
        //static type variable, can be made only once and will editable and same throughout recursions

        if(start>end)
            return NULL;

        int curr=preorder[idx]; //value in node
        idx++;
        Tree* node= new Tree(curr); //create new node with value

        if(start==end)
            return node;


        int pos=search(inorder,start,end,curr);
        node->left=build1(inorder,preorder,start,pos-1);
        node->right=build1(inorder,preorder,pos+1,end);

        return node;

}

void inorder(Tree* node)        //left->root->right
{
    if(node->left!=NULL)
        inorder(node->left);

    cout<<node->data<<" ";

    if(node->right!=NULL)
        inorder(node->right);
}


int main()
{
    int inorderarr[]={4,5,2,1,3};
    int preorderarr[]={1,2,4,5,3};
    int i=sizeof(inorderarr)/sizeof(inorderarr[0]);
    Tree* node=build1(inorderarr,preorderarr,0,i-1);

    inorder(node);

}