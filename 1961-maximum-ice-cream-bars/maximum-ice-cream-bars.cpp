class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        int n = costs.size();
        int total = 0;
        int cnt = 0;
        sort(costs.begin(),costs.end());
        for(int i=0;i<n;i++){
            total += costs[i];
            if(total>coins) break;
            cnt++;
        }
        return cnt;
    }
};