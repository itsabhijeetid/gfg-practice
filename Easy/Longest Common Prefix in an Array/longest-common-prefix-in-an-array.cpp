//{ Driver Code Starts
//Initial template for C++

#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function template for C++

class Solution{
  public:
    
    string longestCommonPrefix (string arr[], int N)
    {
        string ans = "-1";
        int col = min (arr[0].size(), arr[N-1].size());

        for (int i = 0; i < col; i++) {
            for (int j = 0; j < N-1; j++)
                if (arr[j][i] != arr[j+1][i]) return ans;
            if (i == 0) ans = "";
            ans+=arr[0][i];
        }
        return ans;
    }
};

//{ Driver Code Starts.
int main()
{
    int t; cin >> t;
    while (t--)
    {
        int n; cin >> n;
        string arr[n];
        for (int i = 0; i < n; ++i)
            cin >> arr[i];
        
        Solution ob;
        cout << ob.longestCommonPrefix (arr, n) << endl;
    }
}

// Contributed By: Pranay Bansal

// } Driver Code Ends