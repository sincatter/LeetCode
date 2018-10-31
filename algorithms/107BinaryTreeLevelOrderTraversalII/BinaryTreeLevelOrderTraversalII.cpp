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
    void leO(TreeNode* root,int level,vector<vector<int>> &res){
        if(root!=NULL){
            if(res.size()<=level){
                res.push_back({});
            }
            res[level].push_back(root->val);
            leO(root->left,level+1,res);
            leO(root->right,level+1,res);
        }
    }
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> res={};
        leO(root,0,res);
        reverse(res.begin(),res.end());
        return res;
    }
};