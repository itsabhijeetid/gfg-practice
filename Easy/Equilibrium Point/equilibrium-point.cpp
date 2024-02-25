//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        // Your code here
        if (n == 1) return 1;
        long long suml = 0, sumr = 0; 
        int i = 0, j = n-1;
        while (i<j) {
            if (suml <= sumr) {
                suml+=a[i];
                ++i;
            }
            if (suml > sumr) {
                sumr+=a[j];
                --j;
            }
        }
        return (suml==sumr and i==j)?i+1:-1;
    }
};


//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends