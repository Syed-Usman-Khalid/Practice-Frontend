#include<iostream>
using namespace std;

int main()
{
    // Linear search 
    int arr[] = {7,5,3,0,9};
    int key = 15;
    int flag = 0;
    for(int i = 0; i< 5 ; i++)
    {
        if(arr[i]==key)
        {
            flag = 1;
        }
    }
    if(flag)
        cout<<"key is found\n";
    else 
        cout<<"key is not found\n";


    return 0;
}