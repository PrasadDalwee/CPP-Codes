#include<iostream>
#include<queue>
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

queue<Tree*>  rightview(Tree* root)
{
    queue<Tree*> q;
    queue<Tree*> ans;

    Tree* node;

    q.push(root);                             //initialized level 1 in queue
    ans.push(root);
    q.push(NULL);                            //marks the end of level 1 in queue

    while(!q.empty())                       //searches for possible children of current level
    {
        node=q.front();
        q.pop();
        
        if(node==NULL && q.size()!=0)       //if end of level is reached and children of this level exist 
        {
            ans.push(q.front());            //first node of every new level is right most node as we have pushed right child first
            q.push(NULL);                   //marks the end of next level
        }

        else if(node!=NULL) 
        {
            if(node->right!=NULL)           //insert right child node first
                q.push(node->right);
            if(node->left!=NULL)            //insert left child node 
                q.push(node->left);
        }
    }

    return ans;

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
    queue<Tree*> q=rightview(root);

    while(!q.empty())
    {
        cout<<q.front()->data<<"->";
        q.pop();
    }
}