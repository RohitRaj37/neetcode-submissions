class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        int pow = 31 ;
        uint32_t ans = 0 ;
        for(int i = 0 ; i<32 ; i++){
            uint32_t curr = n&1 ;
            n>>=1;
            ans += curr*(1<<(pow--));
        }
        return ans;
    }
};
