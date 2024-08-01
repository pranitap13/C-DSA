#include <iostream>
#include <vector>
using namespace std;

// Function to compute GCD using the Euclidean algorithm
int computeGCD(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

// Function to compute LCM using the relationship between LCM and GCD
int computeLCM(int a, int b, int gcd) {
    return (a / gcd) * b;  // Avoids overflow by dividing first
}

// Function to compute LCM and GCD
vector<int> lcmAndGcd(int a, int b) {
    int gcd = computeGCD(a, b);
    int lcm = computeLCM(a, b, gcd);
    return {lcm, gcd};
}

int main() {
    // Example 1
    int a1 = 5, b1 = 10;
    vector<int> result1 = lcmAndGcd(a1, b1);
    cout << "Input: a = " << a1 << ", b = " << b1 << endl;
    cout << "Output: LCM = " << result1[0] << ", GCD = " << result1[1] << endl;
    cout << "Explanation: LCM of " << a1 << " and " << b1 << " is " << result1[0]
         << ", while their GCD is " << result1[1] << ".\n" << endl;

    // Example 2
    int a2 = 14, b2 = 8;
    vector<int> result2 = lcmAndGcd(a2, b2);
    cout << "Input: a = " << a2 << ", b = " << b2 << endl;
    cout << "Output: LCM = " << result2[0] << ", GCD = " << result2[1] << endl;
    cout << "Explanation: LCM of " << a2 << " and " << b2 << " is " << result2[0]
         << ", while their GCD is " << result2[1] << ".\n" << endl;

    return 0;
}
