// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
                int low = 0, high = n;
        while(low  < high){
            int mid = low + (high - low)/2;
            
            bool isBad = isBadVersion(mid);
            
            if(isBad){
                high = mid;
            }else{
                low = mid+1;
            }
        }
        return low;

    }
};