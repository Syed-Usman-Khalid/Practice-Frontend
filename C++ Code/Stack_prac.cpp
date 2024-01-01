#include<iostream>
#include<stack>
using namespace std;

/* 
                    Reverse a string using stack.
int main()
{
    string str = "apple";
    stack<char> s;
    // push elements into a stack.
    for(int i = 0 ; i < str.length() ; i++ )
    {
        char ch = str[i];
        s.push(ch);
    }
    // make a string from a stack 
    string str1 = " ";
    while(! s.empty())
    {
        char ch = s.top();
        str1.push_back(ch);
        s.pop();
    }
    cout<<" result string is "<<str1<<endl;

    return 0;
}
*/

// Question 2 : Delete the middle elements from stack.
void print(int n)
{
    if(n == 0)
    {
        return;
    }
    cout<<"hello\n";
    print(n-1);
}

int main()
{   int m = 5;
    print(m);




    return 0; 
}