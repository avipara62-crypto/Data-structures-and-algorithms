class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        int n = nums.size();
        long long  sum =0;
        for(int i=0;i<k;i++){
            sum += nums[i];
        }
        long long maxsum = sum;
        int l = 0;
        int r = k-1;
        while(r<n-1){
            sum -= nums[l];
            l++;
            r++;
            sum += nums[r];
            maxsum = max(sum,maxsum);
        }
            return (double)maxsum/k;
    }
};