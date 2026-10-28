class Solution {
public:
    vector<int> findThePrefixCommonArray(vector<int>& A, vector<int>& B) {
        vector<int> ans;
        int n = A.size();
        unordered_map<int,int> mp;
        int cnt = 0;
        for(int i=0;i<n;i++){
            mp[A[i]]++;
            mp[B[i]]++;
            if(A[i]==B[i]) cnt++;
            else {
                if(mp[A[i]]==2) cnt++;
                if(mp[B[i]]==2) cnt++;
            }
            ans.push_back(cnt);
        }
        return ans;
    }
};