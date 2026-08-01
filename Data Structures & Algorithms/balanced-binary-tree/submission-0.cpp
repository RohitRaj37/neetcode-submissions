/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
    bool ans = true;
    int dep(TreeNode* root) {
        if (root == NULL) return 0;
        int left = dep(root->left);
        int right = dep(root->right);
        if (abs(left - right) > 1) ans = false;
        return 1 + max(left, right);
    }
public:
    bool isBalanced(TreeNode* root) {
        dep(root);
        return ans;
    }
};
