class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        int n = tasks.size();
        unordered_map<int,int> mp;
        for(int x : tasks){
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