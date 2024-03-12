/*
class Solution {
public:
    vector<int> arr;
    void helper(TreeNode* root){
        arr.push_back(root->val);
        preorderTraversal(root->left);
        preorderTraversal(root->right);
    }
    vector<int> preorderTraversal(TreeNode* root) {
      if(root){  
        helper(root);
      }
      return arr;
    }

};

Time Complexity: O(n)
Space Complexity: O(n)
*/