class Solution {
public:
    bool isHappy(int n) {
        set<int>st;
        while(true) {
            int sum = 0;
            int x = n;
            while(x) {
                sum += (x%10)*(x%10);
                x /= 10;
            }
            if(sum == 1)
                return true;
            if(st.count(sum))
                return false;
            st.insert(sum);
            n = sum;
        }
    }
};