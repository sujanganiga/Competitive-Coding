/*
int sumLeaf(Node* root)
{
    if(!root){
        return 0;
    }
    if(!root->left&&!root->right){
        return root->data;
    }
    else{
        return sumLeaf(root->left)+sumLeaf(root->right);
    }
    // Code here
} 
*/

/*
The provided code appears to be a recursive function that computes the sum of all leaf nodes in a binary tree. The function `sumLeaf` traverses the tree recursively, and when it encounters a leaf node (a node with no children), it adds the value of that leaf node to the sum.

Let's analyze the time and space complexity of this function:

Time Complexity:
- In the worst-case scenario, the function needs to visit every node of the binary tree once to compute the sum of leaf nodes.
- Each node is visited exactly once, and the operations performed at each node are constant time operations.
- Therefore, the time complexity of the function is O(n), where n is the number of nodes in the binary tree.

Space Complexity:
- The space complexity is determined by the recursive calls made during the traversal of the binary tree.
- In the worst case, the function may recursively call itself for each node in the binary tree.
- The maximum depth of the recursive call stack is the height of the binary tree.
- In a balanced binary tree, the height is O(log n), where n is the number of nodes.
- In the worst case of an unbalanced binary tree, the height could be O(n).
- Therefore, the space complexity of the function is O(n) in the worst case due to the recursive call stack.

In summary, the time complexity of the `sumLeaf` function is O(n), and the space complexity is also O(n) in the worst case.

*/