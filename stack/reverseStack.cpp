#include <iostream>
#include <stack>
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
void reverseStack(stack<int> &s)
{
    if(s.empty())
    {
        return;
    }
    int x = s.top();
    s.pop();
    reverseStack(s);
    insertAtBottom(s,x);
 }

int main() {
	// your code goes here
    stack<int>s;
    for(int i=1;i<=5;i++)
    {
            s.push(i);
    }
    reverseStack(s);
    cout<<"Reversed stack \n";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
	return 0;
}

