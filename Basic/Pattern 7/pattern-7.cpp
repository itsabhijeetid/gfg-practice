//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
class Solution {
  public:
    void printTriangle(int n) {
        int c = 1;
        for (int i = 0; i < n; i++) {
            for (int k = 0; k < n-i-1; k++) cout << " ";
            for (int j = 0; j < c; j++) cout << "*";
            c+=2;
            cout << endl;
        }
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;

        Solution ob;
        ob.printTriangle(n);
    }
    return 0;
}
// } Driver Code Ends