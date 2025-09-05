#include<vector>
#include <iostream>
using namespace std;
template<typename t>
class stack{
	private:
		vector<t>v;
	public:
	void push(t d)
	{
		v.push_back(d);
	}
	bool isempty()
	{
		return v.size()==0;
	}
	void pop()
	{
		if(!isempty())
		{
			v.pop_back();
		}
	}
	t top()
	{
		return v[v.size()-1];
	}
};
int main() {

	 #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
	stack<char>s;
	s.push('a');
	s.push('b');
	s.push('e');
	while(!s.isempty())
	{
		cout<<s.top()<<" ";
		s.pop();
	}
}

