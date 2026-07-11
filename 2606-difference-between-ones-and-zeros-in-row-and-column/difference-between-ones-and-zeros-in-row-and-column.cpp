class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        vector<int> rowones(m,0);
        vector<int> colones(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(grid[i][j]==1){
                    rowones[i]++;
                    colones[j]++;
                }
            }
        }
        vector<vector<int>> diff(m,vector<int>(n));
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                diff[i][j]=rowones[i]+colones[j]-(n-rowones[i])-(m-colones[j]);
            }
        }
        return diff;
    }
};