#include <bits/stdc++.h>
using namespace std;
class node{
public:
	int data;
	node*left;
	node*right;

	node(int d)
	{
		data=d;
		left=NULL;
		right=NULL;
	}
};
node* buildtree()
{
	int d;
	cin>>d;
	if(d==-1)
	{
		return NULL;
	}
	node* root = new node(d);
	root->left = buildtree();
	root->right = buildtree();
	return root;
}
void printPreorder(node *root)
{
	if(root == NULL)
	{
		return ;
	}
	cout<<root->data<<" ";
	printPreorder(root->left);
	printPreorder(root->right);
}
void printInorder(node *root)
{
	if(root == NULL)
	{
		return ;
	}
	printInorder(root->left);
	cout<<root->data<<" ";
	printInorder(root->right);
}
void printPostorder(node *root)
{
	if(root == NULL)
	{
		return ;
	}
	printPostorder(root->left);
	printPostorder(root->right);
	cout<<root->data<<" ";
}
int height(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int ls = height(root->left);
	int rs = height(root->right);
	return max(ls,rs)+1;
}
void levelprint(node *root,int k)
{
	if(root==NULL)
	{
		return ;
	}
	if(k==1)
	{
		cout<<root->data<<" ";
		return;
	}
	levelprint(root->left,k-1);
	levelprint(root->right,k-1);
}
void printLevelwise(node*root)   //time complexity : O(n^2)
{
	int h = height(root);
	for(int i=1;i<=h;i++)
	{
		levelprint(root,i);
		cout<<"\n";
	}

}
void bfs(node*root)   //ye bhi level wise hi print krta hai but O(n);
{
	queue<node*>q;
	q.push(root);
	q.push(NULL);
	while(!q.empty())
	{
		node* f = q.front();
		if(f==NULL)
		{
			cout<<endl;
			q.pop();
			if(!q.empty())
				q.push(NULL);
		}
		else
		{
		cout<<f->data<<" ";
		q.pop();
	
	if(f->left)
	{
		q.push(f->left);
	}
	if(f->right)
	{
		q.push(f->right);
	}
	}
}
}
int count(node*root)
{
	if(root==NULL)
		return 0;
	return 1+count(root->left)+count(root->right);
}
int sumOfnodes(node*root)
{
	if(root==NULL)
		return 0;
	return root->data+sumOfnodes(root->left)+sumOfnodes(root->right);
}
int diameter(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	int h1 = height(root->left);
	int h2 = height(root->right);
	int op1 = h1+h2;
	int op2 = diameter(root->left);
	int op3 = diameter(root->right);
	return max(op1,max(op2,op3));
}
int replaceaSum(node *root)
{
	if(root==NULL)
	{
		return 0;
	}
	if(root->left==NULL && root->right==NULL)
	{
		return root->data;
	}

	int leftSsum = replaceaSum(root->left);
	int rightSum=replaceaSum(root->right);
	int temp = root->data;
	root->data = leftSsum+rightSum;
	return temp + root->data; 
}
class hpbal
{
public:
	int height;
	bool balanced;
};
hpbal isbalaced(node*root)
{
	hpbal p;
	if(root==NULL)
	{
		p.height=0;
		p.balanced=true;
	}
	hpbal left = isbalaced(root->left);
	hpbal right = isbalaced(root->right);
	p.height = max(left.height,right.height)+1;
	if(abs(left.height-right.height)<=1 && left.balanced && right.balanced)
	{
		p.balanced = true;
	}
	else
	{
		p.balanced=false;
	}
return p;
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    node* root = buildtree();
   //  printPreorder(root);
   //  cout<<"\n";
   //  printInorder(root);
   // cout<<"\n";
   //  printPostorder(root);
   // cout<<"\n"<<height(root);
    //printLevelwise(root);
    bfs(root);
    //cout<<count(root);
    //cout<<"sum of nodes :"<<sumOfnodes(root);
    //cout<<"\n diameter of tree :"<<diameter(root);
   // replaceaSum(root);
   // bfs(root);
    if(isbalaced(root).balanced)
    {
    	cout<<"balanced";
    }
    else
    {
    	cout<<"not balance";
    }

}