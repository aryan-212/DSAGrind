#include <bits/stdc++.h>
using namespace std;
int main() {
  int n;
  cout << "Enter n";
  cin >> n;
  cout << "Enter values";
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[n];
  }
  cout << "Enter the left shift value";
  int k;
  cin >> k;
  int temp[k];
  for (int i = 0; i < k; i++) {
    temp[i] = arr[i];
  }
  for (int i = 0; i < n - k; i++) {
    arr[i] = arr[i + k];
  }
  for (int i = n - k; i < n; i++) {
    arr[i] = temp[i - n - k];
  }
  cout << "Array after left shift: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;
}
