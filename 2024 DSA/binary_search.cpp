#include<iostream>
#include<vector>
using namespace std;

int main()
{
    vector<int> nums = {2,4,6,8,10,12,13};
    int s = 0, key = 11; 
    int e = nums.size();
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(nums[mid] == key)
            cout<<"key is found\n";
        else if(nums[mid] > key)
            e = mid - 1;
        else if(nums[mid] < key)
            s= mid+1;
    }
    cout<<"key found\n";
    return 0;

}