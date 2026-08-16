class Solution {
public:
    int products(int i){
        string s = to_string(i);
        int ans = 1;
        for(int j=0;j<s.size();j++){
            ans*=(s[j]-'0');
        }
        return ans;
    }
    int smallestNumber(int n, int t) {
        for(int i=n;;i++){
            int prod = products(i);
            if(prod % t == 0)
            return i;
        }
        return -1;
    }
};