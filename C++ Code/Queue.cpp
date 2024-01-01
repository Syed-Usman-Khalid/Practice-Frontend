# include<iostream>
#include<vector>
#include<deque>
using namespace std;

int main()
{   
    int k = 2 , n = 5 ;
    int A[] = {-8,2,3,-6,10};
    deque<long long int> dq;
    vector<long long> ans;

    // Process first window of k size

    for(int i = 0 ; i<k ; i++)
    {
        if(A[i] < 0)
        { dq. push_back(i); }
    }

    // Store answer of first k sized window
    if(dq.size() > 0)
    { 
        ans.push_back(A[dq.front()]);
    }
    else
    {
        ans.push_back(0);
    }

    // Process for remaining windows
    for(int i=k ; i<n ; i++)
    {
        // Removal
        if(!dq.empty() && i - dq.front() >= k)
        { dq.pop_front(); }
    
        // addition
        if(A[i] < 0)
        {
            dq.push_back(i);
        }
        // ans store
        if(dq.size() > 0)
        { 
        ans.push_back(A[dq.front()]);
        }
        else
        {
        ans.push_back(0);
        }
    }
    for (int i=0; i<ans.size(); i++)
        cout << ans[i] << ", ";
    
    
    return 0;
}