class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
        vector<int> freq(26,0);
        for(char c : chars){
            freq[c-'a']++;
        }
        int ans = 0;
        
        for(string word : words){
            vector<int> cnt(26,0);
            for(char c : word){
                cnt[c-'a']++;
            }
                bool possible = true;
                for(int i=0;i<26;i++){
                    if(cnt[i]>freq[i]){
                    possible = false;
                    break;
                }
            }    
                if(possible) ans+= word.length();
            }
        return ans;
    }
};