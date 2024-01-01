#include<iostream>

using namespace std;

class Node
{
    public:
    int data;
    Node* pre;
    Node* next;

    Node(int value)
    {
    this -> pre = NULL; 
    this -> data = value;
    this -> next = NULL;
    }
};

void print(Node* & head)
{
    Node* temp = head;
    while(temp != NULL)
    {
        cout<<temp->data<<" ";
        temp = temp-> next;
    }
    cout<<endl;
}

int get_length (Node* &head)
{   
    int length = 0;
    Node* temp = head;
    while(temp != NULL)
    {
        length ++;
        temp = temp-> next;
    }
    return length;
}
void insert_h(Node* &head,int d)
{
    //creating a new node that is inserted at head of doubly L.L.
    Node* node2 = new Node(d);
    node2->next = head;
    head->pre = node2 ->next;
    head = node2;
}

void insert_t(Node* & tail,int d)
{
    //creating a new node that is inserted at tail of doubly L.L.
    Node* node3 = new Node(d);
    tail->next = node3;
    node3->pre = tail->next ;
    tail = node3;
}
void insert_m(Node* &head,Node * & tail,int position ,int d)
{
    if(position == 1)
	{
		insert_h(head,d);
		return;
	}
	Node* temp = head;
	if(temp->next == NULL)
	{
		insert_t(tail,d);
		// cout<<"the value of tail inside fun"<<tail->data<<endl;
		return;
	}
	int cnt = 1 ;
	while(cnt < position-1)
	{
		temp = temp->next;
		cnt++;
	}
	//creating a node that is inserted.
	Node* node_insert = new Node(d);
    node_insert -> next = temp -> next;
    temp -> next ->pre = node_insert -> next;
    temp -> next = node_insert;
    node_insert -> pre = temp;
	
}

int main()
{
    Node* node1 = new Node(10);
    Node* head = node1;
    Node* tail = node1;

    insert_h(head,34);
    print(head);
    
    insert_t(tail,44);
    print(head);

    insert_m(head,tail,3,34);
    print(head);

    return 0;
}