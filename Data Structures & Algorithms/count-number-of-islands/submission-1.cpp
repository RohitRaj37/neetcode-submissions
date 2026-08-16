class Solution {
    bool check(int x , int y , int n , int m){
        return (x>=0 && y>=0 && x<n && y<m);
    }
    void bfs(vector<vector<int>>& vis, vector<vector<char>>& grid, int i, int j) {
    queue<pair<int, int>> q;
    int n = grid.size();
    int m = grid[0].size();
    q.push({i, j});
    vis[i][j] = 1;
    int dir[5] = {0, 1, 0, -1, 0};
    while (!q.empty()) {
        auto curr = q.front();
        q.pop();
        for (int k = 0; k < 4; k++) {
            int x = curr.first + dir[k];
            int y = curr.second + dir[k + 1];
            if (check(x, y, n, m) &&
                vis[x][y] == 0 &&
                grid[x][y] == '1') {
                vis[x][y] = 1;
                q.push({x, y});
            }
        }
    }
}

   public:
    int numIslands(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int ans = 0 ;
        vector<vector<int>> vis(n, vector<int>(m, 0));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && vis[i][j] == 0) {
                    bfs(vis, grid, i, j);
                    ans++;
                }
            }
        }
        return ans;
    }
};
