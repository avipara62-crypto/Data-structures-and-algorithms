class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        int n = p.length();
        if(s.length()<p.length()) return {};
        unordered_map<char , int> mp;
        unordered_map<char , int> window;
        vector<int> ans;
        for(char c : p){
            mp[c]++;
        }
        int l = 0 , r = n-1;
        for(int i=l;i<=r;i++){
            window[s[i]]++;
        }

        while(r<s.length()){
            if(window == mp) ans.push_back(l);

            window[s[l]]--;
            if(window[s[l]]==0) window.erase(s[l]);

            l++;
            r++;

            if(r<s.length()){
                window[s[r]]++;
            }
        }
        return ans;
    }
};