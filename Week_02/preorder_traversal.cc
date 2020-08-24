class Solution {
public:
    vector<int> res;

    // Time complexity: O(N) where N is the number of nodes
    // Space complexity: O(N) worst case
    //                   O(logN) average case
    vector<int> preorderTraversal(TreeNode* root) {
        if (root == NULL) return res;
        res.push_back(root -> val);
        preorderTraversal(root -> left);
        preorderTraversal(root -> right);
        return res;
    }
};
