class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n = nums.size();
        int minelidx = min_element(nums.begin(),nums.end())-nums.begin();
        int maxelidx = max_element(nums.begin(),nums.end())-nums.begin();
        int left = min(minelidx,maxelidx);
        int right = max(minelidx,maxelidx);

        int ans=min({left+1+n-right,right+1,n-left});
        return ans;
    }
};