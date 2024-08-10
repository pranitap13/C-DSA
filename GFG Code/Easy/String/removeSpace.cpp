#include <iostream>
#include <string>
#include <algorithm> // For std::remove

using namespace std;

class Solution {
public:
    string modify(string s) {
        // Using the erase-remove idiom to remove all spaces
        s.erase(remove(s.begin(), s.end(), ' '), s.end());
        return s;
    }
};

int main() {
    Solution solution;

    // Test case 1
    string s1 = "geeks  for geeks";
    cout << "Input: \"" << s1 << "\"" << endl;
    cout << "Output: \"" << solution.modify(s1) << "\"" << endl;

    // Test case 2
    string s2 = "    g f g";
    cout << "Input: \"" << s2 << "\"" << endl;
    cout << "Output: \"" << solution.modify(s2) << "\"" << endl;

    // Test case 3
    string s3 = "  remove all spaces ";
    cout << "Input: \"" << s3 << "\"" << endl;
    cout << "Output: \"" << solution.modify(s3) << "\"" << endl;

    return 0;
}
