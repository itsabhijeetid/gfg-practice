//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

public class Main {

    public static void main(String[] args) throws Exception {
        BufferedReader br = new BufferedReader(new InputStreamReader(System.in));
        int tc = Integer.parseInt(br.readLine().trim());
        while (tc-- > 0) {
            String[] inputLine;
            inputLine = br.readLine().trim().split(" ");
            int n = Integer.parseInt(inputLine[0]);
            int[] arr = new int[n];
            inputLine = br.readLine().trim().split(" ");
            for (int i = 0; i < n; i++) {
                arr[i] = Integer.parseInt(inputLine[i]);
            }

            int ans = new Solution().countZeroes(arr, n);
            System.out.println(ans);
        }
    }
}


// } Driver Code Ends


//User function Template for Java

class Solution {
    int countZeroes(int[] arr, int n) {
      int l=0;
      int h=n-1;
      int mid;
      for(int i=0;i<n;i++) {
          mid=(l+h)/2;
          if(arr[mid]==0 && mid>0) {
              if(arr[mid-1]==1) {
                  l=mid+1;
              }
              if(arr[mid-1]==0){
                  h=mid-1;
              }
          }
          if(arr[mid]==1 && mid>0)  {
              l=mid+1;
          }
          if(mid==0 && arr[mid]==0)
            return n;
      }
      return n-h;
    }
}
