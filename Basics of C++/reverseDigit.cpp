#include<bits/stdc++.h>
using namespace std;

/*Given a signed 32-bit integer x, return x with its digits reversed.
 If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], then return 0.

Assume the environment does not allow you to store 64-bit integers (signed or unsigned).*/


class Solution {
public:
    int reverse(int x) {
        int reverseN = 0;
        
        while (x != 0) {
            int lastDigit = x % 10;  // Get the last digit
            
            // Check for potential overflow before performing operations
            if (reverseN > INT_MAX / 10 || (reverseN == INT_MAX / 10 && lastDigit > 7)) {
                return 0; // Overflow for positive numbers
            }
            if (reverseN < INT_MIN / 10 || (reverseN == INT_MIN / 10 && lastDigit < -8)) {
                return 0; // Overflow for negative numbers
            }
         reverseN = reverseN * 10 + lastDigit; // Safely add the last digit
            x /= 10; // Remove the last digit from x
        }
        
        return reverseN; // Return the reversed integer
    }
};

int main() {
    Solution solution;
    
    // Test examples
    cout << "Input: 123, Output: " << solution.reverse(123) << endl;        // Expected: 321
    cout << "Input: -123, Output: " << solution.reverse(-123) << endl;      // Expected: -321
    cout << "Input: 120, Output: " << solution.reverse(120) << endl;        // Expected: 21
    cout << "Input: 1534236469, Output: " << solution.reverse(1534236469) << endl; // Expected: 0 (overflow)
    cout << "Input: 2147483647, Output: " << solution.reverse(2147483647) << endl; // Expected: 0 (overflow)
    cout << "Input: -2147483648, Output: " << solution.reverse(-2147483648) << endl; // Expected: 0 (overflow)

    return 0; // Correctly closing main
}


/*Extracting digits(reversing num)
int main(){

    int num;
    int count = 0;
    cout << "Enter a integer number:";
    cin >> num;
    while(num > 0){
      
      int lastDigit = num % 10;
      cout << lastDigit << " ";
      count = count + 1;
      num = num / 10;

    }
    cout << endl;
    cout<< "The count of Digits is:" << count << " ";
     return 0;
}
*/