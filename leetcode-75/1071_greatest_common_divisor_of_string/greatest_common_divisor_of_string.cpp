#include <iostream>
#include <numeric>
#include <string>

using namespace std;

class Solution {
public:
    string gcdOfStrings(string str1, string str2) {
        // check if the strings are equal in both order 
        if (str1 + str2 != str2 + str1){
            return "";
        }

        // GCD of the length of the two strings
        int gcd_len = gcd(str1.size(), str2.size());
        // return the substring of length equal to the GCD
        return str1.substr(0, gcd_len);
    }

private:
    // GCD of two number using Euclidian algorithm
    int gcd(int a, int b){
        while(b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }
};

int main() {
    Solution solution;
    cout << solution.gcdOfStrings("ABCABC", "ABC") << endl; // Output: "ABC"
    cout << solution.gcdOfStrings("ABABAB", "ABAB") << endl; // Output: "AB"
    cout << solution.gcdOfStrings("LEET", "CODE") << endl;   // Output: ""
    return 0;
}
