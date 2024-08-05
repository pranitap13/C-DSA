#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    // Function to return the sum of elements
    int sum(vector<int>& arr) {
        int totalSum = 0;  // Initialize a variable to store the sum
        for (int i = 0; i < arr.size(); i++) {  // Iterate through each element
            totalSum += arr[i];  // Add the element to totalSum
        }
        return totalSum;  // Return the calculated sum
    }
};

int main() {
    Solution sol;
    
    vector<int> arr1 = {1, 2, 3, 4};
    vector<int> arr2 = {1, 3, 3};
    
    cout << "Sum of arr1: " << sol.sum(arr1) << endl;  // Output: 10
    cout << "Sum of arr2: " << sol.sum(arr2) << endl;  // Output: 7
    
    return 0;
}
