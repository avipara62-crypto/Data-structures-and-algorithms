class Solution {
public:
    vector<vector<int>> constructProductMatrix(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<int> vec;

        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                vec.push_back(grid[i][j]);
            }
        }
        int size = vec.size();
        vector<long long> prefix(size);
        vector<long long> suffix(size);
        vector<int> ans(size);

        prefix[0] = 1;
        for(int i=1;i<size;i++){
            prefix[i]=(prefix[i-1]*vec[i-1])%12345;
        }
        
        suffix[size-1]=1;
        for(int i=size-2;i>=0;i--){
            suffix[i]=(suffix[i+1]*vec[i+1])%12345;
        }

        for(int i=0;i<size;i++){
            ans[i]=(prefix[i]*suffix[i])%12345;
        }

        int k =0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                grid[i][j] = ans[k++]; 
            }
        }
        return grid;
    }
};