#include <iostream>
using namespace std;

class Solution {
public:
    void printTillN(int N) {
        // Base Case: If N is less than 1, stop recursion
        if (N < 1) {
            return;
        }
        
        // Recursive call to print the numbers from 1 to N-1
        printTillN(N - 1);
        
        // Print the current number N followed by a space
        cout << N << " ";
    }
};

int main() {
    Solution solution;
    
    // Example usage with N = 5
    solution.printTillN(5);
    cout << endl;  // Newline for clean output
    
    // Example usage with N = 10
    solution.printTillN(10);
    cout << endl;  // Newline for clean output

    return 0;
}
