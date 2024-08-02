#include <iostream>
#include <vector>

using namespace std;

class Solution {
  public:
    // Just print the space separated array elements
    void printArray(vector<int> &arr) {
        int n = arr.size(); // Get the size of the array
        for (int i = 0; i < n; ++i) {
            cout << arr[i];
            // Print a space only if it's not the last element
            if (i < n - 1) {
                cout << " ";
            }
        }
        // Note: No newline at the end as specified
    }
};

int main() {
    Solution solution;

    vector<int> arr1 = {1, 2, 3, 4, 5};
    solution.printArray(arr1);  // Output: 1 2 3 4 5
    cout << endl;  // To move to the next line for the next output

    vector<int> arr2 = {2, 3, 5, 5};
    solution.printArray(arr2);  // Output: 2 3 5 5
    cout << endl;  // To move to the next line for the next output

    return 0;
}
