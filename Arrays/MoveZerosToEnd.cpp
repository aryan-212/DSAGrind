#include <bits/stdc++.h>
using namespace std;
// 2 pointer method
class Solution {
public:
  void moveZeroes(vector<int> &nums) {
    int n = nums.size();
    int j = 0; // Slow pointer to track the position for non-zero elements

    // Iterate through the array with the fast pointer `i`
    for (int i = 0; i < n; i++) {
      // If current element is non-zero, place it at position `j` and increment
      // `j`
      if (nums[i] != 0) {
        swap(nums[i], nums[j]);
        j++;
      }
    }
  }
};
