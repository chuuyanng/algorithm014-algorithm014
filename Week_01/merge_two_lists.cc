class Solution {
public:
    // time complexity: O(M+N)
    // space complexity: O(M+N)
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
      ListNode* root = new ListNode(0);

      ListNode* cur = root;
      while(l1 != NULL && l2 != NULL) {
        if(l1 -> val < l2 -> val) {
          cur -> next = l1;
          l1 = l1 -> next;
        } else {
          cur -> next = l2;
          l2 = l2 -> next;
        }
        cur = cur -> next;
      }

      if (l1 != NULL) cur -> next = l1;
      if (l2 != NULL) cur -> next = l2;
        
      return root -> next;
    }
};
