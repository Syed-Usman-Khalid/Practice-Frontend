#include<iostream>
#include<vector>
using namespace std;

// int findUnique(vector<int> arr)
// {
//     int ans = 0 ;
//     for(int i = 0; i <arr.size(); i++)
//     {
//         ans = ans ^ arr[i];
//     }

//     return ans;
// }

int main()
{
    // // Linear search 
    // int arr[] = {7,5,3,0,9};
    // int key = 15;
    // int flag = 0;
    // for(int i = 0; i< 5 ; i++)
    // {
    //     if(arr[i]==key)
    //     {
    //         flag = 1;
    //     }
    // }
    // if(flag)
    //     cout<<"key is found\n";
    // else 
    //     cout<<"key is not found\n";

    // int n;
    // cout<<"enter the size of element "<<endl;
    // cin>>n;

    // vector <int> arr(n);
    // cout<<"enter the element "<<endl;
    // // taking input
    // for(int i=0; i<arr.size(); i++)
    // {
    //     cin>>arr[i];
    // }

    // int uniqueElement = findUnique(arr);

    // cout<<"Unique element is "<<uniqueElement<<endl;
    // cout<<endl<<"here a output of next problem "<<endl;

    // -------------------------------------------------------------------

    vector<int> arr = {1,2,3,4,6,8};
    vector<int> brr = {3,4,10};
    vector<int> ans;
    
    for(int i=0 ; i<arr.size(); i++)
    {
        for(int j=0 ; j<brr.size(); j++)
        {  
            if(arr[i] == brr[j])
            ans.push_back(arr[i]);
            brr[j] = -1;
        }
        
    }

    for(int i = 0; i<= ans.size(); i++)
    {
        cout<<"the intersection numbers are "<<ans[i]<<endl;
    }



    return 0;
}

