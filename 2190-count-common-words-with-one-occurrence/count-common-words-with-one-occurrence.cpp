class Solution {
public:
    int countWords(vector<string>& words1, vector<string>& words2) {
        unordered_map<string,int> mp1;
        unordered_map<string,int> mp2;
        for(string s:words1){
            mp1[s]++;
        }
        for(string s:words2){
            mp2[s]++;
        }
        int cnt = 0;
        for(auto it:mp1){
            if(it.second == 1 && mp2[it.first]==1) cnt++;
        }
        return cnt;
    }
};