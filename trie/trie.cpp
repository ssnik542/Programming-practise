#include<bits/stdc++.h>
using namespace std;
class trie;
class Node{
    char data;
    unordered_map<char,Node*>m;
    bool isterminal;
   public:
   Node(char data)
   {
    data=data;
    isterminal=false;
   } 
   friend class trie;
};
class trie{
    Node* root;
public:
    trie()
    {
        root = new Node('\0');
    }
    void insert(string word)
    {
        Node* temp = root;
        for(char ch : word)
        {
            if(temp->m.count(ch)==0)
            {
                Node* n = new Node(ch);
                temp->m[ch]=n;
            }
            temp=temp->m[ch];
        }
        temp->isterminal = true;
    }
    bool search(string word)
    {
         Node* temp = root;
        for(char ch : word)
        {
            if(temp->m.count(ch)==0)
            {
                return false;
            }
            temp=temp->m[ch];
        }
        return temp->isterminal;
    }
};
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    trie t;
    string words[] ={"hello","he","apple","lade","news"};
    for(auto it: words)
    {
        t.insert(it);
    }
    string key;
    cin>>key;
    cout<<t.search(key)<<"\n";

}