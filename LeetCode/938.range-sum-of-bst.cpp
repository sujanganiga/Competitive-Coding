/*
/
class Solution {
public:
    int sum=0; 
    int rangeSumBST(TreeNode* root, int low, int high) {
        if(root){
        rangeSumBST(root->left,low,high);
        if(root->val>=low&&root->val<=high){
        sum=sum+root->val;
        }
        rangeSumBST(root->right,low,high);
        }
        else{
            return sum;
        }
     return sum;
    }
};

both time and space complexities are O(N)
*/