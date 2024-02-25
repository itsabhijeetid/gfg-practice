//{ Driver Code Starts
//Initial Template for C++

#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution
{
    public:
    //Function to perform case-specific sorting of strings.
    string caseSort(string str, int n)
    {
        string temp = str;
        sort (temp.begin(), temp.end());
        string ans = "";
        int i = 0, j = 0;
        for (int k = 0; k < temp.size(); k++) {
            if (temp[k] > 'Z') {
                j = k;
                break;
            }
        }
        for (char s:str) {
            if(s <= 'Z') 
                ans+=temp[i++];
            else 
                ans+=temp[j++];
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
		string str;
		cin>>str;
		Solution obj;
		cout<<obj.caseSort (str, n)<<endl;
	}
}
// } Driver Code Ends