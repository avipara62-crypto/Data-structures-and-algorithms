// class Solution {
// public:
//     int minDeletions(string s) {
//         int n = s.length();
//         vector<int> freq(26,0);
//         for(char ch : s){
//             freq[ch-'a']++;
//         }
//         int ans = 0;
//         unordered_set<int> st;
//         for(int i=0;i<26;i++){
//             while(freq[i]>0 && st.find(freq[i]) != st.end()){
//                 freq[i]--;
//                 ans++;
//             }
//             st.insert(freq[i]);
//         }
//         return ans;
//     }
// };




class Solution {
public:
    int minDeletions(string s) {
        int n = s.length();
        vector<int> freq(26,0);
        for(char c : s){
            freq[c-'a']++;
        }
        sort(freq.begin(),freq.end());
        int ans = 0;
        for(int i=24;i>=0;i--){
            if(freq[i]>=freq[i+1]){
                int prev=freq[i];
                freq[i]=max(0,freq[i+1]-1);
                ans += (prev-freq[i]);
            }
        }
        return ans;
    }
};