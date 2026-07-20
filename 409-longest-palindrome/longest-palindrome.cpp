// class Solution {
// public:
//     int longestPalindrome(string s) {
//         int n = s.length();
//         unordered_map<char,int> mp;
//         for(char c : s){
//             mp[c]++;
//         }
//         int ans = 0;
//         bool odd = false;
//         for(auto &it : mp){
//             if(it.second % 2 == 0){
//                 ans += it.second;
//             }
//             else{
//                 ans += it.second-1;
//                 odd = true;
//             }
//         }
//         return odd ? ans+1 : ans;
//     }
// };

// OPTIMISATION 
class Solution {
public:
    int longestPalindrome(string s) {
        int freq[128] ={0};
        for(char c : s){
            freq[c]++;
        }
        int ans = 0;
        bool odd = false;
        for(int i=0;i<128;i++){
            if(freq[i] % 2 == 0){
                ans += freq[i];
            }
            else{
                ans += freq[i]-1;
                odd =true;
            }
        }
        if(odd) ans ++;
        return ans;
    }
};