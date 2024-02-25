//{ Driver Code Starts
//Initial Template for C++
#include <bits/stdc++.h>
#include <unordered_map>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
  public:
    vector<vector<string> > Anagrams(vector<string>& string_list) {
        vector<vector<string>> ans;
        unordered_map<string,int> m; 
        for (int i = 0; i < string_list.size(); i++) {
            vector<string> s;
            string temp = string_list[i];
            sort(temp.begin(), temp.end());
            if(m[string_list[i]] != 0) continue;
            s.push_back(string_list[i]);
            m[string_list[i]] = 1;
            for (int j = i+1; j < string_list.size(); j++) {
                string t = string_list[j];
                sort(t.begin(), t.end());
                if (temp == t) {
                    s.push_back(string_list[j]);
                    m[string_list[j]] = 1;
                }
            }
            ans.push_back(s);
        }
        return ans;
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
        vector<string> string_list(n);
        for (int i = 0; i < n; ++i)
            cin>>string_list[i]; 
        Solution ob;
        vector<vector<string> > result = ob.Anagrams(string_list);
        sort(result.begin(),result.end());
        for (int i = 0; i < result.size(); i++)
        {
            for(int j=0; j < result[i].size(); j++)
            {
                cout<<result[i][j]<<" ";
            }
            cout<<"\n";
        }
    }

    return 0;
}

// } Driver Code Ends