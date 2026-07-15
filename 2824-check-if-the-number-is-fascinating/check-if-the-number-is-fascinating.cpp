class Solution {
public:
    bool isFascinating(int n) {
        vector<int> ans(10,0);
        string s = to_string(n);
        s.append(to_string(2*n));
        s.append(to_string(3*n));
        if(s.length()!=9) return false;
        for(int i=0;i<s.length();i++){
            int x = s[i]-'0';
            ans[x]=1;
        }
        
        if(ans[0]!=0) return false;
        for(int i=1;i<ans.size();i++){
            if(ans[i]!=1) return false;
        }
        return true;

    }
};