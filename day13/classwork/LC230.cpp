class Solution {
public:
    int kthSmallest(TreeNode* root, int k) {
        stack<TreeNode*>st;
        TreeNode* curr = root;
        while(curr!=nullptr || !st.empty()){
            // 1. push all left nodes to the stack
            while(curr != nullptr){
                st.push(curr);
                curr=curr->left;
            }
            // 2 . process node (pop top)
            curr=st.top();
            st.pop();
            k--;
            // 3. if k reaches 0 , we found the kth smallest 
            if(k==0) return curr ->val;
            // 4. move to right subtree
            curr=curr->right;
        }
        return -1;
         
    }
};