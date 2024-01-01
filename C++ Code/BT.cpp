#include<iostream> 
#include<queue>
using namespace std;

class Node
{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d)
    {
        this-> data = d;
        this-> left = NULL;
        this->right = NULL;
    }
};

Node* tree(Node * root)
{
    int val;
    cout<<"enter the data "<<endl;
    cin>>val;
    root = new Node(val);

    if(val == -1)
        {
            return NULL;
        }
    
    cout<<"enter the data that you inserted on right side of "<<val <<endl;
    root->right = tree(root->right);

    cout<<"enter the data that you inserted on left side of "<<val<<endl;
    root->left = tree(root->left);

    return root;
}
void levelordertraversal(Node* root)
{
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty())
    {
        Node * temp = q.front();
        q.pop();
        if(temp == NULL)
        {
            cout<<endl;
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        else 
        {
            cout<<temp ->data <<" ";
            if(temp -> left)
            {
                q.push(temp -> left);
            }
            if(temp -> right)
            {
                q.push(temp -> right);
            }
        }   
    }
}

int main()
{
    Node* root = NULL ; 
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    root = tree(root);

    levelordertraversal(root);

    return 0;
}
