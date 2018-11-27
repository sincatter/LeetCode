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
    void addTree(vector<string> &srcVec, string srcStr, TreeNode* root){
        if(root->left==NULL&&root->right==NULL)srcVec.push_back(srcStr+to_string(root->val));
        if(root->left!=NULL)addTree(srcVec,srcStr+to_string(root->val)+"->",root->left);
        if(root->right!=NULL)addTree(srcVec,srcStr+to_string(root->val)+"->",root->right);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> res;
        if(root!=NULL)addTree(res,"",root);
        return res;
    }
};