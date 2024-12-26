#include <bits/stdc++.h>
using namespace std;

int main() {
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }

  // Precompute the frequency table
  int hsh[101] = {0}; // Assuming the values in arr are between 0 and 100
  for (int i = 0; i < size; i++) {
    hsh[arr[i]] += 1;
  }

  int q;
  cin >> q;
  while (q--) {
    int number;
    cin >> number;
    cout << number << " has appeared " << hsh[number] << " times\n";
  }

  return 0;
}
