#include<iostream>
#include<array>
using namespace std ; 


int main()
{
    // int arr[7]={12,56,76,23,18};

    // finding the length or size of an array.
    
    // int size = sizeof(arr)/sizeof(arr[0]);
    
    // Fill whole arrays with same types of numbers. like whole array with 2,65 etc.

    // for (int i = 0 ; i< size ; i++)
    // {
    //     arr[i] = 1;
    // }

    // printing the whole array.

    // for (int i = 0 ; i< size ; i++)
    // {
    //     cout<<arr[i]<<" ";
    // }
    // cout<<"\n";

    // Linear Search 

    // int key = 23;

    // for(int i = 0 ; i < size ; i++ )
    // {
    //     if(arr[i]==key)
    //         cout<<"key is present\n";
    // }

    // Count O's and 1's in an array.

    
    //  Declaration of 2D array.

    int arr[2][2] = {2,3,5,4} ;
    int key = 6;

    // taking input in 2D array  

    // cout<< "enter the 2d array "<<endl;

    // for(int i = 0 ; i<2 ; i++)
    //     {
    //         for(int j = 0 ; j< 2 ;j++)
    //         {
    //             cin>>arr[i][j];
    //         }
    //     }
    //     cout<< endl;

    //  Printing the 2D array. 

    for(int i = 0 ; i<2 ; i++)
        {
            for(int j = 0 ; j< 2 ;j++)
            {
                // cout<<arr[i][j] << " ";
                if (key == arr[i][j])
                    cout<<"found\n";
                else 
                    cout<<"not found\n";

            }
            cout<<endl;
        }


    
    
    return 0;
}