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

    cout<<"yes";
    cout<<"i am back";
    cout<<"yes";

    int arr[4][5];
    for(int i = 0 ; i<4 ; i++)
        {
            for(int j = 0 ; j< 5 ;j++)
            {
                cin>>arr[i][j];
            }
        }

    for(int i = 0 ; i<4 ; i++)
        {
            for(int j = 0 ; j< 5 ;j++)
            {
                cout<<arr[i][j];
            }
        }

    
    
    return 0;
}