//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to reverse words in a given string.
    string reverseWords(string s) 
    { 
        // code here 
        string ans = "", text = "";
        for (int i = 0; i <= s.length(); i++) {
            if (s[i] != '.') 
                text = text + s[i];
            if (s[i] == '.' || s[i] == '\0') {
                ans = text + "." + ans;
                text = "";
            }
        }
        ans[ans.length()-1] = '\0';
        return ans;
    } 
};


//{ Driver Code Starts.
int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        string s;
        cin >> s;
        Solution obj;
        cout<<obj.reverseWords(s)<<endl;
    }
}
// } Driver Code Ends