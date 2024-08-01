#include <iostream>
#include <stack>
#include <string>
using namespace std;

class Solution {
public:
    bool isValid(string s) {
        // Create a stack to store the opening brackets
        stack<char> stack;

        // Traverse through each character in the string
        for (char c : s) {
            // If the character is an opening bracket, push it to the stack
            if (c == '(' || c == '{' || c == '[') {
                stack.push(c);
            } 
            // If the character is a closing bracket
            else {
                // If the stack is empty, there is no opening bracket for this closing one
                if (stack.empty()) {
                    return false;
                }

                // Pop the top element and check if it matches the current closing bracket
                char top = stack.top();
                stack.pop();

                // Check if the popped character matches the current closing character
                if ((c == ')' && top != '(') ||
                    (c == '}' && top != '{') ||
                    (c == ']' && top != '[')) {
                    return false;
                }
            }
        }

        // If stack is empty, all opening brackets were matched correctly
        return stack.empty();
    }
};

// Example usage
int main() {
    Solution solution;
    
    // Test case 1
    string s1 = "()";
    cout << (solution.isValid(s1) ? "true" : "false") << endl;  // Output: true

    // Test case 2
    string s2 = "()[]{}";
    cout << (solution.isValid(s2) ? "true" : "false") << endl;  // Output: true

    // Test case 3
    string s3 = "(]";
    cout << (solution.isValid(s3) ? "true" : "false") << endl;  // Output: false

    // Test case 4
    string s4 = "([)]";
    cout << (solution.isValid(s4) ? "true" : "false") << endl;  // Output: false

    // Test case 5
    string s5 = "{[]}";
    cout << (solution.isValid(s5) ? "true" : "false") << endl;  // Output: true

    return 0;
}
