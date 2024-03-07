//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
bool valid(string str);
int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        cout<<valid(str)<<endl;
    }
    return 0;
}
// } Driver Code Ends


bool valid(string s)
{
    stack<int> st;
    for (char i:s) {
        if (!st.empty() and (i-st.top() == 2 or i-st.top() == 1)) st.pop();
        else st.push(i);
    }
    return !st.size();
}