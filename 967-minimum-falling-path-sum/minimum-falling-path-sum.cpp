// class Solution {
// public:
//     int f(int i , int j , vector<vector<int>>& matrix,vector<vector<int>>& dp,int n){
//         if(j<0 || j>=n) return INT_MAX;
//         if(i==n-1) return matrix[i][j];

//         int down = f(i+1,j,matrix,dp,n);
//         int left = f(i+1,j-1,matrix,dp,n);
//         int right = f(i+1,j+1,matrix,dp,n);

//         return matrix[i][j]+min({down,left,right});
//     }
//     int minFallingPathSum(vector<vector<int>>& matrix) {
//         int n = matrix.size();
//         int ans = INT_MAX;
//         vector<vector<int>> dp(n,vector<int>(n,-1));
//         for(int j=0;j<n;j++){
//             ans = min(ans,f(0,j,matrix,dp,n));
//         }
//         return ans;
//     }
// };





class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& matrix) {
        int n = matrix.size();
        vector<vector<int>> dp(n,vector<int>(n,-1));
        for(int j=0;j<n;j++){
            dp[n-1][j]=matrix[n-1][j];
        }

        for(int i=n-2;i>=0;i--){
            for(int j=0;j<n;j++){
                int down = dp[i+1][j];

                int left = INT_MAX;
                if(j>0){
                    left = dp[i+1][j-1];
                }

                int right = INT_MAX;
                if(j<n-1){
                    right = dp[i+1][j+1];
                }
                dp[i][j]=matrix[i][j]+min({down,left,right});
            }
        }
        int ans = INT_MAX;
        for(int j=0;j<n;j++){
            ans = min(ans , dp[0][j]);
        }
        return ans;
    }
};