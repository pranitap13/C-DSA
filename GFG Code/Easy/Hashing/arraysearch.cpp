#include <vector>
#include <iostream>
#include <vector>
class Solution {
  public:
    // Function to search x in arr
    // arr: input array
    // x: element to be searched for
    int search(std::vector<int>& arr, int x) {
        // Iterate through the array
        for (int i = 0; i < arr.size(); ++i) {
            // Check if the current element is equal to x
            if (arr[i] == x) {
                // Return the index of the first occurrence
                return i;
            }
        }
        // If the loop completes, x is not in the array
        return -1;
    }
};


int main() {
    Solution solution;
    std::vector<int> arr1 = {1, 2, 3, 4};
    int x1 = 3;
    std::cout << "Index of " << x1 << " is: " << solution.search(arr1, x1) << std::endl;

    std::vector<int> arr2 = {10, 8, 30, 4, 5};
    int x2 = 5;
    std::cout << "Index of " << x2 << " is: " << solution.search(arr2, x2) << std::endl;

    std::vector<int> arr3 = {10, 8, 30};
    int x3 = 6;
    std::cout << "Index of " << x3 << " is: " << solution.search(arr3, x3) << std::endl;

    return 0;
}
