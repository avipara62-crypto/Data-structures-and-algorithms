class Solution {
public:
    long long maximumSubarraySum(vector<int>& nums, int k) {
        int n = nums.size();
        int l = 0 , r = k;
        unordered_map<int,int> freq;
        long long sum =0;
        for(int i=0;i<k;i++){
            sum += nums[i];
            freq[nums[i]]++;
        }
        long long ans = 0;
        if(freq.size() == k) ans = sum;
        while(r<n){
            sum -= nums[l];
            freq[nums[l]]--;
            if(freq[nums[l]] == 0)
            freq.erase(nums[l]);
            l++;
            sum+=nums[r];
            freq[nums[r]]++;

            if(freq.size()==k)
            ans = max(ans,sum);
            r++;
        }
        return ans;
    }
};