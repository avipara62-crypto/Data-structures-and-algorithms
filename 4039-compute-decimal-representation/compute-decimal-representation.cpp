class Solution {
public:
    vector<int> decimalRepresentation(int n) {
        string s = to_string(n);
        int size = s.size();
        vector<int> ans;
        int i=0;
        while(n>0){
            int x = n%10;
            if(x!=0){
                ans.push_back(x*pow(10,i));
                i++;
            }
            else {
                i++;
            }
            n=n/10;
        }
        reverse(ans.begin(),ans.end());
            return ans;
    }
};