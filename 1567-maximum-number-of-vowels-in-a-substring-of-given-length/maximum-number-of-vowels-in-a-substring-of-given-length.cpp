// class Solution {
// public:
//     int findvowels(string s){
//         int n = s.length();
//         int cnt = 0;
//         for(int i=0;i<n;i++){
//             if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
//                 cnt++;
//             }
//         }
//         return cnt;
//     }
//     int maxVowels(string s, int k) {
//         int n = s.length();
//         int ans = INT_MIN;
//         for(int i=0;i<=n-k;i++){
//             int vowels = findvowels(s.substr(i,k));
//             ans = max(ans,vowels);
//         }
//         return ans;
//     }
// };

// the above code will give tle so better use a sliding window approach


class Solution {
public:
    bool isvowel(char c){
        if(c=='a'|| c=='e'|| c=='i' || c=='o' || c=='u') {
            return true;
        }
        return false;
    }
    int maxVowels(string s, int k) {
        int n = s.length();
        int vowels=0;
        int l=0,r=k-1;
        for(int i=0;i<=r;i++){
            if(isvowel(s[i])) vowels++;
        }
        int ans = vowels;
        r++;
        while(r<n){
            if(isvowel(s[l])) vowels--;
            l++;
            if(isvowel(s[r])) vowels++;
            ans = max(ans,vowels);
            r++;
        }
        return ans;
    }
};
