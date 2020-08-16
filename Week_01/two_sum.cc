class Solution {
public:
    // time complexity: O(N*N)
    // space complexity: O(1)
    vector<int> twoSum(vector<int>& nums, int target) {
      int size = nums.size();
      for (int i = 0; i < size; i++) {
        int rem = target - nums[i];
        for (int j = i + 1; j < size; j++) {
          if (nums[j] == rem) 
            return vector<int>{i, j};
        }
      }
      return vector<int>{};
    }
};
