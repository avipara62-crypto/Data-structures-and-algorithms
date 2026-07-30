class Solution {
public:
        class cmp {
        public:
        bool operator()(pair<int,int>& a, pair<int,int>& b) {
        if (a.first == b.first)
            return a.second < b.second;   // larger value should come first
        return a.first > b.first;         // smaller frequency first
    }
};
    vector<int> frequencySort(vector<int>& nums) {
        unordered_map<int , int> freq;
        for(int x : nums){
            freq[x]++;
        }
        priority_queue<pair<int,int> , vector<pair<int,int>> , cmp > pq;
        for(auto it : freq){
            pq.push({it.second,it.first});
        }
        vector<int> ans;
        while(!pq.empty()){
            auto curr = pq.top();
            while(curr.first > 0){
                ans.push_back(curr.second);
                curr.first -- ;
            }
            pq.pop();
        }
        return ans;
    }
};