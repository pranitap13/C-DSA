#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    bool isArmstrong(int x) {
        int original = x;
        int numDigits = 0;
        int sum = 0;

        // Determine the number of digits
        int temp = x;
        while (temp > 0) {
            temp /= 10;
            numDigits++;
        }

        // Compute sum of each digit raised to the power of numDigits
        temp = x;
        while (temp > 0) {
            int lastDigit = temp % 10;
            sum += pow(lastDigit, numDigits);
            temp /= 10;
        }

        // Check if the sum matches the original number
        return (original == sum);
    }
};

int main() {
    Solution solution;
    int num;

    cout << "Enter an integer: ";
    cin >> num;

    if (solution.isArmstrong(num)) {
        cout << num << " is an Armstrong number!" << endl;
    } else {
        cout << num << " is not an Armstrong number!" << endl;
    }

    return 0;
}

