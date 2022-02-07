// { Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


 // } Driver Code Ends

class Solution
{
    public:
    
  
     
        int dp[1001][1001];
        
        int d(int W, int wt[], int val[], int n, int w){
            if(n<0 || w==W){
                return 0;
            }
            else if(dp[w][n] != -1){
                return dp[w][n];
            }
            if(w+wt[n] <= W){
                dp[w][n] = max(d(W,wt,val,n-1,w+wt[n]) + val[n], d(W,wt,val,n-1,w));
            }
            else{
                dp[w][n] = d(W,wt,val,n-1,w);
            }
            return dp[w][n];
        }
    
        int knapSack(int W, int wt[], int val[], int n){
            memset(dp, -1, sizeof(dp));
            return d(W,wt,val,n-1,0);
        }
      
    

};

// { Driver Code Starts.

int main()
 {
    //taking total testcases
    int t;
    cin>>t;
    while(t--)
    {
        //reading number of elements and weight
        int n, w;
        cin>>n>>w;
        
        int val[n];
        int wt[n];
        
        //inserting the values
        for(int i=0;i<n;i++)
            cin>>val[i];
        
        //inserting the weights
        for(int i=0;i<n;i++)
            cin>>wt[i];
        Solution ob;
        //calling method knapSack()
        cout<<ob.knapSack(w, wt, val, n)<<endl;
        
    }
	return 0;
}  // } Driver Code Ends