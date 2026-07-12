class Solution {
   public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<string> cop(strs.begin(), strs.end());
        int n = strs.size();
        for (int i = 0; i < n; i++) {
            sort(cop[i].begin(), cop[i].end());
        }
        vector<int> vis(n, 0);
        vector<vector<string>> ans;
        vector<string> v;
        for (int i = 0; i < n; i++) {
            if (vis[i] == 1) continue;
            for (int j = i; j < n; j++) {
                if (cop[i] == cop[j] && vis[j] == 0) {
                    v.push_back(strs[j]);
                    vis[j] = 1;
                }
            }
            ans.push_back(v);
            v.resize(0);
        }
        return ans;
    }
};
