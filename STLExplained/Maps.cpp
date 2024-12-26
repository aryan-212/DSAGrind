#include <bits/stdc++.h>
using namespace std;

int main() {
  // 1. Ordered Hashmap (map)
  map<int, string> ordered_map;

  // Insert key-value pairs
  ordered_map[1] = "One";
  ordered_map[3] = "Three";
  ordered_map[2] = "Two";

  // Access elements by key
  cout << "Ordered Map Elements:\n";
  for (auto &pair : ordered_map) {
    cout << pair.first << " -> " << pair.second << "\n"; // Key -> Value
  }

  // Find an element
  auto it = ordered_map.find(2); // Finds key '2'
  if (it != ordered_map.end()) {
    cout << "Found key 2: " << it->second << "\n";
  } else {
    cout << "Key 2 not found.\n";
  }

  // Erase an element
  ordered_map.erase(3); // Removes key '3'

  // Check if a key exists
  if (ordered_map.count(3)) {
    cout << "Key 3 exists.\n";
  } else {
    cout << "Key 3 does not exist.\n";
  }

  // Iterating using auto
  cout << "Updated Ordered Map:\n";
  for (auto &pair : ordered_map) {
    cout << pair.first << " -> " << pair.second << "\n";
  }

  cout << "\n";

  // 2. Unordered Hashmap (unordered_map)
  unordered_map<int, string> unordered_map;

  // Insert key-value pairs
  unordered_map[1] = "One";
  unordered_map[3] = "Three";
  unordered_map[2] = "Two";

  // Access elements by key
  cout << "Unordered Map Elements:\n";
  for (auto &pair : unordered_map) {
    cout << pair.first << " -> " << pair.second << "\n";
  }

  // Find an element
  auto it_unordered = unordered_map.find(3); // Finds key '3'
  if (it_unordered != unordered_map.end()) {
    cout << "Found key 3: " << it_unordered->second << "\n";
  } else {
    cout << "Key 3 not found.\n";
  }

  // Erase an element
  unordered_map.erase(1); // Removes key '1'

  // Check if a key exists
  if (unordered_map.count(1)) {
    cout << "Key 1 exists.\n";
  } else {
    cout << "Key 1 does not exist.\n";
  }

  // Iterating using auto
  cout << "Updated Unordered Map:\n";
  for (auto &pair : unordered_map) {
    cout << pair.first << " -> " << pair.second << "\n";
  }

  return 0;
}
