class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        int n = board.size();
        vector<vector<int>>row (9,vector<int>(9,0));
        vector<vector<int>>col (9,vector<int>(9,0));
        vector<vector<int>>box (9,vector<int>(9,0));

        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){

                if (board[i][j] == '.') continue;

                int num=board[i][j]-'1';
                int b = (i/3)*3+(j/3);

                if (row[i][num] == 1 ||
                    col[j][num] == 1 ||
                    box[b][num] == 1) {
                    return false;
                }

                row[i][num] = 1;
                col[j][num] = 1;
                box[b][num] = 1;
            }
        }
        return true;
    }
};         