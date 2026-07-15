class Solution {
public:
    int valueAfterKSeconds(int n, int k) {
        const int MOD = 1e9 + 7;
        vector<int> vec(n,1);
        while(k>0){
            vector<int> prefix(n);
            prefix[0]=vec[0];
            for(int i=1;i<n;i++){
                prefix[i]=(prefix[i-1]+vec[i])%MOD;
            }
            vec = prefix;
            k--;
        }
        return vec[n-1];
    }
};