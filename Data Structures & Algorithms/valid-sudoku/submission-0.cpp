class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {

        for (int i = 0; i < board.size(); i++) {
            unordered_map<char, int> row;
            unordered_map<char, int> column;

            for (int x = 0; x < board[i].size(); x++) {
                if (board[x][i] != '.') {
                    column[board[x][i]]++;
                }
            }

            for (auto &j : column) {
                if (j.second >= 2) {
                    return false;
                }
            }

            for (int j = 0; j < board[i].size(); j++) {
                if (board[i][j] != '.') {
                    row[board[i][j]]++;
                }
            }

            for (auto &j : row) {
                if (j.second >= 2) {
                    return false;
                }
            }
        }
        for(int i=0; i<9;i++){
            unordered_map<char,int> box;  
            int start_row=(i/3)*3;
            int start_column=(i%3)*3;  
            for(int j=0; j<9; j++){
                int row=start_row+(j/3);
                int column=start_column+(j%3);
                
                if(board[row][column]!='.'){
                    box[board[row][column]]++;
                }

               
            }
            for(auto&k:box){
                if(k.second>=2){
                    return false;
                }
            }
        }

        return true;
    }
};