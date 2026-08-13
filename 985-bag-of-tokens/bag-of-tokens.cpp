class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
        int n = tokens.size();
        sort(tokens.begin(),tokens.end());
        int i=0,j=n-1,maxscore=0,score=0;
        while(i<=j){
            if(power>=tokens[i]){
                power-=tokens[i];
                score++;
                i++;
                maxscore=max(maxscore,score);
            }
            else if(score>=1){
                score--;
                power+=tokens[j];
                j--;
            }
            else{
                return maxscore;
            }
        }
        return maxscore;
    }
};