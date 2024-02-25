//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{


	public:
	vector<int> alternateSort(int arr[], int n)
	{
	    // Your code goes here
	    sort (arr, arr+n);
	    vector<int> v;
	    for (int i = 0; i < (n/2); i++) {
	        v.push_back(arr[n-i-1]);
	        v.push_back(arr[i]);
	    }
	    
	    if(n%2!=0){
	        v.push_back(arr[n/2]);
	    }
	    return v;
	}

};
	


//{ Driver Code Starts.

int main() 
{
   	
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
       	
		cin>>n;
		int a[n];
		for(int i=0;i<n;++i)
			cin>>a[i];
       

        Solution ob;
        vector<int> ans = ob.alternateSort(a, n);
        for(auto i:ans)
        	cout << i << " ";
	    cout << "\n";
	     
    }
    return 0;
}


// } Driver Code Ends