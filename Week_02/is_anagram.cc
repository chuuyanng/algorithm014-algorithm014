class Solution {
public:
    // Time complexity: O(M+N)
    // Space complexity: O(M+N) in worst case
    bool isAnagram(string s, string t) {
      unordered_map<char, int> lookup = {};

      for (char c : s) {
        lookup[c]++;
      }
      for (char c : t) {
        lookup[c]--;
      }
      for(const auto& n : lookup ) {
        if(n.second != 0) return false;
      }
      return true;
    }
};
