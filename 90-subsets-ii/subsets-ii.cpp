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
        while(index+1<nums.size() && nums[index]==nums[index+1]){
            index++;
        }
        subsequence(index + 1, nums, helper, ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        vector<vector<int>> ans;
        vector<int> helper;
        sort(nums.begin(),nums.end());
        subsequence(0, nums, helper, ans);

        return ans;
    }
};