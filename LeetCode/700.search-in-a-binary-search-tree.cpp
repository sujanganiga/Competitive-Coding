/*
class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(!root||root->val==val){
            return root;
        }
        if(root&&root->val>val){
            return searchBST(root->left,val);
        }
        else if(root&&root->val<val){
            return searchBST(root->right,val);
        }
        return root;
        
    }
};
*/