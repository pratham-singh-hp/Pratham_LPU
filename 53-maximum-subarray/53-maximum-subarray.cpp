class Solution {
public:
    int maxSubArray(vector<int>& nums) {
         int i=1,n=nums.size(),sum=nums[0],currsum=nums[0];
        while(i<n){
            currsum=max(currsum+nums[i],nums[i]);
            sum=max(sum,currsum);
            i++;
        }
        return sum;
    }
};