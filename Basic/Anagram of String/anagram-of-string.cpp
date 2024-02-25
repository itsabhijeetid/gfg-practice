//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
const int CHARS = 26;

// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2);

// Driver program to run the case
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string str1,str2;
        cin>>str1>>str2;
        cout << remAnagram(str1, str2);
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


// function to calculate minimum numbers of characters
// to be removed to make two strings anagram
int remAnagram(string str1, string str2)
{
// Your code goes here
    int count = 0;
    unordered_map<int, int> m;
    int n = max(str1.size(), str2.size());
    for (int i = 0; i < n; i++) {
        if (i < str1.size()) m[str1[i]]++;
        if (i < str2.size()) m[str2[i]]--;
    }
    for (auto val:m)
        count+= abs(val.second);
    return count;
}