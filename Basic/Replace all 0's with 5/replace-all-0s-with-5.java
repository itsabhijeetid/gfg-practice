//{ Driver Code Starts
import java.util.*;
class Replace{
public static void main(String[] args){
	Scanner sc=new Scanner(System.in);
	int t=sc.nextInt();
	while(t-->0){
		int n=sc.nextInt();
		Solution g=new Solution();
		System.out.println(g.convertFive(n));
	}
}
}
// } Driver Code Ends


/*Complete the function below*/
class Solution{
	public static int convertFive(int n){
        int ans = 0, c = 10;
        while (n!=0) {
            if (n%10==0) ans = 5*c+ans;
            else ans = (n%10)*c + ans;
            c*=10;
            n/=10;
        }
        return ans/10;
    }
}