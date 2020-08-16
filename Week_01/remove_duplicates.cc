class Solution {
public:
    // time complexity: O(N)
    // space complexity: O(1)
    int removeDuplicates(vector<int>& nums) {
      int size = nums.size();
      if (size <= 1) return size;

      int i = 0;
      int j = i + 1;
      while (j < size) {
        nums[i] == nums[j] ? j++ : nums[++i] = nums[j++];
      }
      return i + 1;
    }
};
