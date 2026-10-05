class Solution {
public:
    int countGoodRotations(vector<int>& nums) {
        int n = nums.size();
        int ans = 0;
        int mid = n/2;
        long long left = 0;
        long long right = 0;
        for(int i=0;i<mid;i++){
            left+=nums[i];
        }
        for(int i=mid;i<n;i++){
            right += nums[i];
        }
        if(left>right) ans++;
        for(int i=0;i<n-1;i++){
            left-=nums[i];
            right+=nums[i];
            left+=nums[(i+mid)%n];
            right -= nums[(i+mid)%n];
            if(left>right) ans++;
        }
        return ans;
    }
};