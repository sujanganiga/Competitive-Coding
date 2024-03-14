/*
// } Driver Code Ends
class Solution
{
public:
    vector<int> arr;

    void inorder(Node* root) {
        if (root) {
            inorder(root->left);
            arr.push_back(root->data);
            inorder(root->right);
        }
    }

    bool isBST(Node* root) {
        inorder(root);
        for (int i = 1; i < arr.size(); i++) {
            if (arr[i] <= arr[i - 1]) {
                return false;
            }
        }
        return true;
    }
};

TC:O(N)
SC:O(N)

*/