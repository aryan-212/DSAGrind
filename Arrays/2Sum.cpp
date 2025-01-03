#include <iostream> // Include iostream for std::cout and std::endl
#include <unordered_map>
#include <vector>
using namespace std;
class Solution {
public:
  std::vector<int> twoSum(std::vector<int> &nums, int target) {
    std::unordered_map<int, int> numMap; // To store the index of each number
    for (int i = 0; i < nums.size(); ++i) {
      int complement = target - nums[i];
      if (numMap.find(complement) != numMap.end()) {
        return {numMap[complement], i}; // Return indices of the two numbers
      }
      numMap[nums[i]] = i;
    }
    return {};
  }
};
int main() {
  Solution solution;
  std::vector<int> nums = {2, 7, 11, 15, 15};
  int target = 30;
  std::vector<int> result = solution.twoSum(nums, target);
  if (!result.empty()) {
    cout << "Indices: [" << result[0] << ", " << result[1] << "]" << endl;
  } else {
    cout << "No solution found!" << endl;
  }

  return 0;
}
