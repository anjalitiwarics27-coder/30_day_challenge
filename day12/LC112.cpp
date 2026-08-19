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
    bool hasPathSum(TreeNode* root, int targetSum) {
        // base case : empty node 
        if(root== nullptr) return false;
        if(root->left==nullptr && root->right==nullptr){
            return targetSum ==root->val;
        }
        // recursively check left and right  subtrees with the reduced target sum 
        int remainingSum =targetSum -root->val;
        return hasPathSum(root->left, remainingSum)|| hasPathSum(root->right,remainingSum);
        
    }
};