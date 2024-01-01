# include<iostream>
using namespace std;

class Node
{
	public:
	int data;
	Node* next;

	Node(int value)
	{
		this -> data = value;
		this -> next = NULL;
	}
	~Node()
	{
		int value = this -> data;
		// memory free
			if(this -> next != NULL)
			{
				delete next;
				// this -> next = NULL;
			}
		cout << "delete this node having node " << value << endl;
	}
	
};
void insert_h(Node* &head,int d)
{
	// Create a new node that we want to be inserted at head.
	Node* node2 = new Node(d);

	// Insertion at head.
	node2 -> next = head;
	head = node2;
}
void insert_t(Node* &tail,int d)
{
	// Create a new node that we want to be inserted at tail.
	Node* node3 = new Node(d);

	// Insertion at tail.
	tail -> next = node3;
	tail = tail -> next;
}
void insert_m(Node* &head,Node* &tail,int position,int d)
{
	Node* n_t_i = new Node(d);
	Node* temp = head;

	if(position == 1)
	{
		insert_h(head,d);
		return;
	}
	// Create a new node that we want to be inserted at middle.

	int cnt = 1;
	while(cnt < position)
	{
		temp = temp -> next;
		cnt++;
	}
	// Correcting the tail pointer.
	if(temp-> next == NULL)
	{
		insert_t(tail,d);
		return;
	}
	n_t_i -> next = temp -> next;
	temp -> next = n_t_i;

}

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
void deleteNode(int position,Node* &head)
{
	// delete the node that are at first place.
	if(position == 1)
	{
		Node* temp = head;
		head = head -> next; 
		temp -> next =  NULL;
		delete temp;
	}

 	// delete the node that are at first place.

}
int main()
{	
	Node* node1 = new Node(20);
	Node* head = node1;
	Node* temp = node1;
	Node* tail = node1;
	// cout<< node1 -> data<<endl;
	// cout<< node1 -> next << endl;

	insert_h(head,10);
	print(head);
	insert_t(tail,30);
	print(head);
	insert_m(head,tail,3,32);
	print(head);

	cout<<head->data<<endl;
	cout<<tail->data<<endl;

	
	deleteNode(1,head);
	print(head);

	cout<<head->data<<endl;
	cout<<tail->data<<endl;


	return 0;
}













































// #include <iostream>
// using namespace std;

// class Node
// {
// 	public:
// 	int data;
// 	Node* next;

// 	Node(int value)
// 	{
// 		this->data = value;
// 		this-> next = NULL;
// 	}
// };
// void insert_h(Node* &head,int d)
// {
// 	//create a new node 
// 	Node* node2 = new Node(d);
// 	node2->next = head;
// 	head = node2  ;
// }
// void print(Node* &head)
// {
// 	Node* temp = head;
// 	while (temp != NULL)
// 	{
// 		cout<<temp->data<<" ";
// 		temp = temp->next;
// 	}
// 	cout<<endl;
// }
// void insert_t(Node* &tail,int d)
// {
// 	// Create a new node which is added at last of linked list
// 	Node* node2 = new Node (d);
// 	tail->next = node2;
// 	tail = tail->next;
// }
// void insert_m(Node* &tail,Node* &head,int position,int d)
// {
// 	if(position == 1)
// 	{
// 		insert_h(head,d);
// 		return;
// 	}
// 	Node* temp = head;
// 	if(temp->next == NULL)
// 	{
// 		insert_t(tail,d);
// 		// cout<<"the value of tail inside fun"<<tail->data<<endl;
// 		return;
// 	}
// 	int cnt = 1 ;
// 	while(cnt < position-1)
// 	{
// 		temp = temp->next;
// 		cnt++;
// 	}
// 	//creating a node that is inserted.
// 	Node* node_insert = new Node(d);

// 	node_insert -> next = temp -> next;
// 	temp->next = node_insert;
// 	// tail = tail->next;

// }

// int main()
// {
// 	Node* node1 = new Node(12);
// 	// cout<<node1->data<<endl;
// 	// cout<<node1->next<<endl;
// 	Node* head = node1;
// 	Node* tail = node1;

// 	// insert_h(head,64);
// 	// insert_t(tail,44);
// 	print(head);
// 	insert_m(tail,head,2,4);
// 	print(head);
// 	cout<<"after printing"<<endl;

// 	cout<<tail->data<<endl;
// 	cout<<head->data<<endl;
	
// 	return 0;
// }