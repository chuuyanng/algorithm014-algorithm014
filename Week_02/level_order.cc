class Solution {
public:
    vector<vector<int>> res;

    // Time complexity: O(N)
    // Space complexity: O(N) in the worst case
    vector<vector<int>> levelOrder(Node* root) {
        if(root == NULL) {
            return res;
        }
        res.push_back({root -> val});
        vector<Node*> children = root -> children;

        while(children.size() != 0) {
            vector<int> r;
            for (auto c: children) {
              r.push_back(c -> val);
            }
            res.push_back(r);
        
            vector<Node*> grandChildren = {};
            for (auto c: children) {
                for (auto cc: c -> children) {
                    if (c != NULL) grandChildren.push_back(cc);
                }
            }
            children = grandChildren;
        }

        return res;
    }
};
