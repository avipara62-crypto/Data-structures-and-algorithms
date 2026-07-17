class Solution {
public:
    vector<int> transformArray(vector<int>& nums) {
        int n = nums.size();
        vector<int> odd;
        vector<int> even;
        for(int i=0;i<n;i++){
            if(nums[i]%2==0) even.push_back(0);
            else odd.push_back(1);
        }
        even.insert(even.end(),odd.begin(),odd.end());
        return even;
    }
};