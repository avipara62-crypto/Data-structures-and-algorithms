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
public:
    vector<vector<int>> ans;
    vector<int> helper;

    void solve( TreeNode* root,int targetSum){
        if(root==NULL) return;
        helper.push_back(root->val);
        if(root->left==NULL && root->right == NULL){
            if(targetSum == root->val){
                ans.push_back(helper);
            }
        }

        solve(root->left,targetSum-root->val);
        solve(root->right,targetSum-root->val);

        helper.pop_back();
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        solve(root,targetSum);
        return ans;
    }
};