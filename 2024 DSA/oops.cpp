#include<iostream>
using namespace std;

class Animal
{
    public:
    int gender;

    Animal()
    {
        cout<<"you only named your pet \n";
    }

    void speak()
    {
        cout<<"speaking \n";
    }

};

class Dog:public Animal{

    public:

    void speak()
    {
        cout<<"barking \n";
    }

};
int main()
{
    // cout<<"hello world\n";
    Animal cat;

    // cout<<cat.gender<<endl;
    Animal dog;
    Dog bully;
    bully.speak();

    
    return 0;
}