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
    int ans = 0 ;
    int dia(TreeNode* root , int x){
        if(root==NULL)return x-1 ;
        int left = dia(root->left , x+1);
        int right = dia(root->right , x+1);
        ans = max(ans,left+right-(2*x));
        return max(left,right);
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        int y = dia(root,0);
        return ans;
    }
};
