#include <iostream>
#include <algorithm> // For std::reverse

using namespace std;

class Solution {
public:
    string revStr(string s) {
        // Using the reverse function from the algorithm library
        reverse(s.begin(), s.end());
        return s;
    }
};

int main() {
    Solution solution;

    // Test case 1
    string s1 = "GeeksforGeeks";
    cout << "Input: \"" << s1 << "\"" << endl;
    cout << "Output: \"" << solution.revStr(s1) << "\"" << endl;

    // Test case 2
    string s2 = "HelloWorld";
    cout << "Input: \"" << s2 << "\"" << endl;
    cout << "Output: \"" << solution.revStr(s2) << "\"" << endl;

    // Test case 3
    string s3 = "12345";
    cout << "Input: \"" << s3 << "\"" << endl;
    cout << "Output: \"" << solution.revStr(s3) << "\"" << endl;

    return 0;
}
