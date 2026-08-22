class Solution {
public:
    long long maximumHappinessSum(vector<int>& happiness, int k) {
        int n = happiness.size();
        priority_queue<int> pq;
        for(int x : happiness){
            pq.push(x);
        }
        long long ans = 0;
        int count =0;
        while(k--){
            int x = pq.top();
            pq.pop();
            ans+=max(x-count,0);
            count++;
        }
        return ans;
    }
};



// class Solution {
// public:
//     long long maximumHappinessSum(vector<int>& happiness, int k) {
//         int n = happiness.size();
//         sort(happiness.rbegin(),happiness.rend());
//         int count = 0;
//         long long ans = 0;
//         for(int i=0;i<k;i++){
//             ans += max(happiness[i]-count,0);
//             count++;
//         }
//         return ans;
//     }
// };