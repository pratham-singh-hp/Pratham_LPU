class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int n = nums1.size();
        int m = nums2.size();

        vector<int> merged(n+m);
        merge(nums1.begin(),nums1.end(), nums2.begin(),nums2.end(), merged.begin());
        
        int s = merged.size();
        
        int mid = s/2;
        double ans;
        
        if(s%2 == 0){
            ans = ( merged[ mid - 1 ] + merged[ mid ] );
            return ans / 2;
        }
        else{
            ans = merged[mid];
            return ans;
        }
    }
};