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

queue<Tree*> leftview(Tree* root)
{
    queue<Tree*> ans;
    queue<Tree*> process;

    process.push(root);
    Tree* node;

    while(!process.empty())
    {
        int size=process.size();
        ans.push(process.front());
        for(int i=0;i<size;i++)
        {
            node=process.front();
            process.pop();

            if(node->left)
                process.push(node->left);
            if(node->right)
                process.push(node->right);
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
    queue<Tree*> q=leftview(root);

    while(!q.empty())
    {
        cout<<q.front()->data<<"->";
        q.pop();
    }
}