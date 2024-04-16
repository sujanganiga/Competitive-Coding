/*
class Solution {
public:
 struct subtreeinfo{
    bool isbst;
    int minv;
    int maxv;
    int sum;
 };

 subtreeinfo  sa(TreeNode * root,int &maxbst){
    if(!root){
        return{true,INT_MAX,INT_MIN,0};
    }
    subtreeinfo lefti=sa(root->left,maxbst);
    subtreeinfo righti=sa(root->right,maxbst);
    if(lefti.isbst&&righti.isbst&&lefti.maxv<root->val&&righti.minv>root->val){
        int current=lefti.sum+righti.sum+root->val;
        maxbst=max(current,maxbst);
        return{true,min(root->val,lefti.minv),max(root->val,righti.maxv),current};
    }
    else{
        return {false,0,0,0};
    }
 }

public:
  int maxSumBST(TreeNode* root) {
    int maxbst = 0;  // Renamed from res
    sa(root, maxbst);
    return maxbst;
  }
};

 both time and space complexities are O(N).

*/