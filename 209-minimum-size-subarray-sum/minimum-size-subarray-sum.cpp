class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int l =0,r=0,sum =0, ans = INT_MAX;
        for(r=0;r<nums.size();r++){
            sum += nums[r];
            while(sum>=target){
                ans = min(ans,r-l+1);
                sum-=nums[l];
                l++;
            }
        }
        return (ans==INT_MAX) ? 0 : ans;
    }
};