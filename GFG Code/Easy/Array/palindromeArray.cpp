#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    bool PalinArray(vector<int> &arr) {
        // Iterate through each number in the array
        for (int num : arr) {
            if (!isPalindrome(num)) {
                return false; // If any number is not a palindrome, return false
            }
        }
        return true; // All numbers are palindromes
    }
    
  private:
    // Helper function to check if a given number is a palindrome
    bool isPalindrome(int number) {
        int originalNumber = number;
        int reversedNumber = 0;

        // Reverse the number
        while (number > 0) {
            int digit = number % 10;
            reversedNumber = reversedNumber * 10 + digit;
            number /= 10;
        }

        // Compare the original number with its reverse
        return originalNumber == reversedNumber;
    }
};

// Test the solution
int main() {
    Solution solution;

    vector<int> arr1 = {111, 222, 333, 444, 555};
    cout << (solution.PalinArray(arr1) ? "true" : "false") << endl;

    vector<int> arr2 = {121, 131, 20};
    cout << (solution.PalinArray(arr2) ? "true" : "false") << endl;

    return 0; // Missing return statement in main function
}
