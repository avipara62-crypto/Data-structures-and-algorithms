class Solution {
public:
    bool hasSameDigits(string s) {
        while(s.length()!=2){
            string temp ="";
            for(int i=0;i<s.length()-1;i++){
                int x =(s[i]-'0' + s[i+1]-'0')%10;
                temp += char(x+'0');
            }
            s=temp;
        }
        return s[0]==s[1];
    }
};