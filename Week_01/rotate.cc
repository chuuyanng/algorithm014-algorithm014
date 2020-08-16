class Solution {
public:
    // time complexity: O(N)
    // space complexity: O(1)
    void rotate(vector<int>& nums, int k) {
      int size = nums.size();

      int count = 0;
      for (int start = 0; count < size; start++) {
        int ind = start;
        int prev = nums[ind];
        do {
          int new_ind = (ind + k) % size;
          int tmp = nums[new_ind];
          nums[new_ind] = prev;
          prev = tmp;
          ind = new_ind;
          count++;
        } while (ind != start);
      }
    }
};
