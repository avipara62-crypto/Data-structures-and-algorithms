class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n = nums.size();
        if(n==0) return n;
        sort(nums.begin(),nums.end());
        int ans = 1;
        int cnt = 1;
        for(int i=0;i<n-1;i++){
            if(nums[i+1]-nums[i]==1) cnt++;
            else if(nums[i+1]==nums[i]) continue;
            else {
                cnt = 1;
            }
            ans = max(ans,cnt);
        }

        return ans;

    }
};