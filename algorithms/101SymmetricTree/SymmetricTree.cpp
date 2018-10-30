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
    bool isSymSame(TreeNode* leftNode,TreeNode* rightNode){
        if(leftNode==NULL&&rightNode==NULL){
            return true;
        }
        else if(leftNode==NULL||rightNode==NULL){
            return false;
        }
        else{
            return leftNode->val==rightNode->val&&isSymSame(leftNode->left,rightNode->right)&&isSymSame(leftNode->right,rightNode->left);
        }
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)return true;
        return isSymSame(root->left,root->right);
    }
};