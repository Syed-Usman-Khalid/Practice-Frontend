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

};

int main()
{
    cout<<"hello world\n";
    Animal cat;

    cout<<cat.gender<<endl;

    return 0;
}