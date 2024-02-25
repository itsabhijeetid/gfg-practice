//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    string longestPalin (string S) {
        int max=0;
        int x=0,y=0;
        string ans="";
        int l=0,h=0;
        for(int i=0;i<S.length();i++){
            l=i;
            h=i+1;
            while(l>=0 && h<S.length() && S[l] == S[h]){
                l--;
                h++;
            }
            l++;
            h--;
            if(max< h-l){ 
                max= h-l; 
                x=l;
                y=h;
            }
        }
        for(int i=0;i<S.length();i++){
                l=i;
                h=i;
                while(l>=0 && h<S.length() && S[l] == S[h]){
                    l--;
                    h++;
                }
                l++;
                h--;
                if(max< h-l){ 
                    max= h-l; 
                    x=l;
                    y=h;
                }
        }
        if (x == 0 && y == 0) {
            ans+=S[0];
            return ans;
        }
        ans=S.substr(x,y-x+1);
        return ans;
    }
};


//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string S; cin >> S;
        
        Solution ob;
        cout << ob.longestPalin (S) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends