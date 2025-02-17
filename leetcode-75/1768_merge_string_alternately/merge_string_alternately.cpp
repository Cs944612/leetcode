#include <string>
#include <iostream>
using namespace std;

class Solution{
  public:
    string mergeAlternately(string word1, string word2) {
      // reserve the exact capacity to avoid multiple alloctions
      string result;
      result.reserve(word1.size() + word2.size());

      int i = 0, j = 0;
     // merge characters alternately 
      while (i < word1.size() && j < word2.size()) {
        result.push_back(word1[i++]);
        result.push_back(word2[j++]);
      }
      // append the remaining chars from word1, if any
      while (i < word1.size()) {
        result.push_back(word1[i++]);
      }
      // append the remaining chars from word2, if any
      while (j < word2.size()) {
        result.push_back(word2[j++]);
      }
      return result;
    }
};


int main() {
    string word1 = "abc";
    string word2 = "xyz";
    Solution sol;
    string mergedString = sol.mergeAlternately(word1, word2);

    cout << "Merged String: " << mergedString << endl;

    return 0;
}
