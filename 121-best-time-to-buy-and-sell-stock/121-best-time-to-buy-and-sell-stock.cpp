class Solution {
public:
    int maxProfit(vector<int>& arr) {
         int maxprofit = 0;
        int minsofar = arr[0];
        
        for(int i = 1; i< arr.size(); i++){
            minsofar = min(minsofar, arr[i]);
            int profit = arr[i] - minsofar;
            
            maxprofit = max(maxprofit, profit);
        }
       return maxprofit; 
    }
};