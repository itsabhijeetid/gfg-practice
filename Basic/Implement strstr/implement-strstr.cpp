//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

int strstr(string ,string);

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string a;
        string b;
        
        cin>>a;
        cin>>b;
        
        cout<<strstr(a,b)<<endl;
    }
}

// } Driver Code Ends




//Function to locate the occurrence of the string x in the string s.
int strstr(string s, string x)
{
     //Your code here
    bool ans = false;
    for (int i = 0; i < s.length(); i++) {
        if (s[i] == x[0]) {
            for (int j = 0; j < x.length(); j++) {
                if (s[i+j] == '\0' || s[i+j] != x[j]) {
                    ans = false;
                    break;
                }
                else if(s[i+j] == x[j]) {
                    ans = true;
                }
            }
            if (ans)
                return i;
        }   
    }
    return -1;
}