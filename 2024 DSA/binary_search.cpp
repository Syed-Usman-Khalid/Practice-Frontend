#include<iostream>
#include<vector>
using namespace std;

int main()
{
    // vector<int> nums = {2,4,6,8,10,12,13};
    // int s = 0, key = 11; 
    // int e = nums.size();
    // int mid = s + (e-s)/2;

    // while(s<e)
    // {
    //     if(nums[mid] == key)
    //         cout<<"key is found\n";
    //     else if(nums[mid] > key)
    //         e = mid - 1;
    //     else if(nums[mid] < key)
    //         s= mid+1;
    // }

    // ----------------- find the pivot element in an rotated sorted array. -----------------

    int arr [5] = {5,7,1,2,3};
    int s = 0;
    int e = 4;
    int mid = s+(e-s)/2;

    while(s<e)
    {
        if(arr[mid] > arr[0])
        {
            s = mid + 1;
        }
        else
        {
            e = mid;
        }
    mid = s+(e-s)/2;
    }
    cout<<" \n pivot element is "<<arr[s]<<endl;

    // ----------------- find the k-difference pairs in an array. -----------------
    int count = 0 , n = 4;
    int ar[4]={1,3,4,5};
    int k = 2 ;
    for(int i=0 ; i<=n ; i++)
    {
        for(int j=i+1; j<=n ; j++)
        {
            if(ar[j]-ar[i]==k)
            count ++;
        }
        cout<<"pair count = "<<count <<endl;   
    }
    cout<<"pairs count = "<<count <<endl;  
    
    // ---------------------Book allocation problem -----------------------------
    
    
    
    

    return 0;


}