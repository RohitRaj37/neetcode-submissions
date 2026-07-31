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
    int dep(TreeNode* root , int x){
        if(root==NULL)return x;
        int right = dep(root->right,x+1);
        int left = dep(root->left,x+1);
        return max(right,left);
    }
public:
    int maxDepth(TreeNode* root) {
        if(root==NULL)return 0 ;
        return dep(root,0);
    }
};
