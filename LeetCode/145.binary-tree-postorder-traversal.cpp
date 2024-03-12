/*
class Solution {
public:
    vector<int> arr;
    void helper(TreeNode* root){
        postorderTraversal(root->left);
        postorderTraversal(root->right);
        arr.push_back(root->val);

    }
    vector<int> postorderTraversal(TreeNode* root) {
        if(root){
            helper(root);

        }
            return arr;
        
    }
};

tc:O(n);
sc:O(1);
*/