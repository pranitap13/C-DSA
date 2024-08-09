#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        // Pointer for the next position to place a non-val element
        int k = 0;
        
        // Iterate through each element in the array
        for (int i = 0; i < nums.size(); ++i) {
            // If the current element is not equal to val
            if (nums[i] != val) {
                // Place it at the next available position
                nums[k] = nums[i];
                k++; // Increment k to point to the next position
            }
        }
        
        // Return the number of elements not equal to val
        return k;
    }
};

// Test the solution
int main() {
    Solution solution;
    
    vector<int> nums1 = {3, 2, 2, 3};
    int val1 = 3;
    int k1 = solution.removeElement(nums1, val1);
    cout << "Output: " << k1 << ", nums = [";
    for (int i = 0; i < k1; ++i) {
        cout << nums1[i];
        if (i < k1 - 1) cout << ", ";
    }
    cout << "]" << endl;  // Expected Output: 2, nums = [2, 2]

    vector<int> nums2 = {0, 1, 2, 2, 3, 0, 4, 2};
    int val2 = 2;
    int k2 = solution.removeElement(nums2, val2);
    cout << "Output: " << k2 << ", nums = [";
    for (int i = 0; i < k2; ++i) {
        cout << nums2[i];
        if (i < k2 - 1) cout << ", ";
    }
    cout << "]" << endl;  // Expected Output: 5, nums = [0, 1, 4, 0, 3]

    return 0;
}
