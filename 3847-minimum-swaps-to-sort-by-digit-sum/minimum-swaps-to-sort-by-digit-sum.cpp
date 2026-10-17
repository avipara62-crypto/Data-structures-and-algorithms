class Solution {
public:
    int findsum(int n){
        int ans = 0;
        while(n > 0){
            ans += (n%10);
            n/=10;
        }
        return ans;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int,int>> v;
        for(int i=0;i<n;i++){
            v.push_back({nums[i],findsum(nums[i])});
        }
        sort(v.begin(), v.end(), [](pair<int, int> a, pair<int, int> b) {
            if (a.second == b.second) {
                return a.first < b.first;
            }
            return a.second < b.second;
        });
        unordered_map<int, int> pos;

        for (int i = 0; i < n; i++) {
            pos[nums[i]] = i;
        }

        int ans = 0;
        vector<bool> visited(n, false);

        for (int i = 0; i < n; i++) {
            if (visited[i] || pos[v[i].first] == i) {
                visited[i] = true;
                continue;
            }

            int j = i;
            int cycle = 0;

            while (!visited[j]) {
                visited[j] = true;
                j = pos[v[j].first];
                cycle++;
            }

            if (cycle > 1) {
                ans += cycle - 1;
            }
        }

        return ans;
    }
};