class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int len = 2, ans = 2;
        for(int i=2;i<nums.size();i++){
            if(nums[i]==nums[i-1]+nums[i-2]){
                len++;
                ans=max(ans,len);
            }else{
                len=2;
            }
        }
        return ans;
    }
};