//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
  public:
    string secFrequent (string arr[], int n)
    {
        unordered_map<string,int> m;
        
        for (int i = 0; i < n; i++)
            m[arr[i]]++;
            
        int c_mx = 0, p_mx = 0;
        string prev = "", current = "";
        
        for (auto val:m) {
            if (val.second > c_mx) {
                p_mx = c_mx;
                c_mx = val.second;
                prev = current;
                current = val.first;
            } else if (val.second > p_mx and val.second < c_mx) {
                p_mx = val.second;
                prev = val.first;
            }
        }
        return prev;
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
        cout << ob.secFrequent (arr, n) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends