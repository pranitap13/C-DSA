#include <iostream>
#include <string>

//find the index of first occurance of the string
using namespace std;

class Solution {
public:
    int strStr(string haystack, string needle) {
        // Get the lengths of both strings
        int haystackLength = haystack.length();
        int needleLength = needle.length();
        
        // Edge case: If needle is an empty string, return 0
        if (needleLength == 0) {
            return 0;
        }
        
        // Edge case: If haystack is shorter than needle, return -1
        if (haystackLength < needleLength) {
            return -1;
        }

        // Iterate over the haystack to find the first occurrence of needle
        for (int i = 0; i <= haystackLength - needleLength; ++i) {
            // Compare the substring of haystack with needle
            if (haystack.substr(i, needleLength) == needle) {
                return i; // Return the starting index
            }
        }
        
        // If needle is not found, return -1
        return -1;
    }
};

// Test the solution
int main() {
    Solution solution;

    // Test case 1
    string haystack1 = "sadbutsad";
    string needle1 = "sad";
    cout << "Input: haystack = \"" << haystack1 << "\", needle = \"" << needle1 << "\"" << endl;
    int result1 = solution.strStr(haystack1, needle1);
    cout << "Output: " << result1 << endl; // Expected output: 0

    // Test case 2
    string haystack2 = "leetcode";
    string needle2 = "leeto";
    cout << "Input: haystack = \"" << haystack2 << "\", needle = \"" << needle2 << "\"" << endl;
    int result2 = solution.strStr(haystack2, needle2);
    cout << "Output: " << result2 << endl; // Expected output: -1

    return 0;
}
