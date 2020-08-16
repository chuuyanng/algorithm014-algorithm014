class Solution {
public:
    // time complexity: O(N)
    // space complexity: O(1)
    void moveZeroes(vector<int>& nums) {
      int size = nums.size();
      int j = 0;
      for (int i = 0; i < size; i++) {
        int num = nums[i];
        if (num != 0) {
          nums[i] = nums[j];
          nums[j++] = num;
        }
      }
    }
};
