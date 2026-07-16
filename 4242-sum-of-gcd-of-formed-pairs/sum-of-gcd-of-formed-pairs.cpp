class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int n = nums.size();
        int l=0;
        vector<int> prefixGcd(n);
        int mx = nums[0];
        for(int i=0;i<n;i++){
            mx = max(mx,nums[i]);
            prefixGcd[i]=gcd(mx,nums[i]);
        }
        sort(prefixGcd.begin(),prefixGcd.end());
        long long sum = 0;
        int low = 0;
        int high = n-1;
        while(low<high){
            sum += gcd(prefixGcd[low],prefixGcd[high]);
            low++;
            high--;
        }
        return sum;
    }
};