class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
unordered_map<int,int> m;
int l=-1,r=-1;
for(int i=0;i<nums.size();i++)
{
if(m[target-nums[i]])
{
l=m[target-nums[i]]-1;
r=i;
break;
}
m[nums[i]]=i+1;
}
return {l,r} ;
}
    };
