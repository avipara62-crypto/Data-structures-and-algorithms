class Solution {
public:
    vector<vector<int>> findDisappearedNumbers(vector<int>& nums, int lower, int upper) {
        int n = nums.size();

        unordered_map<int,int> mp;
        for(int x : nums){
            mp[x]++;
        }

        vector<int> missing;
        for(int i=lower;i<=upper;i++){
            if(mp.find(i) == mp.end()){
                missing.push_back(i);
            }
        }

        vector<vector<int>> ans; 
        if(missing.empty()) return ans;
        int start = missing[0];
        int end = missing[0];

        for (int i = 1; i < missing.size(); i++) {
            if (missing[i] == end + 1) {
                end = missing[i];
            }
            else {
                ans.push_back({start, end});
                start = missing[i];
                end = missing[i];
            }
        }

        ans.push_back({start, end});

        return ans;
    }
};