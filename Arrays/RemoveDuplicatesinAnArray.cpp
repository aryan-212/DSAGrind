#include <bits/stdc++.h>
using namespace std;
// BruteForce method :- Add all the values in a set and then print the set
//
int removeDuplicates(vector<int> &arr, int n) {
  int i = 0;
  for (int j = 1; j < n; j++) {
    if (arr[j] != arr[i]) {
      arr[i + 1] = arr[j];
      i++;
    }
  }
  return i + 1;
};
