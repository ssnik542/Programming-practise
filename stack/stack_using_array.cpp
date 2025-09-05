#include <iostream>
using namespace std;
class stack{
	private:
	int top;
	int *s;
	int cap;
	public:
		stack(){
			s = new int[4];
			cap=4;
			top=0;
		}
	void push(int d)
	{
		if(top==cap)
		{
			//cout<<"Overflow";
			int *st = new int[cap*2];
			for(int i=0;i<cap;i++)
			{
				st[i]=s[i];
			}
			cap *=2;
			delete [] s;
			s=st;
		}
			s[top]=d;
			top++;

	}
	bool isempty()
	{
		return top==0;
	}
	int size()
	{
		return top;
	}
	int pop()
	{
		if(isempty())
		{
			cout<<"underflow";
			return 0;
		}
					top--;
			return s[top];
		
		
	}
	int peek()
	{
		if(isempty())
		{
			cout<<"stack is empty";
			return 0;
		}
			return s[top-1];
	}
};
int main() {
	// your code goes here
	 #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
	stack s;
	s.push(10);
	s.push(20);
	s.push(30);
	s.push(40);
	s.push(50);
	s.push(60);
	cout<<s.size()<<"\n";
	while(!s.isempty())
	{
		cout<<s.peek()<<" ";
		s.pop();
	}
	return 0;
}

