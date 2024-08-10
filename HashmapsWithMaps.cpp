#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cin >> n;
  int arr[n];
  // taking inputs;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  // precompute
  unordered_map<int, int> mpp;
  // map stores all the the values in sorted order
  for (int i = 0; i < n; i++) {
    mpp[arr[i]]++;
  }
  for (auto it : mpp) {
    cout << it.first << "->" << it.second << endl;
  }
  int q;
  cin >> q;
  while (q--) {
    int number;
    cin >> number;
    cout << number << "is" << mpp[number] << "times" << endl;
  }
  return 0;
}
