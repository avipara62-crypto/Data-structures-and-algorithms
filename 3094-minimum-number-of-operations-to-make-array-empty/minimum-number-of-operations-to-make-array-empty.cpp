class Solution {
public:
    int minOperations(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> mp;
        for(int x : nums){
            mp[x]++;
        }
        int cnt = 0;
        for(auto &it : mp){
            int freq = it.second;
            if(freq==1) return -1;
            cnt += ceil((double)freq/3);
        }
        return cnt;
    }
};