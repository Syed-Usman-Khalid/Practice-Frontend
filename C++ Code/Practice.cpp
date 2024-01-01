#include<iostream>
using namespace std;

class Node
{
    public:
    int data;
    Node* next;

    Node(int val)
    {
        this->data = val;
        this->next = NULL;

    }

};
void insert_h(Node* &head,int d)
{
    // creating a new node
    Node* node2 = new Node(d);
    node2-> next = head;
    head = node2; 

}
void print(Node* &head)
{
    Node* node3 = head ;
    while (node3 != NULL){
        cout<<node3->data<<" ";
        node3 = node3 -> next;
    }
    cout<<endl;
}
// void insert_t(Node* tail,int d)
// {
//     // creating a new node
//     Node* node4 = new Node(d);
//     tail->next = node4;
//     tail = tail->next;
// }
// void insert_m(Node* &head,int p,int d)
// {
//     if(p == 1)
//     {
//         insert_h(head,d);
//         return;
//     }
//     Node* temp = head;
//     int cnt = 1;
//     while(cnt < p-1 )
//     {
//         temp = temp -> next;
//         cnt++;
//     }
//     // create a new node which we want to be inserted
//     Node* n_t_i = new Node(d);

//     n_t_i -> next = temp -> next;
//     temp -> next = n_t_i ;
// }
void reverse(Node * &head)
{
    Node* pre = NULL;
    Node* curr = head;
    Node* forward= curr-> next;

    while(curr != NULL)
    {
        curr->next = pre;
        pre = curr;
        curr = forward;
    }
    head = curr;
}

int main()
{
    Node* node1 = new Node(93);
    Node* head = node1;
    Node* tail = node1;

    insert_h(head,87);
    // insert_t(tail,65);
    // insert_m(head,1,43);
    print(head);

    reverse(head);
    print(head);    

    return 0;

}