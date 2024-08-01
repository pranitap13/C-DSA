#include <bits/stdc++.h>
using namespace std;

// Function to find a single subset that sums to the target value
bool printF(int ind, vector<int> &ds, int arr[], int s, int sum, int n) {
    // Base case: If we've considered all elements in the array
    if (ind == n) {
        // Check if the current subset sum equals the target sum
        if (s == sum) {
            for (auto it : ds) 
                cout << it << " "; // Print the current subset
            cout << endl;  // Move to the next line after printing the subset
            return true;   // Found a valid subset, return true to stop further processing
        }
        return false; // No valid subset found at this point
    }

    // Pick the current element
    ds.push_back(arr[ind]);  // Add the current element at index 'ind' to the subset
    s += arr[ind];           // Add the current element's value to the current subset sum

    // Check if picking the current element leads to a solution
    if (printF(ind + 1, ds, arr, s, sum, n)) {
        return true;  // If a valid subset is found, return true
    }

    // Backtrack: undo the pick operation
    s -= arr[ind];  // Subtract the current element's value from the subset sum
    ds.pop_back();  // Remove the current element from the subset

    // Not pick the current element
    // Check if not picking the current element leads to a solution
    if (printF(ind + 1, ds, arr, s, sum, n)) {
        return true;  // If a valid subset is found, return true
    }

    return false;  // No valid subset found after considering both pick and not pick options
}

int main() {
    int arr[] = {1, 2, 1};  // The array to analyze
    int n = 3;              // Number of elements in the array
    int sum = 2;            // Target sum to match
    vector<int> ds;         // Vector to store the current subset

    printF(0, ds, arr, 0, sum, n);  // Call the function to find a valid subset

    return 0;
}
