//{ Driver Code Starts
//Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    long long sequence(int n){
        #define mod 1000000007
        long long ans = 0;
        int c = 1, val = 1;
        for (int i = 0; i < n; i++) {
            long long p = 1;
            for (int j = 0; j <= i; j++) {
                p*=(val++);
                p%=mod;
            }
            ans+=p;
            ans%=mod;
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N;
        cin>>N;
        
        Solution ob;
        cout<<ob.sequence(N)<<endl;
    }
    return 0;
}
// } Driver Code Ends