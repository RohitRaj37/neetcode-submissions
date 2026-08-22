class Solution {
    bool check(int i  , int  n ){
        return (i>=0 && i<=n-1);
    }
public:
    bool canJump(vector<int>& nums) {
       int n = nums.size() ;
       vector<int>vis(n,0);
       queue<int>q;
       q.push(0);
       vis[0] = 1 ; 
       while(!q.empty()){
        int curr = q.front() ;
        q.pop();
        for(int i = 1 ; i<= nums[curr] ; i++){
            if(check(i+curr,n) && vis[i+curr]==0){
                vis[i+curr] = 1 ;
                q.push(i+curr);
            }
        }
       }
       if(vis[n-1]==1)return true;
       return false;
    }
};
