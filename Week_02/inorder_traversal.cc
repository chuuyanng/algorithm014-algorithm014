class Solution {
public:
    vector<int> res;

    // Time complexity: O(N) where N is the number of nodes
    // Space complexity: O(N) worst case
    //                   O(logN) average case, because when you return from a function, the stack are freed
    //                   the maximum stack depth equals the height of the tree
    vector<int> inorderTraversal(TreeNode* root) {
        if (root == NULL) return res;
        
        inorderTraversal(root -> left);
        res.push_back(root -> val);
        inorderTraversal(root -> right);
        return res;
    }
};
