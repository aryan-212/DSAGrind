#include <bits/stdc++.h>
using namespace std;

int main() {
  // Example of vector usage
  vector<int> v;
  v.push_back(1);    // Adds 1 to the back of the vector
  v.emplace_back(2); // Adds 2 to the back of the vector (faster than push_back)
  // v = {1, 2}

  // Example with vector of pairs
  vector<pair<int, int>> vec;
  vec.push_back({1, 2});  // Adds a pair using push_back
  vec.emplace_back(1, 2); // Adds a pair using emplace_back (preferred)

  // Creating vectors with initial values
  vector<int> v1(5, 100); // v1 = {100, 100, 100, 100, 100}
  vector<int> v2(5);      // v2 = {0, 0, 0, 0, 0} (default initialized to 0)
  vector<int> v3(v1);     // v3 is a copy of v1

  // Accessing elements
  cout << v[0] << " " << v.at(0) << "\n"; // Access using operator[] and .at()
  cout << v.back() << "\n"; // Prints the last element of the vector

  // Iterators in vectors
  vector<int>::iterator it = v.begin(); // Points to the first element
  cout << *it << "\n"; // Accessing the first element through iterator
  it++;                // Move iterator to the next element

  vector<int>::iterator it_end = v.end(); // Points just after the last element
  // Note: it_end should not be dereferenced directly.

  vector<int>::reverse_iterator it_rend =
      v.rend(); // Points before the first element in reverse
  vector<int>::reverse_iterator it_rbegin =
      v.rbegin(); // Points to the last element

  // Adding elements using insert
  vector<int> v4(2, 100);           // v4 = {100, 100}
  v4.insert(v4.begin(), 300);       // Inserts 300 at the beginning
  v4.insert(v4.begin() + 1, 2, 10); // Inserts two 10s after the first element
  // v4 = {300, 10, 10, 100, 100}

  // Display size and pop elements
  cout << "Size of v4: " << v4.size() << "\n"; // Prints size of vector
  v4.pop_back();                               // Removes the last element

  // Swapping two vectors
  vector<int> v5 = {10, 30};
  vector<int> v6 = {40, 60};
  v5.swap(v6); // v5 = {40, 60}, v6 = {10, 30}

  // Clearing a vector and checking if empty
  v4.clear(); // Empties the vector
  if (v4.empty()) {
    cout << "v4 is empty.\n";
  }

  // auto it notation for when copying is allowed and the values need not be
  // changed
  for (auto it : v) {
    cout << it << " "; // Directly accesses the values in the vector
  }
  cout << "\n";
  // auto it notation for when copying is allowed and the values need to be
  // changed

  for (auto &it : v) {
    it += 1; // Modifies the original elements in the vector
  }

  return 0;
}
