class Solution {
public:
    int maxOperations(string s) {
        int n = s.length();
        int ones = 0;
        int ans = 0;
        int i=0;
        while(i<n){
            if(s[i]=='0'){
                ans+=ones;
                while(i<n && s[i]=='0'){
                    i++;
                }
            }
            else{
                ones++;
                i++;
            }
        }
        return ans;
    }
};