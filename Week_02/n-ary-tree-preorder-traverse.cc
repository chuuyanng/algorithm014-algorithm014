class Solution {
public:
    // time complexity: O(N)
    // space complexity: O(N) in the worst case
    vector<int> preorder(Node* root) {
        vector<int> res = {};
        if (root == NULL) return res;

        stack<Node*> stk;
        stk.push(root);
        
        while(!stk.empty()) {
            auto n = stk.top();
            res.push_back(n -> val);
            stk.pop();

            for (int i = (n -> children).size() - 1; i>=0; --i) {
                stk.push((n -> children)[i]);
            }
        }
        return res;
    }
};
