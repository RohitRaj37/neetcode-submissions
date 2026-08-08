class Solution {
   public:
    vector<vector<int>> subsets(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> ans;
        for (int i = 0; i < (1 << n); i++) {
            vector<int> v;
            int x = i;
            int j = 0;
            while (x) {
                if (x & 1 == 1) {
                    v.push_back(nums[j]);
                }
                j++;
                x >>= 1;
            }
            ans.push_back(v);
        }
        return ans;
    }
};
