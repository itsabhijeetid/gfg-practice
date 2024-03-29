//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution{
  public:
    // arr[] : the input array
    // N : size of the array arr[]
    
    //Function to return length of longest subsequence of consecutive integers.
    int findLongestConseqSubseq(int arr[], int N)
    {
      //Your code here
        unordered_map <int,bool> m;
        int ans = 0;
        for (int i = 0; i < N; i++) 
            m[arr[i]] = true;
        for (int i = 0; i < N; i++) {
            if (m.find(arr[i]-1) != m.end()) {
                m[arr[i]] = false;
            } else {
                int temp = arr[i];
                int c = 0;
                while (m.find(temp) != m.end()) {
                    c++;
                    temp++;
                }
                if (c > ans)
                    ans = c;
            }
        }
        return ans;
    }
};



//{ Driver Code Starts.
 
// Driver program
int main()
{
 int  t,n,i,a[100001];
 cin>>t;
 while(t--)
 {
  cin>>n;
  for(i=0;i<n;i++)
  cin>>a[i];
  Solution obj;
  cout<<obj.findLongestConseqSubseq(a, n)<<endl;
 }
      
    return 0;
}
// } Driver Code Ends