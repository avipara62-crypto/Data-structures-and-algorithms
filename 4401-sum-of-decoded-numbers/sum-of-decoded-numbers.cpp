class Solution {
public:
    long long modPow(long long x, long long y, long long MOD) {
    long long ans = 1;

    while (y > 0) {
        if (y % 2 == 1)
            ans = (ans * x) % MOD;

        x = (x * x) % MOD;
        y = y / 2;
    }

    return ans;
}
    int sumDecoded(vector<long long>& nums) {
        int n = nums.size();
        long long ans = 0;
        const long long MOD = 1e9 + 7;
        for(int i=0;i<n;i++){
            int width = nums[i]%10;
            long long d = nums[i]/10;
            
            string s = to_string(d);

            long long x = stoll(s.substr(0, width));
            long long y = stoll(s.substr(width));

            long long power = modPow(x, y, MOD);
            ans = (ans+power) % MOD;
        }
        return ans;
    }
};