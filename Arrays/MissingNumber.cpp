#include <unordered_map>
#include <vector>
class Solution {
public:
  int missingNumber(std::vector<int> &nums) {
    std::unordered_map<int, bool> unorderedMap;

    // Fill the unordered map with the numbers from the array
    for (int num : nums) {
      unorderedMap[num] = true;
    }

    // Check for the missing number
    for (int i = 0; i <= nums.size(); ++i) {
      if (unorderedMap.find(i) == unorderedMap.end()) {
        return i; // Return the missing number
      }
    }

    return -1; // This line won't be reached in valid input
  }
};
