class Solution {
public:
    int maxCoins(vector<int>& piles) {
        sort(piles.begin(),piles.end());
        int n = piles.size();
        int ans = 0;
        int b = 0;
        int m = n-2;
        while(m>b){
            ans+=piles[m];
            m-=2;
            b++;
        }
        return ans;
    }
};