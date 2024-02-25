//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
        string UncommonChars(string A, string B)
        {
            // code here
            unordered_map<char,int> m;
            for (int i = 0; i < A.length(); i++) {
                m[A[i]] = 1;
            }
            for (int i = 0; i < B.length(); i++) {
                if (m[B[i]] == 1)
                    m[B[i]] = 2;
            }
            for (int i = 0; i < B.length(); i++) {
                if (m[B[i]] == 0)
                    m[B[i]] = 1;
            }
            string str = "";
            for (auto i:m) {
                if (i.second == 1)
                    str = str + i.first;
            }
            sort (str.begin(), str.end());
            if (str == "")
                return "-1";
            return str;
        }
};




//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string A,B;
        cin>>A;
        cin>>B;
        Solution ob;
        cout<<ob.UncommonChars(A, B);
        cout<<endl;
    }
    return 0;
}
// } Driver Code Ends