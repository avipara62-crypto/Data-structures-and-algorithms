class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n = nums.size();
        vector<long long> helper;
        for (int i = 0; i < n; i++) {
            helper.push_back(abs((long long)nums[i]));
        }
        sort(helper.begin(), helper.end());
        long long ans = 0;
        for (int i = 0; i < n; i++) {
            long long square = helper[i] * helper[i];

            if (i >= n / 2) {
                ans += square;
            } else {
                ans -= square;
            }
        }

        return ans;
    }
};