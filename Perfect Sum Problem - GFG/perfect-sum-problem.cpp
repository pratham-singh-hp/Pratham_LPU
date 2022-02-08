// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

	public:
	int dp[1001][1001];
    int d(int arr[], int n, int sum, int s){
        if(n<0){
            if(s == sum){
                return 1;
            }
            else{
                return 0;
        }
        }
        else if(dp[n][s] != -1){
            return dp[n][s]%1000000007;
    }
if(arr[n] + s <= sum){
    dp[n][s] = (d(arr, n-1, sum, s+arr[n])%1000000007 + d(arr, n-1, sum, s)%1000000007)%1000000007;
} 
else{
    dp[n][s] = d(arr, n-1, sum, s);
}
return dp[n][s] % 1000000007;
}
	int perfectSum(int arr[], int n, int sum)
	{
        memset(dp, -1, sizeof(dp));
        return d(arr, n-1, sum, 0);
	}
	  
};

// { Driver Code Starts.
int main() 
{
   	
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n, sum;

        cin >> n >> sum;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.perfectSum(a, n, sum) << "\n";
	     
    }
    return 0;
}
  // } Driver Code Ends