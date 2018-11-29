/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    int minDepth(TreeNode* root) {
        //if(!root)return 0;
        if(!root)return 0;
        if(!root->left&&!root->right)return 1;
        int left=root->left?minDepth(root->left)+1:INT_MAX;
        int right=root->right?minDepth(root->right)+1:INT_MAX;
        return min(left,right);
    }
};