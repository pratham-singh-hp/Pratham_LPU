// { Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

 // } Driver Code Ends
class Solution{

  public:
  int dp[121][12001];
  int d(int arr[], int n, int s1, int s2){
      if(n<0){
          return abs(s1-s2);
      }
      else if(dp[n][s1] != -1){
          return dp[n][s1];
      }
      
      dp[n][s1] = min(d(arr,n-1,s1+arr[n],s2), d(arr,n-1,s1,s2+arr[n]));
      return dp[n][s1];
  }
	int minDifference(int arr[], int n)  { 
	    memset(dp ,-1, sizeof(dp));
	    return d(arr,n-1,0,0);
	} 
};


// { Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        int a[n];
        for(int i = 0; i < n; i++)
        	cin >> a[i];

       

	    Solution ob;
	    cout << ob.minDifference(a, n) << "\n";
	     
    }
    return 0;
}  // } Driver Code Ends