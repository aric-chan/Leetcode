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
    bool hasPathSumHelper(TreeNode* root, int targetSum, int sumPath) {
        if(!root) return false;
        int sum = sumPath + root->val;
        if(!root->left && !root->right){
            if(targetSum == sum) {
                return true;
            } else {
                return false;
            }
        }
        bool bool_left = false;
        if(root->left) {
            bool_left = hasPathSumHelper(root->left, targetSum, sum);
        }
        bool bool_right = false;
        if(root->right) {
            bool_right = hasPathSumHelper(root->right, targetSum, sum);
        }

        return bool_left || bool_right;
    }
    bool hasPathSum(TreeNode* root, int targetSum) {
        return hasPathSumHelper(root, targetSum, 0);
    }
};