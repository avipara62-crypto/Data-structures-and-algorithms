class Solution {
public:
    int divisorSubstrings(int num, int k) {
        string s = to_string(num);
        int n = s.length();
        int cnt = 0;
        int l=0;
        int r = k-1;
        while(r<n){
            int x = stoi(s.substr(l,k));
            if(x!=0 && num % x == 0) cnt++;
            l++;
            r++;
        }
        return cnt;
    }
};