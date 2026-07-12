class Solution {
   public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n = nums.size();
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[nums[i]]++;
        }
        vector<pair<int, int>> v;
        for (auto& pair : mp) {
            v.push_back({pair.first, pair.second});
        }
        sort(v.begin(), v.end(), [&](pair<int, int>& a, pair<int, int>& b) {
            if (a.second != b.second) {
                return a.second > b.second;
            } else {
                return true;
            }
        });
        vector<int> ans;
        for (int i = 0; i < k; i++) {
            ans.push_back(v[i].first);
        }
        return ans;
    }
};
