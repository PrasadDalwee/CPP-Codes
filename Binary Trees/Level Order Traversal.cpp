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

Tree* build(int nodes, int levels)
{
    if(levels<=0 || nodes<=0)
        return NULL;
    
    static int i=1;
    Tree* node=new Tree(i);
    i++;

    node->left=build(nodes-1,levels-1);
    node->right=build(nodes-2,levels-1);

    return node;
}

void preorder(Tree* node)       //root->left->right
{
    cout<<node->data<<" ";
    if(node->left!=NULL)
        preorder(node->left);
    if(node->right!=NULL)
        preorder(node->right);
}



void LevelOrder(Tree* root)
{
    queue <Tree*> q;
    q.push(root);
    

    while(!q.empty())
    {
        q.push(NULL);
        while(q.front()!=NULL)
        {
            cout<<q.front()->data<<" ";
            auto node=q.front();
            q.pop();
            if(node->left)
                q.push(node->left);
            if(node->right)
                q.push(node->right);
        }
        
        cout<<endl;
        q.pop();
    }

}



int main()
{
    auto root=build(7,3);
    cout<<" Preorder Traversal: ";preorder(root);
    cout<<"\n\n Level Order Traversal: \n"; LevelOrder(root);
}