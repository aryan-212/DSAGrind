
#include <bits/stdc++.h>
using namespace std;
class Solution {
public:
  string shiftingLetters(string s, vector<vector<int>> &shifts) {
    int n = s.length();
    vector<int> shift_diff(n + 1, 0);

    // Apply the shift operations
    for (auto &shift : shifts) {
      int start = shift[0], end = shift[1], direction = shift[2];
      int shift_value = (direction == 1) ? 1 : -1;
      shift_diff[start] += shift_value;
      if (end + 1 < n) {
        shift_diff[end + 1] -= shift_value;
      }
    }

    // Calculate the cumulative shifts
    int total_shift = 0;
    for (int i = 0; i < n; ++i) {
      total_shift += shift_diff[i];
      // Apply the cumulative shift to the character
      int new_char = ((s[i] - 'a' + total_shift) % 26 + 26) % 26 + 'a';
      s[i] = new_char;
    }

    return s;
  }
};
