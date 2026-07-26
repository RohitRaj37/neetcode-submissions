/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */

class Solution {
   public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        vector<int> v;
        while (curr != NULL) {
            v.push_back(curr->val);
            curr = curr->next;
        }
        ListNode* ans = NULL;
        ListNode* head2 = NULL;
        for (int i = v.size() - 1; i >= 0; i--) {
            ListNode* n = new ListNode(v[i]);
            if (ans == NULL) {
                ans = n;
                head2 = n;
            } else {
                ans->next = n;
                ans = ans->next;
            }
        }
        return head2;
    }
};
