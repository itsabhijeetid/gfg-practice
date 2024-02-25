//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function template for C++
class Solution{
public:
	// function to return sum of  1, 2, ... n
	long long seriesSum(int n) {
	    // code here
	   return (long long) n*(n+1)/2;
	}
};


//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int n;
        scanf("%d",&n);
        
        Solution obj;
        long long res = obj.seriesSum(n);
        
        cout<<res<<endl;
        
    }
}

// } Driver Code Ends