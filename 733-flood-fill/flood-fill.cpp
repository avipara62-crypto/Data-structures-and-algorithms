class Solution {
private:
    void dfs(int row,int col,vector<vector<int>>& ans,vector<vector<int>>& image,int color,int delrow[],int delcol[],int inicolor){
        int n = image.size();
        int m = image[0].size();
        ans[row][col]=color;
        for(int i=0;i<4;i++){
            int neighrow = row + delrow[i];
            int neighcol = col+ delcol[i];
            if(neighrow>=0 && neighrow<n && neighcol>=0 && neighcol<m && image[neighrow][neighcol]==inicolor && ans[neighrow][neighcol] != color){
                dfs(neighrow,neighcol,ans,image,color,delrow,delcol,inicolor);
            }
        }
    }
public:
    vector<vector<int>> floodFill(vector<vector<int>>& image, int sr, int sc, int color) {
        int n = image.size();
        int m = image[0].size();
        int inicolor = image[sr][sc];
        int delrow[]={-1,0,1,0};
        int delcol[]={0,1,0,-1};
        vector<vector<int>> ans = image;
        dfs(sr,sc,ans,image,color,delrow,delcol,inicolor);
        return ans;
    }
};