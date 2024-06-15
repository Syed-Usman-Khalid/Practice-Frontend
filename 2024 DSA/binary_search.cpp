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

    
    int a = 45;
    if (a > 19)
    cout<<"eligible for vote casting\n";
    else
    cout<<"not eligible for vote casting\n";

    return 0;

}