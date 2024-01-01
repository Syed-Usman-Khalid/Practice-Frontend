
/*
#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* next;
    Node(int value)
    {
        this->data = value;
        this->next = NULL;
    }

};
void print(Node* &head)
{
	Node* temp = head;

	while(temp != NULL)
	{
		cout<<temp -> data<<" ";
		temp = temp -> next;
	}
	cout<<endl;
}
void reverse_LL(Node* &head)
{
    if(head == NULL || head-> next == NULL)
    {
        cout << head -> data << "\n";
    }
    Node* pre = NULL;
    Node* curr = head;
    while(curr != NULL)
    {
    Node* forward = curr -> next;
    curr -> next = pre;
    pre = curr;
    curr = forward;
    }
    head = pre;
}
int length_LL(Node*& head)
{
    int cnt = 0 ;
    Node* temp = head;
    while(temp != NULL)
    {
        cnt++;
        temp = temp -> next;
    }
    return cnt;
}

void insert_h(Node* &head,int d)
{
	// Create a new node that we want to be inserted at head.
	Node* node2 = new Node(d);

	// Insertion at head.
	node2 -> next = head;
	head = node2;
}

int main()
{
    Node* node1 = new Node(32);
    Node* head = node1;

    insert_h(head,68);
    insert_h(head,98);
    print(head);

    reverse_LL(head);
    print(head);

    cout<<"Length of LL is "<<length_LL(head)<<endl;

    return 0;
}

*/

#include<iostream>
#include<map>
using namespace std;

int main()
{
    




    return 0;
}