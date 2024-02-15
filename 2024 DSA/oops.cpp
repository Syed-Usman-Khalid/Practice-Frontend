#include<iostream>
using namespace std;

// class Animal
// {
//     public:
//     int gender;

//     Animal()
//     {
//         cout<<"you only named your pet \n";
//     }

//     void speak()
//     {
//         cout<<"speaking \n";
//     }

// };

// class Dog:public Animal{

//     public:

//     void speak()
//     {
//         cout<<"barking \n";
//     }

// };
// int main()
// {
//     // cout<<"hello world\n";
//     Animal cat;

//     // cout<<cat.gender<<endl;
//     Animal dog;
//     Dog bully;
//     bully.speak();

    
//     return 0;
// }

// Write a program that defines a shape class with a constructor that gives value to width and height. 
// The define two sub-classes triangle and rectangle, that calculate the area of the shape area ().
// In the main, define two variables a triangle and a rectangle and then call the area() function in
// this two varibles.

class Shape
{
    public:
    int width;
    int height;
    int area;

    // Shape(int w,int h)
    // {
    //     cout<<"i am inside constructor\n";
    //     this-> width = w;
    //     this-> height = h;
    //     int area = width*height ;
    //     // return area;
    //     cout<<area<<endl;
    // }

    void set(int w,int h)
    {
        this-> width = w;
        this-> height = h; 
    }

    
};

// class triangle: public Shape 
// {
//     public:
    


// };

class rectangle: public Shape 
{   
    public:
    int a(int w,int h)
    {
    return  (width*height) ;
        // return area;
        // cout<<area<<endl;/
    }

};


int main()
{
    
    rectangle a;
    a.set(2,5);
    cout<<"the value of area is "<<a.a(2,6)<<endl;

    cout<<" 29 - 1 -24\n" ;
    cout<<" 30 - 1 -24\n" ;
    cout<<" 01 - 2 -24\n" ;
    cout<<"helo";
    cout<<"helo";
    cout<<"helo";
    cout<<"shallow vs deep opy";
    cout<<"shallow ";
    cout<<"shallow ";
    cout<<"----------------";
    cout<<" yes \n";
    cout<<"no ";
    cout<<"i know ";
    cout<<"ikd";
    return 0 ;

}