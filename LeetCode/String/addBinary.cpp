#include <iostream>
#include <string>
#include <algorithm> // Include this header for reverse

using namespace std;

class Solution {
public:
    string addBinary(string a, string b) {
        int i = a.size() - 1;  // Start from the end of string a
        int j = b.size() - 1;  // Start from the end of string b
        int carry = 0;         // Initialize the carry to 0
        string result = "";    // This will hold the resulting binary sum

        // Iterate as long as there are digits to process in either string or there is a carry
        while (i >= 0 || j >= 0 || carry) {
            int sum = carry;  // Start with the carry value

            // Add digit from string a if available
            if (i >= 0) {
                sum += a[i] - '0';  // Convert char to int by subtracting '0'
                i--;
            }

            // Add digit from string b if available
            if (j >= 0) {
                sum += b[j] - '0';  // Convert char to int by subtracting '0'
                j--;
            }

            // Calculate new carry
            carry = sum / 2;

            // Append current digit (0 or 1) to the result
            result += (sum % 2) + '0';  // Convert int back to char by adding '0'
        }

        // The result string is currently reversed, so reverse it to get the final sum
        reverse(result.begin(), result.end());

        return result;
    }
};

int main() {
    Solution sol;
    string a1 = "11", b1 = "1";
    string a2 = "1010", b2 = "1011";

    cout << "Result of addBinary(\"11\", \"1\"): " << sol.addBinary(a1, b1) << endl;  // Output: "100"
    cout << "Result of addBinary(\"1010\", \"1011\"): " << sol.addBinary(a2, b2) << endl;  // Output: "10101"

    return 0;
}
