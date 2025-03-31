class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        vector<unordered_set<char>> rows(9);
        vector<unordered_set<char>> cols(9);
        vector<unordered_set<char>> squares(9);

        for(int r=0 ; r<9 ; r++){
            for(int c=0 ; c<9 ; c++){
                if(board[r][c] == '.') continue;
                char val = board[r][c];
                int sqindex = (r/3)*3 + (c/3);

                if(rows[r].count(val) || cols[c].count(val) || squares[sqindex].count(val)){
                    return false;
                }

                rows[r].insert(val);
                cols[c].insert(val);
                squares[sqindex].insert(val);
            }
        }
        return true;
    }
};
