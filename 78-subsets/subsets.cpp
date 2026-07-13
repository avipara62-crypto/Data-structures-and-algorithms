class Solution {
public:
    void subsequence(int index, vector<int>& nums, vector<int>& helper, vector<vector<int>>& ans) {
        if(index == nums.size()) {
            ans.push_back(helper);
            return;
        }
        helper.push_back(nums[index]);
        subsequence(index + 1, nums, helper, ans);
        helper.pop_back();
        subsequence(index + 1, nums, helper, ans);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> helper;
        subsequence(0, nums, helper, ans);

        return ans;
    }
};