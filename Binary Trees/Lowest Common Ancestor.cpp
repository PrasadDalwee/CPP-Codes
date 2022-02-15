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


int findpath( Tree* root, vector<Tree*> &path, int d)
{
    if(root->data==d)
    {
        path.push_back(root);
        return 1;
    }

    path.push_back(root);

    int c=0;
    if(root->left!=NULL && !c)
        c=findpath(root->left,path,d);
    if(root->right!=NULL && !c)
        c=findpath(root->right,path,d);
    
    if(c)
        return 1;

    path.pop_back();
    return 0;
    
}

Tree* LCA(Tree* root, int d1, int d2)
{
    vector<Tree*> path1, path2;
    findpath(root,path1,d1);
    findpath(root,path2,d2);

    Tree* ans=NULL;

    cout<<" Common Path \n";
    for(int i=0; i<min(path1.size(),path2.size()); i++)
    {
        if(path1[i]!=path2[i])
            break;
        ans=path1[i];
        cout<<path1[i]->data<<endl;
    }
    cout<<endl;
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

    cout<<LCA(root,10,9)->data;
}