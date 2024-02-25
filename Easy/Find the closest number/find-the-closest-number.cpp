//{ Driver Code Starts
#include <iostream>
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution{
    public:
    int findClosest(int arr[], int n, int k) 
    { 
        int low = 0, high = n - 1;
        int diff = INT_MAX, close = -1;
        while (low <= high) {
            int mid = (low+high)/2;
            if (arr[mid] == k )
                return arr[mid];
            if (arr[mid] > k)
                high = mid - 1;
            else
                low = mid + 1;
            if (diff > abs(arr[mid]-k) || (diff == abs(arr[mid]-k) && close < mid)) {
                close = mid;
                diff =  abs(arr[mid]-k);
            }
        }
        return arr[close];
    } 
};


//{ Driver Code Starts.
int main()
{

    int t;
    cin>>t;
    while(t--)
    {
        int n,target;
        cin>>n>>target;
        int arr[n];
        for (int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.findClosest(arr,n,target)<<endl;
    }
}

// } Driver Code Ends