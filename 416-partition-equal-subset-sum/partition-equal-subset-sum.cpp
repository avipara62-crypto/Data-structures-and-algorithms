class Solution {
public:
    bool helper(int idx,int target, vector<int>& nums,vector<vector<int>> &dp){
        if(target==0) return true;
        if(idx==0) return nums[0]==target;

        if(dp[idx][target]!=-1) return dp[idx][target];

        bool notTake = helper(idx-1,target,nums,dp);
        bool take = false;
        if(target>=nums[idx]){
            take=helper(idx-1,target-nums[idx],nums,dp);
        }
        return dp[idx][target]=take || notTake;
    }
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int sum = accumulate(nums.begin(), nums.end(), 0);
        if(sum % 2 != 0) return false;
        int target = sum/2;
        vector<vector<int>> dp(n,vector<int>(target+1,-1));
        return helper(n-1,target,nums,dp);
    }
};