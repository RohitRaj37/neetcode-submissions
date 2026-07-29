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
    void trav(TreeNode* root){
        if(root==NULL)return;
        trav(root->left);
        trav(root->right);
        swap(root->left,root->right);
    }
public:
    TreeNode* invertTree(TreeNode* root) {
        trav(root);
        return root;
    }
};
