//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends


class Solution
{
    public:
    //Function to find the maximum occurring character in a string.
    char getMaxOccuringChar(string str)
    {
        // Your code here
        unordered_map<char, int> m;
        for (int i = 0; i < str.length(); i++)
            m[str[i]]++;
        int max = INT_MIN;
        char ans = '\0';
        for (auto i:m) {
            if (max == i.second) {
                ans = ans<i.first ? ans:i.first;
            }
            if (max < i.second) {
                max = i.second;
                ans = i.first;
            }
        }
        return ans;
    }

};


//{ Driver Code Starts.

int main()
{
   
    int t;
    cin >> t;
    while(t--)
    {
        string str;
        cin >> str;
    	Solution obj;
        cout<< obj.getMaxOccuringChar(str)<<endl;
    }
}
// } Driver Code Ends