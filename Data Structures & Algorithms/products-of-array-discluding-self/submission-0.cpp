class Solution {
   public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> ans;
        int pr = 1;
        int n = nums.size();
        int z = 0 ;
        for (int i = 0; i < n; i++) {
            pr *= nums[i];
            if(nums[i]==0)z++;
        }
        for (int i = 0; i < n; i++) {
            if(nums[i]==0 && z==1){
                int x = 1 ;
                for(int j = 0 ; j< n ; j++){
                    if(j!=i){
                        x *= nums[j];
                    }
                }
                ans.push_back(x);
                continue;
            }
            if(pr!=0){
                ans.push_back(pr / nums[i]);
            }else{
                ans.push_back(0);
            }
        }
        return ans;
    }
};
