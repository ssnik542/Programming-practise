#include <bits/stdc++.h>
using namespace std;
void insertAtBottom(stack<int> &s,int d)
{
    if(s.empty())
    {
        s.push(d);
        return ;
    }
    int x = s.top();
    s.pop();
    insertAtBottom(s,d);
    s.push(x);

}

int main() {
	// your code goes here
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
    stack<int>s;
    s.push(1);
    s.push(2);
    s.push(3);
    s.push(4);
    insertAtBottom(s,5);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }

	return 0;
}

