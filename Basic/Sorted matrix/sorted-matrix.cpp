//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    vector<vector<int>> sortedMatrix(int N, vector<vector<int>> Mat) {
        vector<vector<int>> ans;
        int n = Mat[0].size();
        
        vector<int> v;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++)
                v.push_back(Mat[i][j]);
        }
        
        sort (v.begin(), v.end());
        
        vector<int> v1; 
        for (int i = 0; i < v.size(); i++) {
            v1.push_back(v[i]);
            if (v1.size()%n == 0) {
                ans.push_back(v1);
                v1.clear();
            }
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        vector<vector<int>> v(N, vector<int>(N));
        for (int i = 0; i < N; i++)
            for (int j = 0; j < N; j++) cin >> v[i][j];
        Solution ob;
        v = ob.sortedMatrix(N, v);
        for (int i = 0; i < N; i++) {
            for (int j = 0; j < N; j++) cout << v[i][j] << " ";
            cout << "\n";
        }
    }
}
// } Driver Code Ends