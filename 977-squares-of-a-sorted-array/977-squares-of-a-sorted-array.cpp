class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int> ans;
        int res = 0;
        for(int i = 0; i<nums.size(); i++){
            res = nums[i]*nums[i];
            ans.push_back(res);
        }
        
        sort(ans.begin(), ans.end());
        return ans;
    }
};