#include<bits/stdc++.h>
using namespace std;
#define tc int t; cin>>t; while(t--)
#define ff first
#define ss second
#define ll long long
#define pb push_back
#define pp pop_back
#define hare ios::sync_with_stdio(false);
#define krishna cin.tie(NULL)
class Node{
public:
	string name;
	list<string>nbrs;
	Node(string name){
		this->name =name;
	}
};
class Graph{
	unordered_map<string,Node*>m;
	vector<string>ans;
	public :
	Graph(vector<string> frd)
	{
		for(auto frnd :frd)
		{
			m[frnd]= new Node(frnd);
		}
	}
	void addedege(string x,string y)
	{
		m[x]->nbrs.pb(y);
		m[y]->nbrs.pb(x);
	}
	void print()
	{
		for(auto friendp : m)
		{
			vector<string>v;
			auto f =friendp.first;
			Node *node =friendp.second;
			// cout<<f<<"->";
			for(auto nbr : node->nbrs)
			{
				// cout<<nbr<<",";
				v.pb(nbr);
			}
			if(v.size()==0)
			{
				ans.pb(f);
			}
		}
		if(ans.size()==0)
		{
			cout<<"Friendly Classroom";
		}
		else
		{
		for(auto it:ans)
		{
			cout<<it<<" ";
		}
	}
	}
	bool Graph::isReachable(string s, string d)
{
    // Base case
    if (s == d)
      return true;
 
    // Mark all the vertices as not visited
    bool *visited = new bool[V];
    for (int i = 0; i < V; i++)
        visited[i] = false;
 
    // Create a queue for BFS
    list<int> queue;
 
    // Mark the current node as visited and enqueue it
    visited[s] = true;
    queue.push_back(s);
 
    // it will be used to get all adjacent vertices of a vertex
    list<int>::iterator i;
 
    while (!queue.empty())
    {
        // Dequeue a vertex from queue and print it
        s = queue.front();
        queue.pop_front();
 
        // Get all adjacent vertices of the dequeued vertex s
        // If a adjacent has not been visited, then mark it visited
        // and enqueue it
        for (i = adj[s].begin(); i != adj[s].end(); ++i)
        {
            // If this adjacent node is the destination node, then
            // return true
            if (*i == d)
                return true;
 
            // Else, continue to do BFS
            if (!visited[*i])
            {
                visited[*i] = true;
                queue.push_back(*i);
            }
        }
    }
     
    // If BFS is complete without visiting d
    return false;
}

};
int main()
{
	#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
    hare krishna;
	tc{
		int n,q;
		cin>>n>>q;
		vector<string>fd;
		for(int i=0;i<n;i++)
		{
			string s;
			cin>>s;
			fd.pb(s);
		}
		Graph g(fd);
		for(int i=0;i<q;i++)
		{
			string x,y;
			cin>>x>>y;
			g.addedege(x,y);
		}
		g.print();
		cout<<"\n";
	}
}