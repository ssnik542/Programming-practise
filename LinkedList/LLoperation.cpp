#include <bits/stdc++.h>
using namespace std;
class node{
public:
    int data;
    node *next;
    node(int d)
    {
        data=d;
        next=NULL;
    }

};
// INSERT NODE AT END
void insertNodeAtTail(node* &head,int data)
{
    if(head==NULL)
    {
        head = new node(data);
        return;
    }
    node*temp = head;
    node *newNode = new node(data);
    while(temp->next!=NULL)
        temp=temp->next;
    temp->next = newNode;
    newNode->next=NULL;
}
//INSERT NODE AT THE START
void insertNodeAtStart(node *&head,int data)
{
    if(head==NULL)
    {
        head = new node(data);
        return;
    }
    node *newNode = new node(data);
    newNode->next=head;
    head=newNode;
}
int length(node *head)
{
    int c=0;
    while(head!=NULL)
    {
        c++;
        head=head->next;
    }
     return c;   
}
//INSERT NODE AT MIDDLE
void insertNodeAtMiddle(node*&head,int data,int pos){
    if(head==NULL || pos==0)
    {
      insertNodeAtStart(head,data);
    }
    else if(pos>length(head))
    {
        insertNodeAtTail(head,data);
    }
    else
    {
        int j = 1;
           node *temp = head;
           while(j<=pos-1)
           {
                temp=temp->next;
                j++;
            }
            node *newNode = new node(data);
            newNode->next=temp->next;
            temp->next=newNode;

    }

}
//PRINT THE LINKED LIST
void print(node*head)
{
    while(head!=NULL)
    {
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"NULL";
}
//SEARCH IN THE LINKEDLIST
bool searchNode(node* head,int key)
{
    node* temp =head;
    while(temp!=NULL)
    {
        if(temp->data==key)
        {
            return 1;
        }
        temp=temp->next;
    }
    return 0;
}
// DELETE THE START NODE
void deleteStart(node *&head)
{
    if(head==NULL)
        return;
    node *temp = head->next;
    delete head;
    head =temp;
}
node *takeInput()
{
    int d;
    node*head= NULL;
    while(cin>>d)
    {
        insertNodeAtTail(head,d);
    }
    return head;

}
node* midnode(node*head)
{
    if(head->next=NULL)
    {
        return head;
    }
        node*slow = head;
        node*fast = head->next;
        while(fast!=NULL and fast->next !=NULL)
        {
            fast=fast->next->next;
             slow=slow->next;
        }
        return slow;
}
//reverse the linkes list
void reverseNode(node*&head)
{
     node* current = head;
        node *prev = NULL, *next = NULL;
 
        while (current != NULL) {
            // Store next
            next = current->next;
 
            // Reverse current node's pointer
            current->next = prev;
 
            // Move pointers one position ahead.
            prev = current;
            current = next;
        }
        head = prev;
}
//recursive reverse
node* recReverse(node *head)
{
    if(head->next=NULL)
    {
        return head;
    }

    node* shead = recReverse(head->next);
    node*temp=head->next;
    temp->next = head;  // head->next-next = head
    head->next = NULL;
  
    return shead; 
}
int main()
{
    #ifndef ONLINE_JUDGE
    freopen("itp.txt","r",stdin);
    freopen("op.txt","w",stdout);
    #endif
    node*head=takeInput(); 
     print(head);
     cout<<"\n";
     cout<<midnode(head)->data;
}
