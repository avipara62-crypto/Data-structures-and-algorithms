class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int maxi = nums[nums.size()-1];
        unordered_map<int,int> mp;
        for(int x:nums){
            mp[x]++;
        }
        for (int i = nums.size() - 1; i >= 0; i--) {
            if (nums[i] > 0 && mp.find(-nums[i]) != mp.end()) {
                return nums[i];
            }
        }
        return -1;
    }
};