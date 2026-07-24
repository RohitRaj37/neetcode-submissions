class Solution {
   public:
    bool isValidSudoku(vector<vector<char>>& board) {
        for (int i = 0; i < 9; i++) {
            map<char, int> mp;
            for (int j = 0; j < 9; j++) {
                if (board[i][j] >= '1' && board[i][j] <= '9') {
                    mp[board[i][j]]++;
                    if (mp[board[i][j]] == 2) return false;
                }
            }
        }
        for (int j = 0; j < 9; j++) {
            map<char, int> mp;
            for (int i = 0; i < 9; i++) {
                if (board[i][j] >= '1' && board[i][j] <= '9') {
                    mp[board[i][j]]++;
                    if (mp[board[i][j]] == 2) return false;
                }
            }
        }
        for (int i = 0; i < 9; i += 3) {
            for (int j = 0; j < 9; j += 3) {
                map<char, int> mp;
                for (int a = i; a < i + 3; a++) {
                    for (int b = j; b < j + 3; b++) {
                        if (board[a][b] >= '1' && board[a][b] <= '9') {
                            mp[board[a][b]]++;
                            if (mp[board[a][b]] == 2) return false;
                        }
                    }
                }
            }
        }
        return true;
    }
};
