class Solution {
public:
    bool issymmetric(string s){
        if(s.length()%2 != 0) return false;
        int left = 0;
        int right = s.length()-1;
        int leftsum =0;
        int rightsum =0;
        while(left<right){
            leftsum+= s[left]-'0';
            rightsum += s[right]-'0';
            left++;
            right--;
        }
        return leftsum == rightsum;
    }
    int countSymmetricIntegers(int low, int high) {
        int cnt = 0;
        for(int i=low;i<=high;i++){
            string x = to_string(i);
            if(issymmetric(x)) cnt++;
        }
        return cnt;
    }
};