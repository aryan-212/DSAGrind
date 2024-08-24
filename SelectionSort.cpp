// Select minimum and swap values
#include <bits/stdc++.h>
using namespace std;
void insertion_sort(int arr[], int n) {}
void bubble_sort(int arr[], int n) {
  for (int i = n - 1; i >= 0; i--) {
    int didSwap = 0;
    for (int j = 0; j <= i - 1; j++) {
      if (arr[j] > arr[j + 1]) {
        int temp = arr[j];
        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
        didSwap = 1;
      }
    }
    if (didSwap == 0) {
      break;
    }
  }
}
void selection_sort(int arr[], int n) {
  for (int i = 0; i <= n; i++) {
    int mini = i;
    for (int j = i; j <= n - 1; j++) {
      if (arr[j] < arr[mini]) {
        mini = j;
      }
    }
    int temp = arr[mini];
    arr[mini] = arr[i];
    arr[i] = temp;
  }
}
int main() {
  int n;
  cin >> n;
  int arr[n];
  for (int i = 0; i < n; i++)
    cin >> arr[i];
  bubble_sort(arr, n);
  cout << "after bubble sorting" << endl;
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << "\n";
  cout << "After Selection sort\n";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  return 0;
}
