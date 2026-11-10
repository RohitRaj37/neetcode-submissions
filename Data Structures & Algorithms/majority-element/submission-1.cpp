class Solution {
   public:
    int majorityElement(vector<int>& nums) {
        int curr = nums[0];
        int n = nums.size();
        int count = 1;
        for (int i = 1; i < n; i++) {
            if (curr == nums[i])
                count++;
            else {
                count--;
                if (count < 0) {
                    curr = nums[i];
                    count = 1;
                }
            }
        }
        return curr;
    }
};