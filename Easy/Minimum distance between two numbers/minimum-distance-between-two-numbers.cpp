//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends


class Solution{
  public:
    int minDist(int a[], int n, int x, int y) {
        // code here
        int m = INT_MAX;
        int xi = -1, yi = -1;
        for (int i = 0; i < n; i++) {
            if (a[i] == x)
                xi = i;
            else if (a[i] == y)
                yi = i;
            if (xi != -1 && yi != -1)
                m = min (m,abs(xi-yi));
        }
        if (xi == -1 || yi == -1)
            return -1;
        return m;
    }
};


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        int x, y;
        cin >> x >> y;
        Solution obj;
        cout << obj.minDist(a, n, x, y) << endl;
    }
    return 0;
}

// } Driver Code Ends