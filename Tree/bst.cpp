
#include <iostream>
using namespace std;
class node{
public:
    int data;
    node*left;
    node*right;
public:
node(int data)
{
    this->data = data;
    right=left=NULL;
}
};
node* buildBST(node *root,int key)
{
    if(root==NULL)
    {
        return new node(key);
    }
    if(key<root->data)
    {
        root->left = buildBST(root->left,key);
    }
    else
    {
        root->right = buildBST(root->right,key);
    }
    return root;
    
}
void inorder(node *root)
{
    if(root==NULL)
    {
        return;
    }
    inorder(root->left);
    cout<<root->data<<" ";
    inorder(root->right);
}
bool search(node *root,int val)
{
    if(root==NULL)
    {
        false;
    }
    if(root->data==val)
    {
        return true;
    }
    if(val<root->data)
    {
        return search(root->left,val);
    }
    else
    {
        return search(root->right,val);
    }
    return false;
}
node *findMin(node *root)
{
    while(root->left!=NULL)
    {
        root = root->left;
    }
    return root;
}
node *deletee(node *root,int key)
{
    if(root==NULL)
    {
        return NULL;
    }
    else if(key<root->data)
    {
        root->left = deletee(root->left,key);
    }
    else if(key>root->data)
    {
        root->right = deletee(root->right,key);
    }
    else
    {
        //no children
        if(root->left==NULL && root->right==NULL)
        {
                delete root;
                root=NULL;
        }
        //single child
        else if(root->left==NULL)
        {
               node *temp =root;
               root = root->right;
               delete temp;
        }
         else if(root->right==NULL)
        {
               node *temp =root;
               root = root->left;
               delete temp;
        }
        //2 child
        else{
            node *temp = findMin(root->right);
            root->data = temp->data;
            root->right = deletee(root->right,temp->data);
        }
    }
         return root;
}
int main() {
	// your code goes here
      #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
    node*root=NULL;
    int a[]= {8,3,10,1,6,14,4,7,13};
    for(int x:a)
    {
        root=buildBST(root,x);
    }
    // inorder(root);
    int val;
    cin>>val;
    // if(search(root,val))
    // {
    //     cout<<val<<"is present";
    // }
    // else
    // {
    //      cout<<val<<" not  present";
    // }
    root = deletee(root,val);
    inorder(root);
	return 0;
}

//8 10 1 -1 -1 6 9 -1 -1 7 -1 -1 3 -1 14 13 -1 -1 -1