#include <iostream>
using namespace std;
template <typename T>
class Node{
public:
	T data;
	Node<T> *next;

	Node(T data)
	{
		this->data = data;
		next = NULL;
	}

};
template <typename t>
class stack{
	Node<t> *head;
	int siz;
public:
	stack()
	{
		head = NULL;
		siz=0;
	}
	int size()
	{
		return siz;
	}
	bool isempty(){
		return siz ==0;
	}
	void push(t data)
	{
		Node<t> *nn = new Node<t>(data);
		nn->next=head;
		head=nn;
		siz++;
	}
	t pop()
	{
		if(isempty())
		{
			return 0;
		}
		t ans = head->data;
		Node<t> *temp=head;
		head=head->next;
		delete temp;
		siz--;
		return ans;
	}
	t top()
	{
			if(isempty())
			{
				return 0;
			}
			return head->data;
	}

};
int main() {
	// your code goes here
	 #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif

    stack<char> s;
    s.push(100);
    s.push(101);
    s.push(102);
    cout<<s.pop();
    cout<<s.size();
}