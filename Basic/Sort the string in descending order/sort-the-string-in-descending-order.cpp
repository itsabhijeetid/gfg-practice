//{ Driver Code Starts

#include <bits/stdc++.h>
using namespace std;
string ReverseSort(string str);

int main(){
    int t;
    cin >> t;
    while(t--){

        string s;
        cin >> s;
        cout << ReverseSort(s) << endl;
    }
return 0;
}

// } Driver Code Ends

string ReverseSort(string str) {
    
 unordered_map<char,int> m(26);
 for(char i:str)
     m[i]++;
 
 str = "";
 
 for(int i = 25; i >= 0; i--) {
     char f = i+'a';
     if (m[f] > 0)
         for (int j = 0; j < m[f]; j++) str+=f;
 }
 return str;
}
