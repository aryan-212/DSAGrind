
#include <bits/stdc++.h>
using namespace std;

int main() {
  cout << "Enter value of n: ";
  int n;
  cin >> n;

  int arr[n];
  cout << "Enter the array values:\n";
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Largest Element
  int la = arr[0];
  for (int i = 1; i < n; i++) {
    if (la < arr[i]) {
      la = arr[i];
    }
  }

  // 2nd largest
  int la1 = INT_MIN;
  for (int i = 0; i < n; i++) {
    if (arr[i] != la && la1 < arr[i]) {
      la1 = arr[i];
    }
  }

  cout << "The largest element is " << la << endl;
  cout << "The second largest element is " << la1 << endl;

  return 0;
}
