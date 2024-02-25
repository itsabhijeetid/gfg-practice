//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
    int thirdLargest(int arr[], int n)
    {
         //Your code here
         if (n < 3)
            return -1;
         for (int j = 0; j < 3; j++) {
             for (int i = 0; i < n-1-j; i++) {
                 if (arr[i] > arr[i+1]) 
                    swap (arr[i], arr[i+1]);
             }      
        }
        return arr[n-3];
    }

};


//{ Driver Code Starts.
 
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
	    int n;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	   Solution obj;
	    cout<<obj.thirdLargest(a,n)<<endl;
    }
}   
// } Driver Code Ends