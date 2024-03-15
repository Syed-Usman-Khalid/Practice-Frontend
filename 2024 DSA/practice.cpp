#include<iostream>
#include<array>
using namespace std ; 


int main()
{
    int arr[7]={12,56,76,23,18};

    // finding the length or size of an array.
    
    int size = sizeof(arr)/sizeof(arr[0]);
    
    // Fill whole arrays with same types of numbers. like whole array with 2,65 etc.

    // for (int i = 0 ; i< size ; i++)
    // {
    //     arr[i] = 1;
    // }

    // printing the whole array.

    for (int i = 0 ; i< size ; i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<"\n";

    // Linear Search 

    // int key = 23;

    // for(int i = 0 ; i < size ; i++ )
    // {
    //     if(arr[i]==key)
    //         cout<<"key is present\n";
    // }

    // Count O's and 1's in an array.

    
    
    return 0;
}