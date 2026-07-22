class Solution {
public:
    int getLeastFrequentDigit(int n) {
        vector<int> count(10,0);
        while (n > 0) {
            count[n % 10]++;
            n /= 10;
        }
        int ans = -1;
        int mn = INT_MAX;
        for (int i = 0; i < 10; i++) {
            if (count[i] > 0 && count[i] < mn) {
                mn = count[i];
                ans = i;
            }
        }
        return ans;
    }
};