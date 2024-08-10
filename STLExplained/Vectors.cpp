#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<int> v;
  v.push_back(1);
  // Adds a number to the back
  v.emplace_back(2);
  // {1,2}
  // Emplace-back is faster than pushback
  // In a vector pair
  vector<pair<int, int>> vec;
  vec.push_back({1, 2});
  vec.emplace_back(1, 2);
  // Container containing 5 instances of 100
  vector<int> v1(5, 100);
  // container with 5 instances of 0s
  vector<int> v2(5);
  // v2 will be a copy of v1
  vector<int> v3(v1);
  // v= {20,80,12,9,100}
  cout << v[0] << " " << v.at(0);
  cout << v.back() << " ";
  // Interation in Vectors
  vector<int>::iterator it = v.begin();
  // v.begin() points directly to the memory
  // *(it) to access the memory
  cout << *(it) << " ";
  it++;
  // Shifts to the next memory
  vector<int>::iterator it2 = v.end();
  // v.end() points to the meory location that points right after the last
  // element and it-- has to be done to use it.
  vector<int>::iterator it1 = v.rend();
  // v.rend() points to the location right before the start of the 1st element
  vector<int>::iterator it3 = v.rbegin();
  // this points to the last element and if incremented,goes to the 2nd last
  // element and so on
  vector<int>::iterator it53 = v.back();
  // points to the back

  // INSERT INTO memory
  vector<int> v(2, 100);
  v.insert(v.begin(), 300);
  // Inserts 300 right at the beginning
  v.insert(v.begin() + 1, 2, 10);
  // Inserts 10 2x after the 1st element
  cout << v.size() v.pop_back();
  // pops out the last element
  // v1-- > {10, 30};
  // v2-- > {40, 60};
  v1.swap(v2); // v1 -> {40,60} and v2 ->{10,30}
  v.clear()    // trims it down to empty vector
               // Returns false if elements are there
      v.empty()
}
