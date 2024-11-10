#include <iostream>
using namespace std;

int main() {
  int n;
  cout << "Enter n: ";
  cin >> n;

  // Taking input for the array
  cout << "Enter values: ";
  int arr[n];
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  // Taking the left shift value
  int k;
  cout << "Enter the left shift value: ";
  cin >> k;

  // Handle cases where k is greater than n
  k = k % n;

  // Create a temporary array to store the first k elements
  int temp[k];
  for (int i = 0; i < k; i++) {
    temp[i] = arr[i];
  }

  // Shift the remaining elements to the left
  for (int i = 0; i < n - k; i++) {
    arr[i] = arr[i + k];
  }

  // Copy the temporary array elements to the end
  for (int i = 0; i < k; i++) {
    arr[n - k + i] = temp[i];
  }

  // Print the result
  cout << "Array after left shift: ";
  for (int i = 0; i < n; i++) {
    cout << arr[i] << " ";
  }
  cout << endl;

  return 0;
}
