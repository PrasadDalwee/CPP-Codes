#include<iostream>
#include<vector>

using namespace std;

class Tree
{
    public:
    int data=0;
    Tree *left=NULL, *right=NULL;

    Tree(int x)
    {
        data=x;
    }
};

int ancestors(Tree *root, Tree *destination, vector<Tree*> &path)
{

    if(root==destination)
    {   
        path.push_back(root);
        return 1;
    }

    if(!root || (!root->left && !root->right)) //end of subtree
        return 0;

    if(ancestors(root->left, destination, path) ||  ancestors(root->right, destination, path))
    {
        path.push_back(root);
        return 1;
    }

    return 0;
}

void subtree(Tree* root, vector <Tree*> &node, int k)
{
    if(!root)
        return;

    if(k<=0)
    {
        node.push_back(root);
        return;
    }

    subtree(root->left,node,k-1);
    subtree(root->right,node,k-1);
}

vector<Tree*> nodesAtK(Tree *root, Tree *target, int k)
{
    vector<Tree*> path, node;
    ancestors(root,target,path);

    subtree(target, node, k);

    for(int i=1; i<k && i<path.size(); i++)
    {
        cout<<path[i]->data<<"->\n";
        
        if(path[i-1]==path[i]->right)
            subtree(path[i]->left, node, k-i-1);
        else
            subtree(path[i]->right,node,k-i-1);
        
        if(i==k-1 && k<path.size())
            node.push_back(path[k]);
    }

    return node;
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

    vector <Tree*> nodes;
    nodes=nodesAtK(root,t4,2);

    // subtree(root,nodes, 2);
    for(auto &i: nodes)
        cout<<i->data<<" ";


}