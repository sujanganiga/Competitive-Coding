/*

class Solution
{
    public:
    //Function to return the level order traversal of a tree.
    queue<Node *> q;
    vector<int>v;
    vector<int> levelOrder(Node* root)
    {
        q.push(root);
        v.push_back(root->data);
        while(!q.empty()){
            root=q.front();
            q.pop();
            if(root->left){
                v.push_back(root->left->data);
                q.push(root->left);
            }
            if(root->right){
                v.push_back(root->right->data);
                q.push(root->right);
            }
            
        }
        return v;
        
        
      
      
    }
};
*/