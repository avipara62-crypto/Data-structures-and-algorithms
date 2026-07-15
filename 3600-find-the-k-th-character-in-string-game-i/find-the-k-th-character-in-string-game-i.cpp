class Solution {
public:
    char kthCharacter(int k) {
        string word = "a";
        while(word.length()<=k){
            string ans ="";
            for(int i=0;i<word.length();i++){
                if(word[i]=='z') ans.push_back('a');
                else ans.push_back(word[i]+1);
            }
            word.append(ans);
        }
        return word[k-1];
    }
};