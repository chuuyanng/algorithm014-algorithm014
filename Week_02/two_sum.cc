class Solution {
public:
    // time complexity: O(N)
    // space complexity: O(N)
    vector<int> twoSum(vector<int>& nums, int target) {
      unordered_map<int, int> history = {};
      int size = nums.size();
      for (int i = 0; i < size; i++) {
        int rem = target - nums[i];
        auto got = history.find(rem);
        if (got != history.end()) {
          return {got -> second, i};
        }
        history.insert({nums[i], i});
      }
      return {};
    }
};
