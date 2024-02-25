//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    vector<int> firstAndLast(vector<int> &arr, int n, int x) {
        // Code here
        int low = 0, high = n-1, mid;
        bool flag = false;
        vector<int> ans;
        // first occurrence
        while (low <= high) {
            mid = (low+high)/2;
            if (arr[mid] == x) {
               if (arr[mid-1] == x) {
                   high = mid - 1;
                   continue;
               }
               flag = true;
               break;
            } 
            else if (arr[mid] > x) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (flag)
            ans.push_back(mid);
        // last occurrence
        low = 0; high = n-1; flag = false;
         while (low <= high) {
            mid = (low+high)/2;
            if (arr[mid] == x) {
               if (arr[mid+1] == x) {
                   low = mid + 1;
                   continue;
               }
               flag = true;
               break;
            } 
            else if (arr[mid] > x) {
                high = mid - 1;
            } else {
                low = mid + 1;
            }
        }
        if (flag)
            ans.push_back(mid);
        else
            ans.push_back(-1);
        return ans;
    }
};


//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, x;
        cin >> n >> x;
        vector<int> arr(n);
        for (int i = 0; i < n; i++) {
            cin >> arr[i];
        }

        Solution obj;
        vector<int> ans= obj.firstAndLast(arr, n, x) ;
        for(int i:ans){
            cout<<i<<" ";
        }
        cout<< endl;
    }
    return 0;
}

// } Driver Code Ends