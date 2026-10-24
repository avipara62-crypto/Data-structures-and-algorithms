class Solution {
public:
    void solve(vector<int>& candidates,int target,vector<vector<int>>& ans,vector<int>& temp,int index){
        if(target==0){
            ans.push_back(temp);
            return;
        }
        if(target<0 || index == candidates.size()){
            return;
        }

        temp.push_back(candidates[index]);
        solve(candidates,target-candidates[index],ans,temp,index);
        temp.pop_back();
        solve(candidates,target,ans,temp,index+1);
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        int n = candidates.size();
        vector<vector<int>> ans;
        vector<int> temp;

        solve(candidates,target,ans,temp,0);

        return ans;
    }
};