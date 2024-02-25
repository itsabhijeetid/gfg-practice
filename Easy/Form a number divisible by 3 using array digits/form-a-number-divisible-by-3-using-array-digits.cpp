//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    int isPossible(int N, int arr[]) {
     int sum=0,r;
     for(int i=0; i<N; i++) {
         if(arr[i]<10) 
            sum=sum+arr[i];
         else {
             int n=arr[i];
             while(n!=0) {
                 r=n%10;
                sum=sum+r;
                 n=n/10;
             }
         }
     }
     if(sum%3==0)
        return 1;
     else
        return 0;
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N;
        cin >> N;
        int arr[N];
        for (int i = 0; i < N; i++) cin >> arr[i];

        Solution ob;
        cout << ob.isPossible(N, arr) << endl;
    }
    return 0;
}
// } Driver Code Ends