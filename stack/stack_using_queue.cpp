
#include <iostream>
#include<queue>
using namespace std;
class stack{

    queue<int>q1;
    queue<int>q2;
    public:
    void push(int d)
    {
        if(!q1.empty())
        {
            q1.push(d);
        }
        else
        {
            q2.push(d);
        }
    }
    void pop()
    {
        if(q2.empty())
        {
            while(!q1.empty())
            {
                int front = q1.front();
                q1.pop();
                if(q1.empty())
                {
                    break;
                }
                q2.push(front);
            }
        }
        else
        {
            while(!q2.empty())
            {
                int front = q2.front();
                q2.pop();
                if(q2.empty())
                {
                    break;
                }
                q1.push(front);
            }
        }
    }
    bool empty()
    {
        return q1.empty() && q2.empty();
    }
    int top()
    {
        if(q2.empty())
        {
            while(!q1.empty())
            {
                int front = q1.front();
                q1.pop();
                 q2.push(front);
                if(q1.empty())
                {
                    return front;
                }
            }
        }
        else
        {
            while(!q2.empty())
            {
                int front = q2.front();
                q2.pop();
                q1.push(front);
                if(q2.empty())
                {
                    return front;
                }
            }
        }
        return 0;
    }
};
int main() {
	// your code goes here
    stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
	return 0;
}

