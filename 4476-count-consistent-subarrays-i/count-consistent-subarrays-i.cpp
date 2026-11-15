class Solution {
public:
    int countConsistent(vector<int>& nums) {
        int n = nums.size();
        int cnt = 0;
        for(int i = 0;i<n;i++){
            for(int j=i;j<n;j++){
                int mini = INT_MAX;
                int xored = nums[i];
                for(int k=i;k<=j;k++){
                    mini=min(mini,nums[k]);
                    xored = xored & nums[k];
                }
                if(xored == mini) cnt++;
            }
        }
        return cnt;
    }
};