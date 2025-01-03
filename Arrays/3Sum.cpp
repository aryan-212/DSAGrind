
#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
  vector<vector<int>> threeSum(vector<int> &nums) {
    vector<vector<int>> res;
    sort(nums.begin(), nums.end()); // Sort the input array

    for (int i = 0; i < nums.size(); ++i) {
      // Skip duplicate elements
      if (i > 0 && nums[i] == nums[i - 1])
        continue;

      int l = i + 1, r = nums.size() - 1; // Two pointers
      while (l < r) {
        int threeSum = nums[i] + nums[l] + nums[r];

        if (threeSum > 0) {
          --r; // Move right pointer to the left
        } else if (threeSum < 0) {
          ++l; // Move left pointer to the right
        } else {
          // Add the triplet to the result
          res.push_back({nums[i], nums[l], nums[r]});

          // Skip duplicate elements
          while (l < r && nums[l] == nums[l + 1])
            ++l;
          while (l < r && nums[r] == nums[r - 1])
            --r;

          ++l;
          --r;
        }
      }
    }
    return res;
  }
};

int main() {
  Solution solution;

  // Example input
  vector<int> nums = {16, -4, 0, -12, 2, 2};

  // Call threeSum method
  vector<vector<int>> result = solution.threeSum(nums);

  // Print the result
  for (const auto &triplet : result) {
    cout << "[";
    for (size_t i = 0; i < triplet.size(); ++i) {
      cout << triplet[i];
      if (i < triplet.size() - 1)
        cout << ", ";
    }
    cout << "]\n";
  }

  return 0;
}
