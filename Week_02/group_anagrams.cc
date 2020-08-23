class Solution {
public:
    // Time complexity O(N*K)
    // Space complexity O(N)
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_set<int> seen = {};
        vector<vector<string>> res = {};

        for (int i = 0; i < strs.size(); i++) {
         auto got = seen.find(i);
         
         if (got != seen.end()) continue;

         vector<string> r = {strs[i]};
         for (int j = i + 1; j < strs.size(); j++) {
            bool anagram = isAnagram(strs[i], strs[j]);
            if (anagram) {
                seen.insert(j);
                r.push_back(strs[j]);
            }
          }
          res.push_back(r);
        }
        return res;
    }

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
