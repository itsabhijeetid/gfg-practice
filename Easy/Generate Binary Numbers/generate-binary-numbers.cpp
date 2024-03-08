//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;



// } Driver Code Ends

//Function to generate binary numbers from 1 to N using a queue.
vector<string> generate(int n)
{
    vector<string> ans;
    for (int i = 1; i <= n; i++) {
        string bn = "";
        int x = i;
        while (x > 0) {
            bn = to_string(x%2) + bn;
            x/=2;
        }
        ans.push_back(bn);
    }
    return ans;
}


//{ Driver Code Starts.

int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		vector<string> ans = generate(n);
		for(auto it:ans) cout<<it<<" ";
		cout<<endl;
	}
	return 0;
}
// } Driver Code Ends
