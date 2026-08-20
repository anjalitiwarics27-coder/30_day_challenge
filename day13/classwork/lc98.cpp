class Solution {
public:
    bool validate(TreeNode* root,long long min,long long max ){
        if(root == nullptr) return true ;
        if(root->val<=min or root->val>=max) return false;
        return validate(root->left,min,root->val) && validate(root->right,root->val,max);

    }
    bool isValidBST(TreeNode* root) {
        return validate(root, LLONG_MIN, LLONG_MAX);
    } 
};