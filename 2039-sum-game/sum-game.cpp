class Solution {
public:
    bool sumGame(string num) {
        int n = num.length();
        int leftknownsum=0;
        int rightknownsum=0;
        int leftqncount = 0;
        int rightqncount=0;
        for(int i=0;i<n;i++){
            if(num[i]=='?'){
                if(i<(n/2)){
                    leftqncount++;
                }
                else{
                    rightqncount++;
                }
            }
            else{
                if(i<(n/2)){
                    leftknownsum += num[i]-'0';
                }
                else{
                    rightknownsum += num[i]-'0';
                }
            }
        }


        int totalqncount = leftqncount+rightqncount;
        if(totalqncount % 2 != 0) return true;

        int left = 2*leftknownsum + 9*leftqncount;
        int right = 2*rightknownsum + 9*rightqncount;

        return left != right;  // alice wins
    }
};