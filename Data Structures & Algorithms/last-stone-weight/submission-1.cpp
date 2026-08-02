class Solution {
   public:
    int lastStoneWeight(vector<int>& stones) {
        int n = stones.size();
        if(n==1)return stones[0];
        priority_queue<int> pq(stones.begin(), stones.end());
        while (!pq.empty()) {
            int x = pq.top();
            pq.pop();
            int y = pq.top();
            pq.pop();
            if (x > y) {
                pq.push(x - y);
            }
            if (pq.size() == 1) break;
        }
        if (pq.empty() == true) {
            return 0;
        }
        return pq.top();
    }
};
