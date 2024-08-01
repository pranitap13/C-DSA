#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> Series(int n) {
        const int MOD = 1000000007;  // Define the modulo constant

        // Vector to store Fibonacci numbers up to nth term
        vector<int> fibSeries(n + 1);

        // Base cases
        fibSeries[0] = 0;  // First term
        if (n >= 1) {
            fibSeries[1] = 1;  // Second term
        }

        // Calculate the Fibonacci series iteratively
        for (int i = 2; i <= n; ++i) {
            // Compute each term as sum of the previous two, modulo MOD
            fibSeries[i] = (fibSeries[i - 1] + fibSeries[i - 2]) % MOD;
        }

        return fibSeries;  // Return the complete Fibonacci series
    }
};

int main() {
    Solution sol;
    int n;

    // Input the value of n
    cout << "Enter the value of n: ";
    cin >> n;

    // Get the Fibonacci series up to the nth term
    vector<int> result = sol.Series(n);

    // Output the Fibonacci series
    cout << "Fibonacci series up to the " << n << "th term: ";
    for (int i = 0; i <= n; ++i) {
        cout << result[i] << " ";
    }
    cout << endl;

    return 0;
}
