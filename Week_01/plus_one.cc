class Solution {
public:
    // time complexity: O(N)
    // space complexity: O(1) or O(N) in the worst case
    vector<int> plusOne(vector<int>& digits) {
      int j = digits.size() - 1;
      digits[j] += 1;

      while (j > 0) {
        if (digits[j] < 10) break;
        digits[j] -= 10;
        digits[j-1] += 1;
        j--;
      }

      if (digits[0] >= 10) {
        digits[0] -= 10;
        vector<int> newDigits = {1};
        newDigits.insert(newDigits.end(), digits.begin(), digits.end());
        return newDigits;
      }
      return digits;
    }
};


