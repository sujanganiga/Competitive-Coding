/*

class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        return findSumofLeftLeaves(root,false);
    }

    int findSumofLeftLeaves(TreeNode* root,bool parentLeft){
        if(root==NULL)
            return 0;

        if(root->left==NULL && root->right==NULL && parentLeft){
            return root->val;
        } 
        int sum=0;
        sum+=findSumofLeftLeaves(root->left,true);
        sum+=findSumofLeftLeaves(root->right,false);
        return sum;}
};


*/