class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans = INT_MIN; 
        int curr = 0 ;
        int n = nums.size() ;
        for(int i = 0 ; i< n ; i++){
            curr += nums[i] ;
            if(curr<0){
                ans = max(ans,curr);
                curr = 0 ;
            }
            else ans = max(ans,curr);
        }
        return ans;
    }
};
