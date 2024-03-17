//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    vector<string> pattern(int n){
        vector<string> ans(n);
        int x = 1;
        
        for (int i = 0; i < n; i++) {
            int k = i;
            while(k--) ans[i]+="--";
            for (int j = 0; j < n-i; j++) {
                ans[i] += to_string(x++);
                if(j != n-i-1) ans[i]+="*";
            }
        }
        
        for (int i = n-1; i >= 0; i--) {
            int j = n-i; 
            while(j--)
                ans[i] += "*" + to_string(x++);
        }
        return ans;
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        
        Solution ob;
        vector<string> ans = ob.pattern(n);
        for(int i = 0;i < n;i++)
            cout<<ans[i]<<"\n";
    }
    return 0;
}
// } Driver Code Ends