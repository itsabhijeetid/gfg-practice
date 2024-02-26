//{ Driver Code Starts
//Initial Template for C++

#include <iostream>
using namespace std;


// } Driver Code Ends
//User function Template for C++

int reverseHelper (int n) {
    int rev = n%10;
    while(n/=10) 
        rev = rev*10+(n%10);
    return rev;
}

void reverse_dig(int &a,int &b)
{
    a = reverseHelper(a);
    b = reverseHelper(b);
}
void swap(int &a,int &b)
{
     a = a^b;
     b = a^b;
     a = a^b;
}


//{ Driver Code Starts.

int main() 
{
    int t;
    cin>>t;
    while(t--)
    {
        int a, b;
	    cin>>a>>b;
	
	    reverse_dig(a,b);
	    swap(a,b);
	    cout<<a<<" "<<b<<endl;
    }
	return 0;
}
// } Driver Code Ends
