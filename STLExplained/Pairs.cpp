#include <bits/stdc++.h>
using namespace std;
int main() {
  pair<int, int> p = {1, 3};
  cout << p.first << p.second;
  pair<int, pair<int, int>> p1 = {1, {3, 2}};
  cout << p1.first << " " << p1.second.second << " " << p1.second.first;
  pair<int, int> arr[] = {{1, 2}, {3, 4}, {4, 5}};
  cout << arr[1].second;
}
