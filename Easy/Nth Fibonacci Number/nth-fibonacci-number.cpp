//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++
class Solution {
  public:
    long long int nthFibonacci(long long int n, long long int arr[]) {
        if (n < 2) {
            arr[n] = n;
            return n;
        }
        long long int a = 0, b = 0;
        if (arr[n-1] == -1) {
            a = nthFibonacci (n-1, arr);
            arr[n-1] = a;
        }
        else
            a = arr[n-1];
        if (arr[n-2] == -1) {
            b = nthFibonacci (n-2, arr);
            arr[n-2] = b;
        }
        else
            b = arr[n-2];
        return (a + b) % 1000000007;
        
    }
    long long int nthFibonacci(long long int n){
        long long int a = 0, b = 1;
        long long int c = 0;
        while (--n) {
        c = (a + b) % 1000000007;
        a = b;
        b = c;
        }
        return c%1000000007;
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
        cout << ob.nthFibonacci(n) << endl;
    }
    return 0;
}

// } Driver Code Ends