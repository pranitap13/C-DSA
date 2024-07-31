//Print GFG n times without the loop.
#include <iostream>
using namespace std;

// Function to print "GFG" N times recursively
void printGfg(int N) {
    // Base case: if N is 0, stop recursion
    if (N <= 0) {
        return;
    }
    
    // Print "GFG"
    cout << "GFG ";
    
    // Recursive call with decremented count
    printGfg(N - 1);
}

int main() {
    int N;
    cout << "Enter the number of times to print GFG: ";
    cin >> N;
    
    // Initial call to the function with N
    printGfg(N);
    
    return 0;
}
