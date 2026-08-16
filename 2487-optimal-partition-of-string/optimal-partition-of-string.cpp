class Solution {
public:
    int partitionString(string s) {
        int n = s.length();
        int cnt = 0;
        vector<int> lastseen(26,-1);
        int start = 0;
        for(int i=0;i<n;i++){
            char ch = s[i];
            if(lastseen[ch-'a']>=start){
                cnt++;
                start=i;
            }
            lastseen[ch-'a']=i;
        }
        return cnt+1;
    }
};