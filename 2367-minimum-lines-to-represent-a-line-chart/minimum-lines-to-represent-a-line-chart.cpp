class Solution {
public:
    int minimumLines(vector<vector<int>>& stockPrices) {
        sort(stockPrices.begin(),stockPrices.end());
        int n = stockPrices.size();
        if(n==1) return 0;
        int cnt = 1;
        for(int i=1 ; i<n-1 ; i++){
            long long dy1 = stockPrices[i][1] - stockPrices[i-1][1];
            long long dx1 = stockPrices[i][0] - stockPrices[i-1][0];

            long long dy2 = stockPrices[i+1][1] - stockPrices[i][1];
            long long dx2 = stockPrices[i+1][0] - stockPrices[i][0];

            if(dy1*dx2 != dx1*dy2) cnt++;
        }
        return cnt;
    }
};