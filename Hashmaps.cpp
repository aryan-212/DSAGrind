#include <bits/stdc++.h>
using namespace std;

int hashquery(int query, int arr[], int size) {
  int hsh[101] = {0}; // Assuming the values in arr are between 0 and 100
  for (int i = 0; i < size; i++) {
    hsh[arr[i]] += 1;
  }
  return hsh[query];
  sdfsdfskdlfjk
}

int main() {
  int size;
  cin >> size;
  int arr[size];
  for (int i = 0; i < size; i++) {
    cin >> arr[i];
  }
  int q;
  cin >> q;
  while (q--) {
    int number;
    cin >> number;
    cout << number << " has appeared " << hashquery(number, arr, size)
         << " times\n";
  }
  return 0;
}
