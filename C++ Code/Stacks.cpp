#include<iostream>

using namespace std;

class Stacks
{
    private:
        int size;
        int top;
        int *arr;
    public:
        Stacks(int ele)
        {
            this -> size = ele;
            arr = new int[size];
            top = -1;
        }

    void push(int element)
    {
        if(size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout<<"Stack Overflow "<<endl;
        }
    }

    void pop() 









    int size0f()
    {   
        cout<<"size of stack is "<<endl;
        return size;
    }




};

int main()
{
    Stacks s(5);
    s.push(43);
    s.push(65);



}