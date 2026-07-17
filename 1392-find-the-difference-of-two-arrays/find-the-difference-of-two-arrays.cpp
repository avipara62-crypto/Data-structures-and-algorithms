class Solution {
public:
    vector<vector<int>> findDifference(vector<int>& nums1, vector<int>& nums2) {
        vector<int> one(2001,0);
        vector<int> two(2001,0);

        for(int i=0;i<nums1.size();i++){
            one[nums1[i]+1000]=1;
        }
        for(int i=0;i<nums2.size();i++){
            two[nums2[i]+1000]=1;
        }

        vector<vector<int>> ans(2);
        for(int x : nums1){
            if(two[x+1000]==0 && one[x+1000]==1){
                ans[0].push_back(x);
                one[x+1000]=0;
            }
        }

        for(int x : nums2){
            if(one[x+1000]==0 && two[x+1000]==1){
                ans[1].push_back(x);
                two[x+1000]=0;
            }
        }
            return ans;
    }
};