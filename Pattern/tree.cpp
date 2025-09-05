#include <iostream>
#include<bits/stdc++.h>
using namespace std;
class node{
    public:
    int data;
    node*left;
    node*right;
    node(int d){
        data=d;
        left=right=NULL;
    }
};
node* buildTree()
{
    int d;
    cin>>d;
    if(d==-1)
        return NULL;
    node *newNode = new node(d);
    newNode->left = buildTree();
    newNode->right = buildTree();
    return newNode;    
}
void preorder(node *root)
{
    if(root==NULL)
    {
        return ;
    }
    cout<<root->data<<" ";
    preorder(root->left);
    preorder(root->right);
}
void postOrder(node *root)
{
     if(root==NULL)
    {
        return ;
    }
    postOrder(root->left);
    postOrder(root->right);
    cout<<root->data<<" ";
}
void inOrder(node *root)
{
     if(root==NULL)
    {
        return ;
    }
    inOrder(root->left);
    cout<<root->data<<" ";
    inOrder(root->right);
}
void BFS(node *root)
{
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty())
    {
        node*temp = q.front();
        if(temp==NULL)
        {
            cout<<"\n";
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }

        }
        else
        {
              q.pop();
            cout<<temp->data<<" ";
            if(temp->left)
            {
                 q.push(temp->left);
            }
            if(temp->right)
            {
                q.push(temp->right);
            }        
        }

    }
}

int main() {
	// your code goes here
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
    node *root=buildTree();
    cout<<"Pre-Order : ";
    preorder(root);
    cout<<"\n";
    cout<<"In-Order : ";
    inOrder(root);
    cout<<"\n";
    cout<<"Post-Order : ";
    postOrder(root);
    cout<<"\n";
    BFS(root);
	return 0;
}

