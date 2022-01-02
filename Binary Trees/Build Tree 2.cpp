
//Build Tree from inorder and postorder sequence


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

//Postorder and Inorder
Tree* build2(int inorder[], int postorder[], int start, int end)
{
        static int idx=end;

        if(start>end)
            return NULL;

        int curr=search( inorder, start, end, postorder[idx]);
        if(curr==-1) //nothing found
            return NULL;

        Tree* node= new Tree(postorder[idx]);
        idx--;
        
        if(start==end) //no left or right subtree remains
            return node;

        node->right=build2(inorder,postorder, curr+1, end);
        node->left=build2(inorder,postorder,start,curr-1);

        
        return node;
}

void postorder(Tree* node)      //left->right->node
{
    if(node->left!=NULL)
        postorder(node->left);
    if(node->right!=NULL)
        postorder(node->right);
    cout<<node->data<<" ";
}


int main()
{
    int inorderarr[]={2,1,5,4,3};
    int postorderarr[]={2,5,4,3,1};
    int i=sizeof(inorderarr)/sizeof(inorderarr[0]);
    Tree* node=build2(inorderarr,postorderarr,0,i-1);
    postorder(node);

}