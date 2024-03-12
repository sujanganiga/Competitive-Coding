/*

class Solution {
public:
     vector<int> ans;
    void inorderTraversalR(TreeNode* root)
    {
        if (!root) return;
        if (root->left) inorderTraversalR(root->left);
        ans.push_back(root->val);
        if (root->right) inorderTraversalR(root->right);
    }
    vector<int> inorderTraversal(TreeNode* root) {
        inorderTraversalR(root);
        return ans;
        
    }
};

Time Complexity: O(n)
Space Complexity: O(n)

*/