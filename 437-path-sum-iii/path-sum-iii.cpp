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
    int countPaths(TreeNode* root, long long targetSum) {
        if (root == NULL) return 0;

        int count = 0;

        if (root->val == targetSum) {
            count++;
        }

        count += countPaths(root->left, targetSum - root->val);
        count += countPaths(root->right, targetSum - root->val);

        return count;
    }

    int pathSum(TreeNode* root, int targetSum) {
        if (root == NULL) return 0;

        int ans = countPaths(root, targetSum);

        ans += pathSum(root->left, targetSum);
        ans += pathSum(root->right, targetSum);

        return ans;
    }
};