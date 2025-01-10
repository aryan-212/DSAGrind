
#include <algorithm>
#include <string>
#include <unordered_map>
#include <vector>
using namespace std;

class Solution {
public:
  vector<string> wordSubsets(vector<string> &words1, vector<string> &words2) {
    unordered_map<char, int>
        maxFreq; // Stores max frequency of each character across words2

    // Build the frequency requirement for all words in words2
    for (const string &word : words2) {
      unordered_map<char, int> freq;
      for (char ch : word) {
        freq[ch]++;
      }
      for (const auto &[ch, count] : freq) {
        maxFreq[ch] = max(maxFreq[ch], count);
      }
    }

    // Check each word in words1 against the frequency requirement
    vector<string> result;
    for (const string &word : words1) {
      unordered_map<char, int> freq;
      for (char ch : word) {
        freq[ch]++;
      }

      bool isUniversal = true;
      for (const auto &[ch, count] : maxFreq) {
        if (freq[ch] < count) {
          isUniversal = false;
          break;
        }
      }

      if (isUniversal) {
        result.push_back(word);
      }
    }

    return result;
  }
};
