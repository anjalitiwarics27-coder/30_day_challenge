//               postorder 

class Solution {
private:
     void postorder(TreeNode*root,vector<int>&result){
        if (root==nullptr) return;
        postorder(root->left,result);
        postorder(root->right,result);
        result.push_back(root->val);
     }

public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>result;
        postorder(root,result);
        return result;
        
    }
};