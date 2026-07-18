class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        sort(strs.begin(),strs.end());
        string s = strs[0];
        string t = strs[strs.size()-1];
        int n = s.length();
        int m = t.length();
        int size = min(n,m);
        string ans ="";
        for(int i=0;i<size;i++){
            if(s[i]==t[i]){
                ans.push_back(s[i]);
            }else{
                break;
            }
        }
        return ans;
    }
};